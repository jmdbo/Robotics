#define _CRT_SECURE_NO_WARNINGS

#include "stdafx.h"
#include "serial32.h"
#include "math.h"
<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS
=======


>>>>>>> master

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

int direct_kinematics(float* theta,float* posAtt){
	if ( (sizeof(theta) != sizeof(float)*5) || (sizeof(posAtt) != sizeof(float)*6) ){
		return -1;
	}
}

void move_one_axis(TCommPort *Cp, int axis, int steps)
{
	int tam;
	char Buff[128];

	char command[20] = { 0x08 + axis - 1, steps, 3 };

	Cp->Enviar(command, 3, tam);
	printf("\n%s...", Cp->GetMensagem());
	Sleep(500);

	//robot will respond with 15
	Cp->EsperarRecepcao();
	Cp->Receber(Buff, 1, tam);
	printf("\n%s...", Cp->GetMensagem());


}

void move_one_axis_speed(TCommPort* Cp, int axis, int steps, int speed){
	if (steps == -1){
		int tam;
		char command[20] = { 0x08 + axis - 1, steps, speed, 3 };

		Cp->Enviar(command, 4, tam);
		printf("\n%s...", Cp->GetMensagem());
		Sleep(500);
		char Buff[128];
		//robot will respond with 15
		Cp->EsperarRecepcao();
		Cp->Receber(Buff, 1, tam);
		printf("\n%s...", Cp->GetMensagem());

	}
	return;
}

void move_multiple_axis(TCommPort *Cp, int* steps){
	int tam;

	char command[20] = { 0x0F, steps[0], steps[1], steps[2], steps[3], steps[4], steps[5], 3 };
	Cp->Enviar(command, 8, tam);
	printf("\n%s...", Cp->GetMensagem());
	Sleep(500);
	char Buff[128];
	//robot wil respond with 15
	Cp->EsperarRecepcao();
	Cp->Receber(Buff, 1, tam);
	printf("\n%s...", Cp->GetMensagem());

	return;
}

void move_multiple_axis_speed(TCommPort *Cp, int* steps, int* speed){
	
	int tam, count=0;
	char Buff[128], command1[20] = { 0x47, 3 };
	
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

	if (count <= 6){
		char command[20] = { 0x0F, steps[0], steps[1], steps[2], steps[3], steps[4], steps[5], 3 };
		Cp->Enviar(command, 8, tam);
		printf("\n%s...", Cp->GetMensagem());
		Sleep(500);
		//robot wil respond with 15
		Cp->EsperarRecepcao();
		Cp->Receber(Buff, 1, tam);
		printf("\n%s...", Cp->GetMensagem());
	}
}

