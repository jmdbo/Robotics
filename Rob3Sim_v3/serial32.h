#include <conio.h>     
#include <stdio.h>     
#include <windows.h>
#include <string.h>

//function PurgeComm(hFile: THandle; dwFlags: DWORD): BOOL; stdcall;
//The flags available are PURGE_TXABORT, PURGE_TXCLEAR, PURGE_RXABORT, and PURGE_RXCLEAR
//function ClearCommMensagemr(hFile: THandle; var lpMensagemrs: DWORD; lpStat: PComStat): BOOL; stdcall;

class TCommPort
{
  private:
  HANDLE  m_hCom;
  BOOL    m_bPortReady;
  DCB     m_dcb;
  COMMTIMEOUTS m_CommTimeouts;
  OVERLAPPED Overlapped;
  char    SerialPort[20];
  char    Mensagem[1024];
  bool    Aberta;
  char*   BuffHex(char *dest, char *source,int size);
  public:
  TCommPort();
  ~TCommPort();
  BOOL Abrir(LPCWSTR Port = L"com1", int Baud = 9600, int ByteSize = 8, int Parity = NOPARITY, int StopBit = ONESTOPBIT);
  BOOL Fechar(void); 
  BOOL Enviar(const char *Buff,int size,int &Byteswritten);
  BOOL Receber(char *Buff,int size,int &Bytesread);
  char *GetMensagem(void) { return Mensagem;}
  void EsperarRecepcao(void);
};

