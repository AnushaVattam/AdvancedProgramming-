#include <iostream>

using namespace std;
void triangle(int x)
{
    for(int i=0 ;i<x ; i++)
    {
        for(int j=(x-1);j>=i;j--)
        {
            cout<<" ";
        }
        for(int k=0;k<=i;k++)
        {
          cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    int x;
    cout << "enter value for printing" << endl;
    cin >> x;
    triangle(x);
    return 0;
}
