#include <iostream>

using namespace std;
bool containsOnly(int a[],int size,int target)
{
    bool status;
    if(size==0)
    {
        status=true;
        //return status;
    }
    else
    {
        for(int i=0 ;i<size;i++)
        {
            if(a[i]==target)
            {
                status=true;
                //return status;
            }
            else
            {
                status=false;

            }
        }
    }
    return status;
}
int main()
{
    int const size =0;
    int a[size];
    int target;
    for (int j=0 ; j<size;j++)
    {
        a[j]=1;
        cout<<a[j]<< endl;
    }
    cout << "enter target value" << endl;
    cin  >> target;
    bool x=containsOnly(a,size,target);
    cout << x << endl;
    return 0;
}
