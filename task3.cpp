#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void printMaze();
void playerMove(int x, int y);

main()

{

  system("cls");

  printMaze();
  int x=3;
  int y=4;
  playerMove(x,y);
}





void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printMaze()

{


cout<<"*********************"<<endl;
cout<<"*                   *"<<endl;
cout<<"*                   *"<<endl;
cout<<"*                   *"<<endl;
cout<<"*                   *"<<endl;
cout<<"*                   *"<<endl;
cout<<"*                   *"<<endl;
cout<<"*                   *"<<endl;
cout<<"*                   *"<<endl;
cout<<"*                   *"<<endl;
cout<<"*                   *"<<endl;
cout<<"*********************"<<endl;

}

void playerMove(int x, int y)

{

  gotoxy(x-1, y);
  cout<<" ";
  gotoxy(x, y);
  cout <<"p";
  Sleep(200);
}








