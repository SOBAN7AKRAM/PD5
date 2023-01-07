#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
char getCharatxy(short int x,short int y);
void maze();
void printP(int x,int y);
void eraseP(int x,int y);
main ()
{
   int x=5;
   int y=7;
   bool gamerunning (true);
   system ("cls");
   maze();
   printP(x,y);
   while (gamerunning)
   {
   if (GetAsyncKeyState(VK_UP))
   {    
    char nextlocation=getCharatxy(x,y-1);
    if (nextlocation == ' ')
    {
       eraseP(x,y);
       y=y-1;
       printP(x,y);
    }
   }
   if (GetAsyncKeyState(VK_DOWN))
   {
    char nextlocation=getCharatxy(x,y+1);
    if (nextlocation== ' ')
    {
      eraseP(x,y);
      y=y+1;
      printP(x,y);
    }  
   }
   if (GetAsyncKeyState(VK_LEFT))
   {
    char nextlocation=getCharatxy(x-1,y);
    if (nextlocation== ' ')
    {
      eraseP(x,y);
      x=x-1;
      printP(x,y);
    }  
   }
   if (GetAsyncKeyState(VK_RIGHT))
   {
    char nextlocation=getCharatxy(x+1,y);
    if (nextlocation== ' ')
    {
      eraseP(x,y);
      x=x+1;
      printP(x,y);
    }
   }
   Sleep (200);
  }
   if (GetAsyncKeyState(VK_ESCAPE))
   {
    gamerunning=false;
   }
   Sleep (200); 
   return 0;
}

void gotoxy(int x,int y)
{
    COORD coordinates;
    coordinates.X=x;
    coordinates.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void maze()
{
    cout<<"#######################################"<<endl;
    cout<<"#                                     #"<<endl;
    cout<<"#                                     #"<<endl;
    cout<<"#                                     #"<<endl;
    cout<<"#                                     #"<<endl;
    cout<<"#                                     #"<<endl;
    cout<<"#                                     #"<<endl;
    cout<<"#                                     #"<<endl;
    cout<<"#                                     #"<<endl;
    cout<<"#                                     #"<<endl;
    cout<<"#                                     #"<<endl;
    cout<<"#######################################"<<endl;
}
char getCharatxy(short int x, short int y)
{
CHAR_INFO ci;
COORD xy = {0, 0};
SMALL_RECT rect = {x, y, x, y};
COORD coordBufSize;
coordBufSize.X = 1;
coordBufSize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}
void eraseP(int x,int y)
{
    gotoxy (x,y);
    cout<<" ";
}
void printP(int x,int y)
{
    gotoxy(x,y);
    cout<<"P";
}