<<<<<<< HEAD
void all_motor_status(TCommPort *Cp,char* steps ){
	int tam;
=======
int* all_motor_status(TCommPort *Cp ){
	int tam;
	int* steps = (int*) malloc(6 * sizeof(int));
>>>>>>> master
	char Buff[128], command1[20] = { 0x47, 3 };

	Cp->Enviar(command1, 2, tam);
	Cp->EsperarRecepcao();
	Cp->Receber(Buff, 8, tam);

	for (int i = 0; i < 6; i++)
	{
		if (steps[i] == -1){
			steps[i] = (unsigned char)Buff[i + 1];
		}
	}
}

int degrees_to_steps(double degrees, int axis){
	double stepF;
	int step;
	switch (axis)
	{
	case 1:
		degrees = 80 - degrees;
		stepF = degrees / 0.62745098039215686274509803921569;
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
		degrees = 100-degrees ;
		stepF = degrees / 0.78431372549019607843137254901961;
		step = (int)(stepF + 0.5);
		break;
	case 5:
		degrees = 0 - degrees;
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

int mm_to_steps(double distance){
	int steps = 0;
	double stepsf;

	distance = distance + 60;
	stepsf = distance / 0.2352941176470588;
	steps = (int)(stepsf + 0.5);

	return steps;
}

double steps_to_degrees(int steps, int axis){
	double degrees;
	switch (axis)
	{
	case 1:
		degrees = steps * 0.62745098039215686274509803921569;
		degrees = degrees + 80;
		break;
	case 2:
		degrees = steps * 0.3921568627450980392156862745098;
		degrees = degrees + 66.6666666666666666666666666666666;
		break;
	case 3:
		degrees = steps * 0.3921568627450980392156862745098;
		break;
	case 4:
		degrees = steps * 0.78431372549019607843137254901961;
		degrees = degrees + 100;
		break;
	case 5:
		degrees = steps * 0.78431372549019607843137254901961;
		break;
	default:
		break;
	}
	return degrees;
}

double stpes_to_mm(int steps){
	double distance;

	distance = steps*0.2352941176470588;
	distance = distance - 60;

	return distance;
}

int direct_kinematic(float* theta,float* posAtt ){
	if ((sizeof(theta)!=sizeof(float)*5)||(sizeof(posAtt)!=sizeof(float)*6)){
		return -1;
	}

	double nx = cos(theta[0])*cos(theta[4])*sin(theta[1] + theta[2] + theta[3]) - sin(theta[4]);
	double ny = cos(theta[4])*sin(theta[0])*sin(theta[1] + theta[2] + theta[3]) + cos(theta[0])*sin(theta[4]);
	double nz = -cos(theta[1] + theta[2] + theta[3])*cos(theta[4]);

	double sx = -cos(theta[4])*sin(theta[0]) - cos(theta[0])*sin(theta[1] + theta[2] + theta[3])*sin(theta[4]);
	double sy = (cos(theta[0])*cos(theta[4])) - (sin(theta[0])*sin(theta[1] + theta[2] + theta[3])*sin(theta[4]));
	double sz = cos(theta[1] + theta[2] + theta[3])*sin(theta[4]);

	double ax = cos(theta[0])*cos(theta[1] + theta[2] + theta[3]);
	double ay = cos(theta[1] + theta[2] + theta[3])*sin(theta[0]);
	double az = sin(theta[1] + theta[2] + theta[3]);

	double px = cos(theta[0])*(200 * cos(theta[1]) + 130 * cos(theta[1] + theta[2]) + 130 * cos(theta[1] + theta[2] + theta[3]));
	double py = (200 * cos(theta[1]) + 130 * cos(theta[1] + theta[2]) + 130 * cos(theta[1] + theta[2] + theta[3]))*sin(theta[0]);
	double pz = 275 + 200 * sin(theta[1]) + 130 * sin(theta[1] + theta[2]) + 130 * sin(theta[1] + theta[2] + theta[3]);

	return 0;
}

//You should implement the other required operations here.

void robot_control_routine(TCommPort *port)
{
	//Create the control routine here with a menu that allows the user to choose
	//which operation the robot should perform (e.g. move_one_axis, move_one_axis_speed...)
	int menu = 0;
	int axis = 0, steps = 0, speed = 0, degrees=0;
	int steparray[6],speedarray[6];
	bool exit = TRUE;

	while (exit){

		printf("\n**********Menu**********\n1-move_one_axis\n2-move_one_axis_speed");
		printf("\n3-multiple axis\n4-multiple axis_speed\n");
		scanf(" %d", &menu);

		switch (menu)
		{
		case 1:
			//move one axis
			printf("axis degrees: ");
			scanf("%d %d", &axis, &degrees);
			move_one_axis(port, axis, degrees_to_steps(degrees,axis));
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
				printf("Axis %d step: ",i+1);
				scanf(" %d", steparray[i]);
			}
			move_multiple_axis(port, steparray);
			break;
		case 4:
			//move multiple axis speed
			for (int i = 0; i < 6; i++)
			{
				printf("Axis %d step speed: ",i+1);
				scanf(" %d %d", &steparray[i],&speedarray[i]);
			}
			move_multiple_axis_speed(port, steparray, speedarray);
			break;
		case 10: exit = FALSE;
		case 0:
		default: break;
		}
		axis = 0;
		steps = 0;
		speed = 0;
		menu = 0;
	}
}

void main(void)
{
	TCommPort *Cp;
	Cp = new TCommPort();
	if (!Cp->Abrir(L"\\\\.\\com6"))
	{
		printf("\n%s...", Cp->GetMensagem());
		return;
	}
	InitializeRobot(Cp);
	robot_control_routine(Cp);
	Cp->Fechar();
	delete Cp;
}
