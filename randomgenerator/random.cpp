#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int rand(int n)
{
    int num1;
    int sum1=0;
    srand(time(NULL));
    for (int i =0 ; i <10 ; i++)
    {
    int num1 = (rand() % n) +1;
    cout <<  "num" << num1 << endl;
    sum1 =  num1 + sum1 ;
    cout << "summ" << sum1 << endl;
    }
    return sum1;
}
int rand2(int n1,int i)
{
    if(i>=0 && i <10)
    {
        int num= 1+(rand() % n1);
        cout<< "num" <<  num  << endl;
        i++;
        if (i=0)
        {
         int sum3 = num ;
        }
        int sum3 = num + sum3;
        cout << sum3 << endl;
        return sum3;
    }
    else
    {
        return 0;
    }

}


int main()
{
   srand(time(NULL));
   int sum1,sum2,sum3,i=0;
   int num1;
   int n,n1 ;
   cout << "enter the value of n as 6:" << endl;
   cin >> n;
   cout <<  "sum of person 1:" << rand(n)  << endl;
   cin>> n1;
   sum2=rand2(n1,i);
   cout <<  "sum of person 2:" << sum3 << endl;
   return 0;
}
