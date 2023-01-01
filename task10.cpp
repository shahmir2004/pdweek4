#include <iostream>
using namespace std;
void ticketPrice(string countryname, float ticketprice, float finalprice);

main()
{

string countryname;
float ticketprice;
float finalprice;

while(true)
{

  cout <<"Please enter the country name: ";
  cin >> countryname;

  cout <<"Please enter the ticket price in dollars: ";
  cin >> ticketprice;
 
  ticketPrice(countryname, ticketprice, finalprice);
}



}




void ticketPrice(string countryname, float ticketprice, float finalprice)

{
  
  if(countryname=="Pakistan")
  { 
    finalprice=ticketprice*0.95;
    cout<<finalprice;
  }

  if(countryname=="Ireland")
  { 
    finalprice=ticketprice*0.9;
    cout<<finalprice;
  }

  if(countryname=="India")
  { 
    finalprice=ticketprice*0.8;
    cout<<finalprice;
  }

  if(countryname=="England")
  { 
    finalprice=ticketprice*0.70;
    cout<<finalprice;
  }

  if(countryname=="Canada")
  { 
    finalprice=ticketprice*0.55;
    cout<<finalprice;
  }
}