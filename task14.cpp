#include <iostream>
#include <windows.h>
 
using namespace std;

void aggregate(string name, float matricmarks, float intermarks, float ecatmarks);
void gotoxy(int x, int y);
void graphics(int x, int y, string choice);
void compareEcat(string name1, string name2, float ecat1, float ecat2);


int main()

{

  system("cls");
  

  string choice;
  int x=0;
  int y=0;
  string name1, name2;
  char anykey;
  int matric1, inter1, ecat1;
  int matric2, inter2, ecat2;
  
 

   
   while(true)
  {
    gotoxy(x, y);
  
    graphics(x, y, choice);
  
  
    cout<<"Please enter your choice"<<endl;
    cin >> choice;
  
    if (choice=="1")
    {
      system("cls");
      cout <<"Enter your name: ";
      cin >> name1;
      cout << "Enter your matric marks: ";
      cin >> matric1;
      cout <<"Enter your inter marks: ";
      cin >> inter1;
      cout <<"Enter your ecat marks : ";
      cin >> ecat1;
      cout<<"Press any key to continue: ";
      cin >> anykey;
      graphics(x, y, choice);
  
    }
    if (choice=="2")
    {
      system("cls");
      cout <<"Enter your name: ";
      cin >> name2;
      cout << "Enter your matric marks: ";
      cin >> matric2;
      cout <<"Enter your inter marks: ";
      cin >> inter2;
      cout <<"Enter your ecat marks : ";
      cin >> ecat2;
      cout<<"Press any key to continue: ";
      cin >> anykey;
      graphics(x, y, choice);

    }
    if (choice =="3")
    {
      system("cls");
      aggregate(name1,matric1,inter1,ecat1);
      cout<<"Press any key to continue: ";
      cin>>anykey;
      system("cls");
      graphics(x, y, choice);
    }
    if (choice =="4")
    {
      system("cls");
      aggregate(name2,matric2,inter2,ecat2);
      cout<<"Press any key to continue: ";
      cin>>anykey;
      system("cls");
      graphics(x, y, choice);
    }

    if (choice=="5")
    
    {

      compareEcat( name1, name2, ecat1, ecat2);
      cout<<"Enter any key to continue: ";
      cin >> anykey;
      system("cls");
      graphics(x, y, choice);
    }

  }


  
 

return 0;

}


void aggregate(string name, float matricmarks, float intermarks, float ecatmarks)

{
  
   float matricpercent, ecatpercent, interpercent;
   float ecatweight, interweight, matricweight;
   float aggregate;
  


  
  matricpercent = matricmarks/1100*100;
  interpercent = intermarks/550*100;
  ecatpercent = ecatmarks/400*100;

  matricweight = matricpercent/100*30;
  interweight = interpercent/100*30;
  ecatweight = ecatpercent/100*40;
  
 
  aggregate = matricweight+ecatweight+interweight;
  
  cout << "Aggregate is : " << aggregate << endl;

}



void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


void graphics(int x, int y, string choice)

{
  
  
  gotoxy(x, y);
  
  cout<<"#############################"<<endl;
  cout<<"#                           #"<<endl;
  cout<<"#                           #"<<endl;
  cout<<"#        UET Lahore         #"<<endl;
  cout<<"#                           #"<<endl;
  cout<<"#                           #"<<endl;
  cout<<"#############################"<<endl;
  gotoxy(x, 11);

  cout<<"Welcome to UET Lahore"<<endl;
  gotoxy (x, 15);
  
  cout<<"Press 1 to enter details of student 1"<<endl;
  cout<<"Press 2 to enter details of student 2"<<endl;
  cout<<"Press 3 to calculate aggregate of first student"<<endl;
  cout<<"Press 4 to calculate aggregate of second student"<<endl;
  cout<<"Press 5 to display student with roll number 1! "<<endl;
  

  
}


void compareEcat(string name1, string name2, float ecat1, float ecat2)

{

  if(ecat1>ecat2)
  {

    cout<<"Roll number 1 is: " << name1<< endl;
  }
  if(ecat1<ecat2)
  {

    cout<<"Roll number 1 is: " << name2<< endl;

  }
}

