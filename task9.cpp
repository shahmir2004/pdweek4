#include <iostream>
using namespace std;
void Reverse(string input);

main()
{

string input;
cout << "Please enter your input";
cin >> input;

Reverse(input);


}



void Reverse(string input)

{

  if(input=="True")
  {
    cout<<"False";
  }

 if(input=="False")
  {
    cout<<"True";
  }

}