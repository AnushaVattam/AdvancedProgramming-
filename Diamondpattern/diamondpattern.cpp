#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the n value for pattern:"<< endl;
    cin >> n ;


for(int i=0; i<n ; i++)
    {
       for(int j=(n-1); j>i ; j--)
        {
            cout<<" ";
        }
        for(int k=0; k<=i; k++)
        {
          cout<<"* ";
        }
        cout<<endl;
    }

    for(int p=0; p<(n-1);p++)
    {
         for(int r=0; r<=p; r++)
        {
            cout<<" ";
        }
        for(int q=(n-1); q > p; q--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
