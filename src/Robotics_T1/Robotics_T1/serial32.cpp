
#include "stdafx.h"

#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include <winsock2.h>
#include <iostream> 
#include <fstream>
#include <conio.h>
#include <stdio.h>

#include "serial32.h"


#define _USE_REAL_ROBOT_



SOCKET m_socket;


char * rebuild_reply(char *reply, char *dest)
{
	 char *inicio= strstr(reply,"inicio");
	 
	 inicio+=strlen("inicio");
	 char *fim = strstr(reply,"fim");
	 *fim='\0';
	 char *buffer= inicio;

	int length;
	int aa[100];
	
	sscanf_s(buffer,"%d",&length);
	while(*buffer!=' ' && *buffer!='\0')
		buffer++;
	for(int i=0;i<length;i++)
	{
		sscanf_s(buffer,"%d",&aa[i]);
		buffer++;
		while(*buffer!=' ' && *buffer!='\0')
			buffer++;
		if(*buffer=='\0')
			break;
	}
	for(int i = 0 ; i< length; i++)
		dest[i]=(char)aa[i];
	dest[length]='\0';
	return(dest);
}


int sim_connect_com1()
{
	WSADATA wsaData;

	int iResult = WSAStartup( MAKEWORD(2,2), &wsaData );

	if ( iResult != NO_ERROR )
	{
	   	 printf("\nError at WSAStartup()\n");
	}

	

	m_socket = socket( AF_INET, SOCK_STREAM, IPPROTO_TCP );

	if ( m_socket == INVALID_SOCKET ) 
	{
	   printf("Error at socket(): %d",WSAGetLastError());
	   WSACleanup();
	  // system ("PAUSE");
	   return 0;
	}

	sockaddr_in clientService;
    clientService.sin_family = AF_INET;
    clientService.sin_addr.s_addr = inet_addr( "127.0.0.1" );
    clientService.sin_port = htons( 8000 );

    if ( connect( m_socket, (SOCKADDR*) &clientService, sizeof(clientService) ) == SOCKET_ERROR) 
    {
        printf("Failed to connect.");
        WSACleanup();
        //system("PAUSE");
        return 0;
    }
	return 0;
}


void sim_close_com1()
{

}


int  sim_send_com1(const char *message)
{
	int bytesSent;
	char sendbuf[1000] = "GET http://localhost:8000/SendCom1?inputMessage=";
	strcat_s(sendbuf,message);
	strcat_s(sendbuf,"\n");
    bytesSent = send( m_socket, sendbuf, strlen(sendbuf), 0 );
    //printf("\nBytes Sent: %d\n",bytesSent);
	return bytesSent;
}


int  sim_send_com1(const char *message, int size)
{
	char sequence[1000]="<";

	for(int i=0;i<size; i++)
	{
		char element[100];
		sprintf_s(element,"%u", (unsigned char)message[i]);
		strcat_s(sequence, element);
		if(i<size-1)
			strcat_s(sequence, ",");
	}
	strcat_s(sequence, ">");
	
	//for(int i=0;i<size;i++)
//		sequence[i]=message[i];
//	if(message[0]==' ' && size==1) // initialization space
	//  strcpy_s(sequence,"inicializar");
	return sim_send_com1(sequence);
}

int sim_receive_com1(char *recvbuf)
{
	
	int bytesRecv = SOCKET_ERROR;
    if (!bytesRecv == 0 || (bytesRecv == SOCKET_ERROR && WSAGetLastError()== WSAECONNRESET ))
    {
        bytesRecv = recv( m_socket, recvbuf, 10000, 0 );
        
		if ( bytesRecv == -1 ) 
		{
		   	 printf("Connection Closed.\n");
		}
        
		recvbuf[bytesRecv]='\0';
		//printf("Bytes Recv: %d\n" ,bytesRecv);
        //printf("%s\n",recvbuf);
    }
	return(bytesRecv);
}






TCommPort::TCommPort()
{
  memset(this,0,sizeof(TCommPort));
}

TCommPort::~TCommPort()
{
  Fechar();
}



BOOL TCommPort::Fechar(void) 
{
#ifdef _USE_REAL_ROBOT_
  if(m_hCom!=INVALID_HANDLE_VALUE) 
    CloseHandle(m_hCom); 
  m_hCom=INVALID_HANDLE_VALUE;
#endif
  return true;
}

