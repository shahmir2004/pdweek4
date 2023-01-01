#include <iostream>
using namespace std;
void tomcat(int holidays, int workingdays, int timeforgames, int differencefromnorm);

main()
{

int holidays;
int workingdays;
int timeforgames;
int differencefromnorm;

cout <<"Enter the number of holidays" <<endl;
cin >> holidays;


tomcat (holidays, workingdays, timeforgames, differencefromnorm);

}




void tomcat(int holidays, int workingdays, int timeforgames, int differencefromnorm)

{
 
  workingdays = 365-holidays;
  timeforgames = (workingdays*63) + (holidays*127);
  differencefromnorm = 30000 - timeforgames;

  if(timeforgames<=30000)
  {
    cout <<"Tom sleeps well and "<<differencefromnorm << " minutes are for play" <<endl;
  }
  
  if (timeforgames>30000)
  {
    cout <<"Tom will run away"<< differencefromnorm << " minutes are for play" <<endl;
  }
    
}