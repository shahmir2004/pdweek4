#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void printName(int x, int y);

int main()

{

system("cls");
int x;
int y;
x=80;
y=25;


  gotoxy(x,y); 
  printName(x,y); 
 
return 0;

}



void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printName(int x, int y)
{

  gotoxy(x,y);
    
  cout<<"        ###   ##     ##        ##        ##       ##     "<<endl;
  gotoxy(x,y=y+1);
  cout<<"       ##     ##     ##      ##  ##      ##       ##     "<<endl;
  gotoxy(x,y=y+1);
  cout<<"      ##      ##     ##     ##    ##     ##       ##     "<<endl;
  gotoxy(x,y=y+1);
  cout<<"      ##      ##     ##    ##      ##    ##       ##      "<<endl;
  gotoxy(x,y=y+1);
  cout<<"      ##      ##     ##    ##      ##    ##       ##    "<<endl;
  gotoxy(x,y=y+1);
  cout<<"      ##      ##     ##    ##      ##    ##       ##        "<<endl;
  gotoxy(x,y=y+1); 
  cout<<"       ##     ##     ##    ##      ##    ##       ##       "<<endl;
  gotoxy(x,y=y+1);
  cout<<"        ##    #########    ##########    ###########     "<<endl;
  gotoxy(x,y=y+1);
  cout<<"         ##   ##     ##    ##      ##    ##       ##      "<<endl;
  gotoxy(x,y=y+1);
  cout<<"         ##   ##     ##    ##      ##    ##       ##      "<<endl;
  gotoxy(x,y=y+1);
  cout<<"         ##   ##     ##    ##      ##    ##       ##      "<<endl;
  gotoxy(x,y=y+1);
  cout<<"         ##   ##     ##    ##      ##    ##       ##     "<<endl;
  gotoxy(x,y=y+1);
  cout<<"  ##    ##    ##     ##    ##      ##    ##       ##       "<<endl;
  gotoxy(x,y=y+1);
  cout<<"    #####     ##     ##    ##      ##    ##       ##        "<<endl;
  gotoxy(x,y=y+1);
  
 
}
