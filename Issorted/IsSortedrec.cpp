#include <iostream>

using namespace std;
bool isSorted(double a[], int size,int i)
{
  //bool flag = false;
    if (size==0 || size ==1)
    {
        return true;
    }
    else
    {
      if(i <(size-1))
        {
            if(a[i] <= a[i+1])
            {
                i++;
              return isSorted(a,size,i);
            }
            else
            {
                return false;

            }

        }
return true;
    }
}

int main()
{
    double a[8] = { 5.0, 6.0, 7.0, 8.0, 8.9, 9.0, 10.6, 10.7 };
     //isSorted(a,5);
     int i=0;
    cout <<  isSorted(a,8,i) <<endl;
    //return 0;
}
