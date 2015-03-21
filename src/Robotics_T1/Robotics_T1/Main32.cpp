#include "stdafx.h"
#include "serial32.h"
#define _CRT_SECURE_NO_WARNINGS

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
	int tam;
	char Buff[128];
	char command1[20] = { 0x47, 3 };
	Cp->Enviar(command1, 2, tam);
	Cp->EsperarRecepcao();
	Cp->Receber(Buff, 8, tam);
	for (int i = 0; i < 6; i++)
	{
		if (steps[i] == -1){
			steps[i] = (unsigned char)Buff[i + 1];
		}
	}
	char command[20] = { 0x0F, steps[0], steps[1], steps[2], steps[3], steps[4], steps[5], 3 };
	Cp->Enviar(command, 8, tam);
	printf("\n%s...", Cp->GetMensagem());
	Sleep(500);
	//robot wil respond with 15
	Cp->EsperarRecepcao();
	Cp->Receber(Buff, 1, tam);
	printf("\n%s...", Cp->GetMensagem());

	return;
}

int* all_motor_status(TCommPort *Cp ){
	int steps[6],tam;
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
	return steps;
}

int degrees_to_steps(double degrees, int axis){
	double stepF;
	int step;
	switch (axis)
	{
	case 1:
		degrees = degrees + 80;
		stepF = degrees / 0.62745098039215686274509803921569;
		step = (int)stepF + 0.5;
		break;
	case 2:
		degrees = degrees + 33.3333333333333333333333333333333;
		stepF = degrees / 0.3921568627450980392156862745098;
		step = (int)stepF + 0.5;
		break;
	case 3:
		degrees = degrees + 100;
		stepF = degrees / 0.3921568627450980392156862745098;
		step = (int)stepF + 0.5;
		break;
	case 4:
		degrees = degrees + 100;
		stepF = degrees / 0.78431372549019607843137254901961;
		step = (int)stepF + 0.5;
		break;
	case 5:
		degrees = degrees + 200;
		stepF = degrees / 0.78431372549019607843137254901961;
		step = (int)stepF + 0.5;
		break;
	default:
		break;
	}
	if (step > 255){
		return -1;
	}
	else return step;
}

double steps_to_degrees(int steps, int axis){
	double degrees;
	switch (axis)
	{
	case 1:
		degrees = steps * 0.62745098039215686274509803921569;
		degrees = degrees - 80;
		break;
	case 2:
		degrees = steps * 0.3921568627450980392156862745098;
		degrees = degrees - 33.3333333333333333333333333333333;
		break;
	case 3:
		degrees = steps * 0.3921568627450980392156862745098;
		degrees = degrees - 100;
		break;
	case 4:
		degrees = steps * 0.78431372549019607843137254901961;
		degrees = degrees - 100;
		break;
	case 5:
		degrees = steps * 0.78431372549019607843137254901961;
		degrees = degrees - 200;
		break;
	default:
		break;
	}
	return degrees;
}

//You should implement the other required operations here.

void robot_control_routine(TCommPort *port)
{
	//Create the control routine here with a menu that allows the user to choose
	//which operation the robot should perform (e.g. move_one_axis, move_one_axis_speed...)
	int menu = 0;
	int axis = 0, steps = 0, speed = 0;
	int steparray[6];
	bool exit = TRUE;

	while (exit){

		printf("\n**********Menu**********\n1-move_one_axis\n2-move_one_axis_speed");
		printf("\n3-multiple axis\n4-multiple axis_speed");
		scanf(" %d", &menu);

		switch (menu)
		{
		case 1:
			//move one axis
			printf("axis steps: ");
			scanf("%d %d", &axis, &steps);
			move_one_axis(port, axis, steps);
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
				printf("Axis %d step: ");
				scanf(" %d", steparray[i]);
			}
			move_multiple_axis(port, steparray);
			break;
		case 4:
			//move multiple axis speed
			printf("");
			int vector[6];
			for (int i = 0; i < 6; i++)
			{
				printf("Axis %d step: ",i+1);
				scanf(" %d", &steparray[i]);
			}
			move_multiple_axis_speed(port, vector, vector);
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
