#include "Main32.h"
#using <mscorlib.dll>

using namespace System;



int InitializeRobot(TCommPort *Cp)
{
	int tam;
	Cp->Enviar(" ", 1, tam);
	printf("\n%s...", Cp->GetMensagem());
	Sleep(500);
	//robot will respond with 15
	char Buff[128];
	Cp->EsperarRecepcao();
	Cp->Receber(Buff, 1, tam);
	printf("\n%s...", Cp->GetMensagem());
	return Buff[0];
}

void move_one_axis(TCommPort *Cp, int axis, int steps)
{
	int tam;
	char Buff[128], command[20] = { 0x08 + axis - 1, steps, 3 };

	Cp->Enviar(command, 3, tam);
	printf("\n%s...", Cp->GetMensagem());
	Sleep(500);

	//robot will respond with 15
	Cp->EsperarRecepcao();
	Cp->Receber(Buff, 1, tam);
	printf("\n%s...", Cp->GetMensagem());


}

void move_one_axis_speed(TCommPort* Cp, int axis, int steps, int speed)
{
	if (steps!= -1){
		int tam;
		char Buff[128];
		char command[20] = { 0x78 + axis -1 , steps, speed, 3 };
		Cp->Enviar(command, 4, tam);
		Sleep(500);
		//*******************************************************
		//Falar com Peres
		//robot will respond with 15
		Cp->EsperarRecepcao();
		Cp->Receber(Buff, 1, tam);
		//printf("\n%s...", Cp->GetMensagem());
	}
}

void move_multiple_axis(TCommPort *Cp, int* steps)
{
	int tam;
	char command[20] = { 0x0F, steps[0], steps[1], steps[2], steps[3], steps[4], steps[5], 3 }, Buff[128];

	Cp->Enviar(command, 8, tam);
	printf("\n%s...", Cp->GetMensagem());
	Sleep(500);

	//robot wil respond with 15
	Cp->EsperarRecepcao();
	Cp->Receber(Buff, 8, tam);
	printf("\n%s...", Cp->GetMensagem());
}

void move_multiple_axis_speed(TCommPort *Cp, int* steps, int* speed)
{
	int tam, count = 0;
	char Buff[128];
	char command1[20] = { 0x47, 3 };
	/**
	Cp->Enviar(command1, 2, tam);
	Cp->EsperarRecepcao();
	Cp->Receber(Buff, 8, tam);
	
	for (int i = 0; i < 6; i++)
	{
		if (steps[i] == -1){
			steps[i] = (unsigned char)Buff[i + 1];
			count++;
		}
	}
	*/
	//if (count <= 6){
	char command[20] = { 0x7F, steps[0], steps[1], steps[2], steps[3], steps[4], steps[5], speed[0], speed[1], speed[2], speed[3], speed[4], speed[5], 3, 0};
	Cp->Enviar(command, 14, tam);
	printf("\n%s...", Cp->GetMensagem());
	Sleep(500);
	//robot wil respond with 15
	Cp->EsperarRecepcao();
	Cp->Receber(Buff, 1, tam);
	//printf("\n%s...", Cp->GetMensagem());
	//}
}

void all_motor_status(TCommPort *Cp, char* steps)
{
	int tam;
	char command[20] = { 0x47, 3 };
	char Buff[128];


	Cp->Enviar(command, 2, tam);
	printf("\n%s...", Cp->GetMensagem());
	Sleep(500);

	Cp->EsperarRecepcao();
	Cp->Receber(Buff, 8, tam);
	int *pos = new int[6];

	for (int i = 0; i < 6; i++)
	{
		steps[i] = (unsigned char)Buff[i + 1];
	}
}

