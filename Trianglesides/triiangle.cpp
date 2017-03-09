/*Write a boolean function that inputs three nonzero double values
 and determines whether they represent the sides of a right triangle.*/

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

bool findRightAngled(double a1, double b1, double c1)
{
   if (c1*c1 ==(a1*a1 + b1*b1)|| a1*a1==(b1*b1 + c1*c1)  || (b1*b1==a1*a1 + c1*c1 ))
   {
       cout <<"Given sides form a Right angled triangle" << endl;
       return true;
   }
   else
   {
       cout << "Does not form a Right angled Triangle" << endl;
       return false;
   }
}



int main()
{
    double a,b,c;
    cout << "Enter the sides  a, b, c of the triangle which are greater than Zero" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
  // findRightAngled(a, b, c);
  cout << findRightAngled(a, b, c) << endl;

    return 0;
}
