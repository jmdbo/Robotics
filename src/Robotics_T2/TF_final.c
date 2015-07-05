//Lines TresHold
#define THRESHOLD_BLACK 30
#define THRESHOLD_WHITE 60
#define THRESHOLD_GREY 40
//Map
int map[][];
#define mapRes_length 10
#define mapRes_wiidth 10

#define NEAR 14
#define NEAR_TURN 25
//Wait times****************
#define MOVE_TIME 500
#define TURN_TIME 300
#define WAIT_TIME 200
//Speed*********************
#define SLOW_VEL 25
#define MAX_AD_VEL 50

int Treshold_Line = 0;
int Treshold_Line1 = 0;
int Treshold_Victim = 0;
int Treshold_Victim1 = 0;
int victimCount = 0;

#define sensorRange 8

//TODO: ID Number Victims and Type
//TODO: Route time
//TODO: Victims Sound

struct flags
{
	bool _stopFlag;
};

struct distanceSensor{
	int d1; //Esquerda
	int d2; //Direita
	int d3; //Frente
	int d4; //Tras
};

struct lightSensor{
	int sensor_in3;
	int sensor_in4;
	int last_activated;
};

struct timerTable{
	long startTime;
	long lineTime;
	long blackTime;
	long victimTime;
};

mutex distanceMutex;
mutex motorBMutex;


bool lookingLeft = true;
bool lookingRigt = false;
flags myflags;
distanceSensor mydist;
lightSensor mylight;
timerTable mytimer;

sub init(){
	SetSensorLight(IN_3);
	SetSensorLight(IN_4);
	SetSensorLowspeed(IN_2);

}

sub calibration(){
	int calibrationDone = 0;

	while (calibrationDone < 2){

		mydist.d3 = SensorUS(IN_2);
		mylight.sensor_in3 = Sensor(IN_3);
		mylight.sensor_in4 = Sensor(IN_4);

		if (calibrationDone == 0) {
			TextOut(1, LCD_LINE1, "Calibrate Lines", true);
			if (mydist.d3 < NEAR){
				PlayToneEx(300, 400, 5, FALSE);
				Treshold_Line = mylight.sensor_in3;
				Treshold_Line1 = mylight.sensor_in4;

				//apagar ou comentar***********
				//Treshold_Line=THRESHOLD_BLACK;
				//Treshold_Line1=THRESHOLD_BLACK;
				//******************************

				TextOut(5, LCD_LINE2, "Done", true);
				NumOut(60, LCD_LINE3, Treshold_Line);
				NumOut(60, LCD_LINE4, Treshold_Line1);
				Wait(2000);
				calibrationDone++;
			}
		}

		mydist.d3 = SensorUS(IN_2);

		if (calibrationDone == 1) {
			TextOut(1, LCD_LINE3, "Calibrate Victims", true);
			if (mydist.d3 < NEAR){
				PlayToneEx(300, 400, 5, FALSE);
				Treshold_Victim = mylight.sensor_in3;
				Treshold_Victim1 = mylight.sensor_in3;

				//Apagar ou comentar************
				//Treshold_Victim1=THRESHOLD_GREY;
				//Treshold_Victim=THRESHOLD_GREY;
				//******************************

				TextOut(5, LCD_LINE2, "Done", true);
				NumOut(60, LCD_LINE3, Treshold_Victim);
				NumOut(60, LCD_LINE4, Treshold_Victim1);
				Wait(100);
				calibrationDone++;
			}
		}

	}



	do{
		mydist.d3 = SensorUS(IN_2);
	} while (mydist.d3 >= NEAR)

		PlayToneEx(262, 400, 3, FALSE);
	Wait(500);
	PlayToneEx(250, 400, 3, FALSE);
}

sub acquireDistances(int i){
	Acquire(distanceMutex);
	mydist.d3 = SensorUS(IN_2);
	if (i != 0){
		//turn sensor Left.
		RotateMotor(OUT_B, 100, -90);
		mydist.d1 = SensorUS(IN_2);
		//turn sensor Right
		RotateMotor(OUT_B, 100, 180);
		mydist.d2 = SensorUS(IN_2);
		RotateMotor(OUT_B, 100, -90);
	}
	Release(distanceMutex);

}