int motor_status(TCommPort *Cp, int axis){
	int tam;
	char command[20] = { 0x40+axis-1, 3 };
	char Buff[128];


	Cp->Enviar(command, 2, tam);
	printf("\n%s...", Cp->GetMensagem());
	Sleep(500);

	Cp->EsperarRecepcao();
	Cp->Receber(Buff, 3, tam);
	int pos=(unsigned char)Buff[1];
	return pos;
}
// nao funca*********************
void digital_outputs(TCommPort *Cp, int data)
{
	int tam;
	//data = 0x1;
	char Buff[8], command[10] = { 0x10, data, 3 };

	Cp->Enviar(command, 3, tam);
	Cp->EsperarRecepcao();
	Cp->Receber(Buff, 8, tam);
	printf("Cheguei");
}
//*******************************
int degrees_to_steps(double degrees, int axis)
{
	double stepF;
	int step;

	switch (axis)
	{
	case 1:
		degrees = degrees - 80;
		stepF = degrees / -0.62745098039215686274509803921569;
		step = (int)(stepF + 0.5);
		break;
	case 2:
		degrees = 66.6666666666666666666666666666666 - degrees;
		stepF = degrees / 0.3921568627450980392156862745098;
		step = (int)(stepF + 0.5);
		break;
	case 3:
		degrees = 0 - degrees;
		stepF = degrees / 0.3921568627450980392156862745098;
		step = (int)(stepF + 0.5);
		break;
	case 4:
		degrees = 100 - degrees;
		stepF = degrees / 0.78431372549019607843137254901961;
		step = (int)(stepF + 0.5);
		break;
	case 5:
		degrees = 0 - degrees;
		//degrees = 200 - degrees;
		stepF = degrees / 0.78431372549019607843137254901961;
		step = (int)(stepF + 0.5);
		break;
	default:
		break;
	}
	if (step > 255){
		return -1;
	}
	else return step;
}

int mm_to_steps(double distance)
{
	int steps = 0;
	double stepsf;

	distance = distance - 60;
	stepsf = distance / -0.2352941176470588;
	steps = (int)(stepsf + 0.5);

	return steps;
}

double steps_to_degrees(int steps, int axis)
{
	double degrees;

	switch (axis)
	{
	case 1:
		degrees = steps * -0.62745098039215686274509803921569;
		degrees = degrees + 80;
		break;
	case 2:
		degrees = steps * -0.3921568627450980392156862745098;
		degrees = degrees + 66.6666666666666666666666666666666;
		break;
	case 3:
		degrees = steps * -0.3921568627450980392156862745098;
		break;
	case 4:
		degrees = steps * -0.78431372549019607843137254901961;
		degrees = degrees + 100;
		break;
	case 5:
		degrees = steps * -0.78431372549019607843137254901961;
		//degrees = degrees - 200;
		break;
	default:
		break;
	}

	return degrees;
}

double stpes_to_mm(int steps)
{
	double distance;

	distance = steps*-0.2352941176470588;
	distance = distance + 60;

	return distance;
}

double s_atan2(double x, double y)
{
	if (x == 0){
		return -1;
	}
	else
	{
		return atan2(y, x);
	}

}

double to_degrees(double radians)
{
	return radians * 57.295779513;
}

double to_radians(double degrees)
{
	return  degrees / (180.0 / M_PI);
}