BOOL TCommPort::Abrir(LPCWSTR Port, int Baud, int ByteSize, int Parity, int StopBit)
{ 

#ifdef _USE_REAL_ROBOT_
	
  m_hCom=CreateFile((LPCWSTR)Port,	
		GENERIC_READ | GENERIC_WRITE,
		0, // exclusive access
		NULL, // no security
		OPEN_EXISTING,
		0, // no overlapped I/O
		NULL); // null template 
  
  strcpy_s(SerialPort,(char*)Port);
  if(m_hCom == INVALID_HANDLE_VALUE)
  {
	  sprintf_s(Mensagem, "Não consegue abrir a porta %s %d...", Port, GetLastError());
    return false;
  } 
  BOOL m_bPortReady = SetupComm(m_hCom, 128, 128); // set buffer sizes
  if(!m_bPortReady)
  {
    sprintf_s(Mensagem, "Não consegue inicializar buffers de In/out para porta %s",Port);
    return false;
  }   
  m_bPortReady = GetCommState(m_hCom, &m_dcb);
  if(!m_bPortReady)
  {
    sprintf_s(Mensagem, "Não consegue ler estado da porta porta %s",Port);
    return false;
  }   
  m_dcb.BaudRate = Baud;
  m_dcb.ByteSize = ByteSize;
  m_dcb.Parity   = Parity;
  m_dcb.StopBits = StopBit;
  m_dcb.fAbortOnError = TRUE;
  m_bPortReady = SetCommState(m_hCom, &m_dcb);
  if(!m_bPortReady)
  {
    sprintf_s(Mensagem, "Não consegue alterar estado da porta porta %s",Port);
    return false;
  }
  /*
  m_CommTimeouts.ReadIntervalTimeout = 50;
  m_CommTimeouts.ReadTotalTimeoutConstant = 50;
  m_CommTimeouts.ReadTotalTimeoutMultiplier = 10;
  m_CommTimeouts.WriteTotalTimeoutConstant = 50;
  m_CommTimeouts.WriteTotalTimeoutMultiplier = 10;
*/
  m_CommTimeouts.ReadIntervalTimeout = 300;
  m_CommTimeouts.ReadTotalTimeoutConstant = 0;
  m_CommTimeouts.ReadTotalTimeoutMultiplier = 0;
  m_CommTimeouts.WriteTotalTimeoutConstant = 0;
  m_CommTimeouts.WriteTotalTimeoutMultiplier = 0;

  m_bPortReady = SetCommTimeouts (m_hCom, &m_CommTimeouts);
  if(!m_bPortReady)
  {
    sprintf_s(Mensagem, "Não consegue definir os TimeOuts da porta porta %s",Port);
    return false;
  }
  ZeroMemory(&Overlapped,sizeof(OVERLAPPED));
  SetCommMask(m_hCom,EV_RXCHAR);
  PurgeComm(m_hCom, PURGE_TXCLEAR | PURGE_RXCLEAR ); 

#endif
  return true;
}


char *TCommPort::BuffHex(char *dest, char *source,int size)
{
  char regua[17]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F',0};
  dest[0]=0;
  for(int i=0;i<size;i++)
  {
    char temp[20];
	if (i)
	{
		//strcat_s(dest, strlen(","), ",");
		strcat(dest,  ",");
	}
    int v=((char)source[i])>>4;
    if(v<0) v*=-1; 
    temp[0]=regua[  v ];
    v=((char)source[i])&0x0f;
    temp[1]=regua[  v ];
    temp[2]=0;    
    //strcat_s(dest,strlen(temp),temp);
    //strcat_s(dest,strlen("H"),"H");
	strcat(dest,  temp);
	strcat(dest,  "H");

  }  
  return dest;
}


BOOL TCommPort::Enviar(const char *Buff,int size,int &BytesWritten)
{  
#ifdef _USE_REAL_ROBOT_
  DWORD bbb;
  BOOL bWriteRC = WriteFile(m_hCom, Buff,size,&bbb,NULL);
  BytesWritten=(int)bbb;
  if(!bWriteRC)
  {  
    sprintf_s(Mensagem, "Não consegue escrever na porta porta %s",SerialPort);
    return false;  
  } else
  {
    char temp[256];
    sprintf_s(Mensagem,"Foram enviados %d de %d byte da string [%s]",BytesWritten,size ,BuffHex(temp,(char *)Buff,size));
  }  
#else
   sim_connect_com1();
  BytesWritten=sim_send_com1(Buff, size);
#endif

  return true;
}

void TCommPort::EsperarRecepcao(void)
{
#ifdef _USE_REAL_ROBOT_
  unsigned long EventOcurred;
  ZeroMemory(&Overlapped,sizeof(OVERLAPPED));
  SetCommMask(m_hCom,EV_RXCHAR);
  WaitCommEvent(m_hCom,  &EventOcurred,&Overlapped);
#endif
}


int TCommPort::Receber(char *Buff,int size, int &BytesRead)
{ 
#ifdef _USE_REAL_ROBOT_
  DWORD bbb; 
  BOOL bReadRC = ReadFile(m_hCom, Buff, size, &bbb, NULL);
  BytesRead=(int)bbb;
  if(!bReadRC)
  {  
    sprintf_s(Mensagem, "Não consegue ler da porta porta %s",SerialPort);
    return false;  
  } else
  {
    Buff[BytesRead]=0; //CUIDADA não pode BytesRead não pode ser superiar a 127
    char temp[256];
    sprintf_s(Mensagem,"Foram lidos %d de %d byte, string [%s]", BytesRead,size,BuffHex(temp,Buff,size));
  }    
#else
	char inetBuf[10000];
	BytesRead=sim_receive_com1(inetBuf);
	rebuild_reply(inetBuf, Buff);
#endif

  return true;
}



