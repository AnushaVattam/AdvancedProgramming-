#include <iostream>

using namespace std;


int main()
{
    int i,j,k,rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    for(i=rows;i>=1;i--)
        {
        for(j=1;j<i;j++)
        {
           cout<<"  ";
        }
       for(k=0;k<=rows-i;k++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}