int direct_kinematic(double* theta, double* posAtt){

	for (int i = 0; i < 5; i++){
		theta[i] = (float)to_radians(theta[i]);
	}

	double nx = cos(theta[0])*cos(theta[4])*sin(theta[1] + theta[2] + theta[3]) - sin(theta[0])*sin(theta[4]);
	double ny = cos(theta[4])*sin(theta[0])*sin(theta[1] + theta[2] + theta[3]) + cos(theta[0])*sin(theta[4]);
	double nz = ((-1)*cos(theta[1] + theta[2] + theta[3])*cos(theta[4]));

	double sx = ((-1)*cos(theta[4])*sin(theta[0])) - (cos(theta[0])*sin(theta[1] + theta[2] + theta[3])*sin(theta[4]));
	double sy = (cos(theta[0])*cos(theta[4])) - (sin(theta[0])*sin(theta[1] + theta[2] + theta[3])*sin(theta[4]));
	double sz = cos(theta[1] + theta[2] + theta[3])*sin(theta[4]);

	double ax = cos(theta[0])*cos(theta[1] + theta[2] + theta[3]);
	double ay = cos(theta[1] + theta[2] + theta[3])*sin(theta[0]);
	double az = sin(theta[1] + theta[2] + theta[3]);

	double px = cos(theta[0])*(200 * cos(theta[1]) + 130 * cos(theta[1] + theta[2]) + 130 * cos(theta[1] + theta[2] + theta[3]));
	double py = (200 * cos(theta[1]) + 130 * cos(theta[1] + theta[2]) + 130 * cos(theta[1] + theta[2] + theta[3]))*sin(theta[0]);
	double pz = 275 + 200 * sin(theta[1]) + 130 * sin(theta[1] + theta[2]) + 130 * sin(theta[1] + theta[2] + theta[3]);

	double roll = s_atan2(nx, ny);
	double pitch = s_atan2(nx*cos(roll) + ny*sin(roll), -nz);
	double yaw = s_atan2(sy*cos(roll) - sx*sin(roll), -ay*cos(roll) + ax*sin(roll));

	posAtt[0] = px;
	posAtt[1] = py;
	posAtt[2] = pz;
	roll = to_degrees(roll);
	posAtt[3] = roll;
	pitch = to_degrees(pitch);
	posAtt[4] = pitch;
	yaw = to_degrees(yaw);
	posAtt[5] = yaw;

	return 0;
}

//You should implement the other required operations here.
/*
void robot_control_routine(TCommPort *port)
{
	//Create the control routine here with a menu that allows the user to choose
	//which operation the robot should perform (e.g. move_one_axis, move_one_axis_speed...)
	int menu = 0;
	int axis = 0, steps = 0, speed = 0, degrees = 0;
	int steparray[6], speedarray[6];
	bool exit = TRUE;
	int data[8] = { 7, 6, 5, 4, 3, 2, 1, 0 };
	double theta[5] = { 40, 45, -30, 50, -75 };

	while (exit){

		printf("\n**********Menu**********\n1-move_one_axis\n2-move_one_axis_speed");
		printf("\n3-multiple axis\n4-multiple axis_speed\n5-foward kinematics");
		scanf(" %d", &menu);

		switch (menu)
		{
		case 1:
			//move one axis
			printf("axis degrees: ");
			scanf("%d %d", &axis, &degrees);
			move_one_axis(port, axis, degrees_to_steps(degrees, axis));
			break;
		case 2:
			//move one axis speed 
			printf("axis steps speed: ");
			scanf("%d %d %d", &axis, &steps, &speed);
			move_one_axis_speed(port, axis, steps, speed);
			break;
		case 3:
			// move multiple axis
			for (int i = 0; i < 6; i++)
			{
				printf("Axis %d step: ", i + 1);
				scanf(" %d", steparray[i]);
			}
			move_multiple_axis(port, steparray);
			break;
		case 4:
			//move multiple axis speed
			for (int i = 0; i < 6; i++)
			{
				printf("Axis %d step speed: ", i + 1);
				scanf(" %d %d", &steparray[i], &speedarray[i]);
			}
			move_multiple_axis_speed(port, steparray, speedarray);
			break;
		case 5:
			//foward kinematics
			double posAtt[6];
			direct_kinematic(theta, posAtt);
			printf("Valores Cinemática Directa: \n x= %lf y=%lf z=%lf \n Roll= %lf\n Pitch = %lf \n Yaw=%lf", posAtt[0], posAtt[1], posAtt[2], posAtt[3], posAtt[4], posAtt[5]);
			break;
		case 6:

			//digital_outputs(port, data);
			break;

		case 10: exit = FALSE;
		case 0: break;
		default: break;
		}
		axis = 0;
		steps = 0;
		speed = 0;
		menu = 0;
	}
}
*/

