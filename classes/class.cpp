#include <iostream>
#include <cmath>

using namespace std;

class Compute
    {
    public:
        int compare(int a , int b)
        {
            if(a>b)
            {
                cout << "a is greater than b" << endl;
            }
            else if(a<b)
             {
                cout << "a is less than b" << endl;
             }
            else
            {
                cout << " a is equal to b" << endl;
            }
        }
    };

int main()
{
    int a , b;
    cout<<"enter a and b values:"<<endl;
    cin >> a ;
    cin >> b ;
    Compute object1;
    object1.compare(a,b);
    return 0;
}