sub end(){
	Off(OUT_AC);
	ClearScreen();
	TextOut(15, LCD_LINE1, "Line Victims:");
	NumOut(40, LCD_LINE2, victimCount);
	TextOut(15, LCD_LINE3, "Temperature Victims:");
	NumOut(40, LCD_LINE4, 0);
	TextOut(15, LCD_LINE5, "Total Time in seconds:");
	mytimer.startTime = CurrentTick() - mytimer.startTime;
	long seconds = mytimer.startTime / 1000;
	NumOut(40, LCD_LINE6, mytimer.startTime);

}


sub mazeSolver(){
	int maxDist = 18;
	int minDist = 15;
	int compensan = 0;
	int isMaze = 1;
	int orientation = 1;
	int d1;
	int d2;
	int d3, d4;
	int oldD1, oldD2, oldD3;
	Acquire(distanceMutex);
	oldD1 = mydist.d1;
	oldD2 = mydist.d2;
	oldD3 = mydist.d3;
	Release(distanceMutex);
	OnFwdSync(OUT_AC, 20, compensan);
	while (isMaze){
		mylight.sensor_in3 = Sensor(IN_3);
		mylight.sensor_in4 = Sensor(IN_4);
		oldD1 = d1;
		oldD2 = d2;
		oldD3 = d3;
		Acquire(distanceMutex);
		d1 = mydist.d1;
		d2 = mydist.d2;
		d3 = mydist.d3;
		Release(distanceMutex);
		ClearScreen();
		TextOut(15, LCD_LINE2, "Solving maze...");
		NumOut(40, LCD_LINE3, compensan);
		TextOut(0, LCD_LINE4, "D1: ");
		NumOut(40, LCD_LINE4, d1);
		TextOut(0, LCD_LINE4, "D3: ");
		NumOut(40, LCD_LINE5, d3);
		//Contorno de parede
		if ((mylight.sensor_in3 > Treshold_Line - sensorRange && mylight.sensor_in3 < Treshold_Line + sensorRange) &&
			(mylight.sensor_in4 > Treshold_Line1 - sensorRange && mylight.sensor_in4 < Treshold_Line1 + sensorRange)){
			end();
			break;

		}
		if (d1 > 40 && d1 < 110){

			RotateMotorEx(OUT_AC, 20, 180, 0, true, true);
			lookingRigt = true;
			Wait(2000);
			Acquire(distanceMutex);
			d1 = mydist.d1;
			d2 = mydist.d2;
			d3 = mydist.d3;
			Release(distanceMutex);
			RotateMotorEx(OUT_AC, 20, 150, -100, true, true);
			Wait(50);
			RotateMotorEx(OUT_AC, 20, 360, 0, true, true);
			TextOut(15, LCD_LINE2, "Checking Wall...");
			Wait(1000);
			Acquire(distanceMutex);
			d1 = mydist.d1;
			d2 = mydist.d2;
			d3 = mydist.d3;
			Release(distanceMutex);
			if (d1 > 40){
				RotateMotorEx(OUT_AC, 20, 150, -100, true, true);
				Wait(50);
				RotateMotorEx(OUT_AC, 20, 360, 0, true, true);
				orientation -= 2;
				if (orientation <= 0){
					orientation += 4;
				}
			}
			else{
				orientation--;
			}
			lookingRigt = false;
			compensan = 0;

		}//Fim do contorno da parede
		//Compensação dos motores
		if (d1 < minDist && oldD1 != d1){
			if (compensan < 0){
				compensan = 0;
			}
			else if (compensan < 5){
				compensan = compensan + 1;
			}
			RotateMotorEx(OUT_AC, 20, 90, compensan, true, false);
			OnFwdSync(OUT_AC, 20, compensan);
		}
		else if (d1 > maxDist && oldD1 != d1){
			if (compensan > 0){
				compensan = 0;
			}
			else if (compensan > -5){
				compensan = compensan - 1;
			}
			RotateMotorEx(OUT_AC, 20, 90, compensan, true, false);
			OnFwdSync(OUT_AC, 20, compensan);
		}
		if (d3 < NEAR){
			Off(OUT_AC);
			lookingRigt = true;
			TextOut(15, LCD_LINE2, "Acquiring Distances");
			Wait(2000);

			Acquire(distanceMutex);
			d1 = mydist.d1;
			d2 = mydist.d2;
			d3 = mydist.d3;
			d4 = mydist.d4;
			Release(distanceMutex);
			if (d2 > d1 && d2 > NEAR_TURN){
				RotateMotorEx(OUT_AC, 20, -90, 0, true, true);
				Wait(50);
				mylight.sensor_in3 = Sensor(IN_3);
				mylight.sensor_in4 = Sensor(IN_4);
				RotateMotorEx(OUT_AC, 20, -150, 100, true, true);
				orientation++;
				if (orientation > 4){
					orientation -= 4;
				}
			}
			else if (d1 > d2 && d1 > NEAR_TURN){
				RotateMotorEx(OUT_AC, 20, 90, 0, true, true);

				mylight.sensor_in3 = Sensor(IN_3);
				mylight.sensor_in4 = Sensor(IN_4);
				Wait(50);
				RotateMotorEx(OUT_AC, 20, 150, 100, true, true);
				orientation--;
				if (orientation <= 0){
					orientation += 4;
				}
			}
			else if (d4 > NEAR_TURN){
				//Roda para trás.
				RotateMotorEx(OUT_AC, 20, -90, 0, true, true);
				Wait(50);
				mylight.sensor_in3 = Sensor(IN_3);
				mylight.sensor_in4 = Sensor(IN_4);
				RotateMotorEx(OUT_AC, 20, -300, 100, true, true);
				orientation -= 2;
				if (orientation <= 0){
					orientation += 4;
				}
			}
			if ((mylight.sensor_in3 > Treshold_Line - sensorRange && mylight.sensor_in3 < Treshold_Line + sensorRange) &&
				(mylight.sensor_in4 > Treshold_Line1 - sensorRange && mylight.sensor_in4 < Treshold_Line1 + sensorRange)){
				end();
				break;

			}
			lookingRigt = false;

		}
	}
}

