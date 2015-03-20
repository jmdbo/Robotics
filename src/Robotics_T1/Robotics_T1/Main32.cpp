#include "stdafx.h"
#include "serial32.h"
#define _CRT_SECURE_NO_WARNINGS

int InitializeRobot(TCommPort *Cp)
{
  int tam;
  Cp->Enviar(" ",1,tam);
  printf("\n%s...", Cp->GetMensagem() );
  Sleep(500);
  //robot will respond with 15
  char Buff[128];
  Cp->EsperarRecepcao();  
  Cp->Receber(Buff,1,tam);  
  printf("\n%s...", Cp->GetMensagem() );
  return Buff[0];
}

void move_one_axis(TCommPort *Cp,int axis,int steps)
{  
  int tam;
  char command[20] = {0x08 + axis - 1, steps, 3};
  
  Cp->Enviar(command, 3, tam);
  printf("\n%s...", Cp->GetMensagem());
  Sleep(500);
  char Buff[128];
  //robot will respond with 15
  Cp->EsperarRecepcao();
  Cp->Receber(Buff, 1, tam);
  printf("\n%s...", Cp->GetMensagem());

  
  return;
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
//for (int i = 0; i < 6; i++)
//{
//	lsbStep[i] = steps[i] % 2;
//	steps[i] = steps[i] >> 1;
//}
//char command[20] = { 0x0F, steps[0], steps[1], steps[2], steps[3], steps[4], steps[5],
//lsbStep[0], lsbStep[1], lsbStep[2], lsbStep[3], lsbStep[4], lsbStep[5], 3 };
//int lsbStep = 0;
//for (int i = 5; i >= 0; i--)
//{
//	lsbStep = lsbStep + steps[i] % 2;
//	steps[i] = steps[i] >> 1;
//	if (i != 0)
//		lsbStep << 1;
//}
//lsbStep = 1;

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
	printf("\n%s...",Cp->GetMensagem());

	return;
}

void move_multiple_axis_speed(TCommPort *Cp, int* steps, int* speed){
	int tam;
	char Buff[128];
	char command1[20] = {0x47,3};
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

//You should implement the other required operations here.

void robot_control_routine(TCommPort *port)
{
	//Create the control routine here with a menu that allows the user to choose
	//which operation the robot should perform (e.g. move_one_axis, move_one_axis_speed...)
	int menu=0;
	int axis = 0, steps = 0,speed=0;
	bool exit = TRUE;

	while (exit){	

		printf("\n**********Menu**********\n1-move_one_axis\n2-multiple axis");
		scanf(" %d", &menu);

		switch (menu)
		{
			case 1: 
				printf("axis steps: ");
				scanf("%d %d", &axis, &steps);
				move_one_axis(port, axis, steps); 
				menu = 0; 
				break;
			case 2: 
				int vector[6];
				for (int i = 0; i < 6; i++)
				{
					vector[i] = -1;
				}
				move_multiple_axis_speed(port, vector, vector);
				break;
			case 3:
				printf("axis steps speed: ");
				scanf(" %d %d %d",&axis, &steps,&speed);
				move_one_axis_speed(port, axis, steps, speed);
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
  Cp =new TCommPort();
  if( !Cp->Abrir(L"\\\\.\\com6") )
  {
    printf("\n%s...", Cp->GetMensagem() );
    return;  
  }  
  InitializeRobot(Cp);
  robot_control_routine(Cp);
  Cp->Fechar();
  delete Cp;
}
