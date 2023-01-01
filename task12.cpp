#include <iostream>
using namespace std;
void flowerPrice(float numberRR, float numberWR, float numberT);

main()
{

float numberofredrosesold;
float numberofwhiterosesold;
float numberoftulipsold;

cout << "Enter number of red roses sold" <<endl;
cin >> numberofredrosesold;

cout << "Enter number of white roses sold" << endl;
cin >> numberofwhiterosesold;

cout << "Enter number of tulips sold" <<endl;
cin >> numberoftulipsold;



flowerPrice(numberofredrosesold, numberofwhiterosesold, numberoftulipsold);




}



void flowerPrice(float numberRR, float numberWR, float numberT)
{

float totalprice;
float discount;

float RRprice = 2;
float WRprice = 4.1;
float Tprice = 2.5;

totalprice = (numberRR *2) + (numberWR * 4.1) + (numberT * 2.5);

if (totalprice>200)
{
  totalprice = totalprice * 0.8;
  discount = totalprice * 0.2;
  cout << "Total price is: " << totalprice << endl;
  cout << "Discount is: " << discount << endl; 

 }

  if (totalprice<=200)
  {
    cout<<"No discount was given and price is: " << totalprice;
  }


}

  