task getDistances(){
	while (true){

		Acquire(motorBMutex);
		if (lookingLeft){
			Acquire(distanceMutex);
			mydist.d3 = SensorUS(IN_2);
			Release(distanceMutex);
			//turn sensor Left.
			RotateMotor(OUT_B, 60, -90);
			Acquire(distanceMutex);
			mydist.d1 = SensorUS(IN_2);
			Release(distanceMutex);
			//turn sensor Right
			RotateMotor(OUT_B, 60, 90);
			Release(distanceMutex);
		}
		if (lookingRigt){
			Acquire(distanceMutex);
			mydist.d3 = SensorUS(IN_2);
			Release(distanceMutex);
			//turn sensor Left.
			RotateMotor(OUT_B, 60, 90);
			Acquire(distanceMutex);
			mydist.d2 = SensorUS(IN_2);
			Release(distanceMutex);
			//turn sensor Right
			RotateMotor(OUT_B, 60, -90);
			Release(distanceMutex);
		}
		Release(motorBMutex);

	}
}

//Obstacle handler
sub obstacleDetected(int d){
	TextOut(15, LCD_LINE2, "ObstacleDetected", true);
	if (d < 0){
		NumOut(60, LCD_LINE3, d);
		OnFwdSync(OUT_AC, MAX_AD_VEL, 0);
		Wait(1000);
		RotateMotorEx(OUT_AC, MAX_AD_VEL, 180, -100, true, true);
		OnFwdSync(OUT_AC, MAX_AD_VEL, 0);
		Wait(2200);
		RotateMotorEx(OUT_AC, MAX_AD_VEL, 180, -100, true, true);
		OnFwdSync(OUT_AC, MAX_AD_VEL, 0);
		Wait(500);
		RotateMotorEx(OUT_AC, MAX_AD_VEL, 50, 100, true, true);
	}
	else{
		NumOut(60, LCD_LINE3, d);
		OnFwdSync(OUT_AC, MAX_AD_VEL, 0);
		Wait(1000);
		RotateMotorEx(OUT_AC, MAX_AD_VEL, 180, 100, true, true);
		OnFwdSync(OUT_AC, MAX_AD_VEL, 0);
		Wait(2200);
		RotateMotorEx(OUT_AC, MAX_AD_VEL, 180, 100, true, true);
		OnFwdSync(OUT_AC, MAX_AD_VEL, 0);
		Wait(500);
		RotateMotorEx(OUT_AC, MAX_AD_VEL, 50, -100, true, true);
	}
	OnFwdSync(OUT_AC, MAX_AD_VEL, 0);
}