TCommPort* initialize_robot()
{
	TCommPort *Cp;
	Cp = new TCommPort();

	if (!Cp->Abrir(L"\\\\.\\com6"))
	{
		printf("\n%s...", Cp->GetMensagem());
		return NULL;
	}
	InitializeRobot(Cp);
		
	return Cp;	
}

int close_robot(TCommPort* Cp)
{
	if (Cp != NULL){
		Cp->Fechar();
		delete Cp;

		return 0;
	}
	else return -1;
}

void calibrate(TCommPort *Cp){
	int steps[6] = { 27, 142, 203, 114, 44, 233 };
	move_multiple_axis(Cp,steps);
}
//Implements the inverse kinematics
// Vector posAtt 1: X 2: Y 3: Z 4: Roll 5: Pitch 6: Yaw
void backward_kinematic(double *posAtt, double* theta)
{
	//posAtt 0-px, 1-py, 2-pz, 3-roll, 4-pitch, 5-yaw.
	double roll = to_radians(posAtt[3]), pitch = to_radians(posAtt[4]), yaw = to_radians(posAtt[5]);
	double px = posAtt[0], py = posAtt[1], pz = posAtt[2];
	
	//valores D-H
	int d1=275,d5 = 130;
	int a2 = 200,a3 = 130;

	//rotz(roll)*roty(pitch)*rotx(yaw)
	double nx = cos(roll)*cos(pitch);
	double ny = sin(roll)*cos(pitch);
	double nz = -sin(pitch);

	double sx = cos(roll)*sin(pitch)*sin(yaw) - sin(roll)*cos(yaw);
	double sy = sin(roll)*sin(pitch)*sin(yaw) + cos(roll)*cos(yaw);
	double sz = cos(pitch)*sin(yaw);

	double ax = cos(roll)*sin(pitch)*cos(yaw) + sin(roll)*sin(yaw);
	double ay = sin(roll)*sin(pitch)*cos(yaw) - cos(roll)*sin(yaw);
	double az = cos(pitch)*cos(yaw);

	theta[0] = s_atan2(px, py);
	
	//aux variables
	double theta123 = s_atan2(ax*cos(theta[0]) + ay*sin(theta[0]),az);
	double cost3 = ((pow((double)(px*cos(theta[0]) + py*sin(theta[0]) - d5*cos(theta123)), 2) + pow((double)(pz - d1-d5*sin(theta123)), 2) - pow((double)a2, 2) - pow((double)a3, 2))/(2*a2*a3));
	double sint3 = 1 - pow(cost3, 2);
	if (sint3 < 0){
		sint3 = 0;
	}

	theta[2] = s_atan2(cost3,-sqrt(sint3));
	if (theta[2] > 0){
		s_atan2(cost3, sqrt(sint3));
	}
	long double x = (a2 + a3*cos(theta[2]))*(-d5*cos(theta123) + cos(theta[0])*px + sin(theta[0])*py) + a3*sin(theta[2])*(-d1 + pz - d5*sin(theta123));
	long double y = (a2 + a3*cos(theta[2]))*(-d1 + pz - d5*sin(theta123)) - a3*sin(theta[2])*(cos(theta[0])*px + sin(theta[0])*py - d5*cos(theta123));
	theta[1] = s_atan2(x,y);
	theta[3] = theta123 - theta[1] - theta[2];
	double div1 = (ny*cos(theta[0]) - nx*sin(theta[0])) / (sy*cos(theta[0]) - sx*sin(theta[0]));
	theta[4] = atan(div1);
	if (theta[4] > 0){
		theta[4] = 0;
	}

	theta[0] = to_degrees(theta[0]);
	theta[1] = to_degrees(theta[1]);
	theta[2] = to_degrees(theta[2]);
	theta[3] = to_degrees(theta[3]);
	theta[4] = to_degrees(theta[4]);

	printf("cinematica");
}
