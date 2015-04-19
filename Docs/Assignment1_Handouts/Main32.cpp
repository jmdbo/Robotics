#include "stdafx.h"
#include "serial32.h"

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
  char Buff[20];
  //YOUR CODE GOES HERE
}

//You should implement the other required operations here.

void robot_control_routine(TCommPort *port)
{
	//Create the control routine here with a menu that allows the user to choose
	//which operation the robot should perform (e.g. move_one_axis, move_one_axis_speed...)
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