sub moveFwdSyncAC(int speed, int angle, int turn){
	if (myflags._stopFlag == true)
		speed = 0;
	RotateMotorEx(OUT_AC, speed, angle, turn, true, true);
}


sub checkLine(){
	int lineCount = 0;

	mylight.sensor_in3 = Sensor(IN_3);
	mylight.sensor_in4 = Sensor(IN_4);

	if ((mylight.sensor_in3 > Treshold_Line - sensorRange && mylight.sensor_in3 < Treshold_Line + sensorRange) &&
		(mylight.sensor_in4 > Treshold_Line1 - sensorRange && mylight.sensor_in4 < Treshold_Line1 + sensorRange)){
		moveFwdSyncAC(50, 90, 0);
		mytimer.lineTime = CurrentTick();
	}
	else if (mylight.sensor_in3 > Treshold_Line - sensorRange && mylight.sensor_in3 < Treshold_Line + sensorRange){
		//Turn Left
		OnFwdSync(OUT_AC, 60, 100);
		while (mylight.sensor_in3 > Treshold_Line - sensorRange && mylight.sensor_in3 < Treshold_Line + sensorRange && (mylight.sensor_in4 < Treshold_Line1 - sensorRange || mylight.sensor_in4 > Treshold_Line1 + sensorRange)){
			TextOut(5, LCD_LINE2, "Turning Left", true);
			mylight.sensor_in3 = Sensor(IN_3);
			OnFwdSync(OUT_AC, 60, 100);
		}
		mylight.last_activated = 3;
		mytimer.lineTime = CurrentTick();
	}
	else if (mylight.sensor_in4 > Treshold_Line1 - sensorRange && mylight.sensor_in4 < Treshold_Line1 + sensorRange){
		//turn right
		OnFwdSync(OUT_AC, 60, -100);
		while (mylight.sensor_in4 > Treshold_Line1 - sensorRange && mylight.sensor_in4 < Treshold_Line1 + sensorRange && (mylight.sensor_in3 < Treshold_Line - sensorRange || mylight.sensor_in3 > Treshold_Line + sensorRange)){
			TextOut(5, LCD_LINE2, "Turning Right", true);
			mylight.sensor_in4 = Sensor(IN_4);
			OnFwdSync(OUT_AC, 60, -100);
		}
		mylight.last_activated = 4;
		mytimer.lineTime = CurrentTick();
	}
	else if ((mylight.sensor_in3 > Treshold_Victim - sensorRange && mylight.sensor_in3 < Treshold_Victim + sensorRange) && (mylight.sensor_in4 > Treshold_Victim1 - sensorRange && mylight.sensor_in4 < Treshold_Victim1 + sensorRange)){
		//detect victim, stop and play sound
		Off(OUT_AC);
		mylight.sensor_in3 = Sensor(IN_3);
		mylight.sensor_in4 = Sensor(IN_4);
		if ((mylight.sensor_in3 > Treshold_Victim - sensorRange && mylight.sensor_in3 < Treshold_Victim + sensorRange) && (mylight.sensor_in4 > Treshold_Victim1 - sensorRange && mylight.sensor_in4 < Treshold_Victim1 + sensorRange)){
			if ((CurrentTick() - mytimer.victimTime) > 80){
				PlayToneEx(180, 400, 3, FALSE);
				PlayToneEx(180, 400, 3, FALSE);
				Wait(500);
				mytimer.victimTime = CurrentTick();
				victimCount++;
			}
		}
		moveFwdSyncAC(40, 90, 0);
	}
	else{
		OnFwdSync(OUT_AC, 40, 0);
		TextOut(5, LCD_LINE2, "Moving forward");
	}
}


