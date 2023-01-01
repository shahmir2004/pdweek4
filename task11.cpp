#include <iostream>
using namespace std;
void checkSpeed(int speed);

main()
{

int speed;
cout <<"Please enter the car's speed: ";
cin >> speed;

checkSpeed(speed);


}



void checkSpeed(int speed)

{
  if(speed>100)
  {
    cout<<"HalT YOU WILL BE CHALLENGED!!!";
  }
  if(speed<=100)
  {
    cout<<"Perfect! You are going good.";
  }

}