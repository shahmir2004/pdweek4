#include <iostream>
using namespace std;
void checkEqual(int x, int y);

main()

{

int num1;
int num2;

cout <<"Enter num 1 ";
cin >> num1;

cout << "Enter num 2 ";
cin >> num2;

checkEqual(num1, num2);


}





void checkEqual(int x, int y)
{

  if (x!=y)
  {

     cout<<"False";
   }
  if (x==y)
  {
    cout <<"True";
  }
}