task main(){
	int close = 0;
	int loopcount = 0;
	int i;
	init();
	calibration();
	int isObstacle = 0;

	moveFwdSyncAC(60, 10, 0);
	mytimer.startTime = CurrentTick();

	while (!close){
		acquireDistances(0);
		checkLine();
		if (mydist.d3 < NEAR){
			Off(OUT_AC);
			Wait(10);
			acquireDistances(1);
			int d = mydist.d1 - mydist.d2;
			OnRev(OUT_AC, 50);
			Wait(WAIT_TIME);
			Off(OUT_AC);
			if (d < 0){
				TextOut(5, LCD_LINE5, "d<0");
				TextOut(5, LCD_LINE8, "d<0");
				TextOut(5, LCD_LINE4, "NOT DETECTED");
				isObstacle = 0;

				for (i = 0; i<9; i++){
					moveFwdSyncAC(40, 20, 100);
					mylight.sensor_in3 = Sensor(IN_3);
					mylight.sensor_in4 = Sensor(IN_4);
					NumOut(20, LCD_LINE6, mylight.sensor_in3);
					NumOut(20, LCD_LINE7, mylight.sensor_in4);
					if ((mylight.sensor_in3 > Treshold_Line - sensorRange && mylight.sensor_in3 < Treshold_Line + sensorRange) || (mylight.sensor_in4 > Treshold_Line1 - sensorRange && mylight.sensor_in4 < Treshold_Line1 + sensorRange)){
						if (!isObstacle)
							isObstacle = 1;
						TextOut(5, LCD_LINE4, "IS OBSTACLE!!!");
					}
				}
				if (!isObstacle)
					TextOut(5, LCD_LINE4, "NOT OBSTACLE!!!");
				Off(OUT_AC);
				Wait(500);
			}
			else{
				TextOut(5, LCD_LINE5, "d>0");
				TextOut(5, LCD_LINE8, "d>0");
				TextOut(5, LCD_LINE4, "NOT DETECTED");
				for (i = 0; i<9; i++){
					moveFwdSyncAC(40, 20, -100);
					mylight.sensor_in3 = Sensor(IN_3);
					mylight.sensor_in4 = Sensor(IN_4);
					NumOut(20, LCD_LINE6, mylight.sensor_in3);
					NumOut(20, LCD_LINE7, mylight.sensor_in4);
					if ((mylight.sensor_in3 > Treshold_Line - sensorRange && mylight.sensor_in3 < Treshold_Line + sensorRange) || (mylight.sensor_in4 > Treshold_Line1 - sensorRange && mylight.sensor_in4 < Treshold_Line1 + sensorRange)){
						if (!isObstacle)
							isObstacle = 1;
						TextOut(5, LCD_LINE4, "IS OBSTACLE!!!");
					}
				}

				Off(OUT_AC);
				Wait(500);
			}
			if (isObstacle){
				obstacleDetected(d);

			}
			else {
				TextOut(5, LCD_LINE4, "NOT OBSTACLE!!!");
				start getDistances;
				close = 1;
				mazeSolver();
				stop getDistances;
				Wait(10000);
			}
			mytimer.lineTime = CurrentTick();
		}



		/*if(CurrentTick()-mytimer.lineTime>2000){
		acquireDistances(1);
		}*/

	}
}
