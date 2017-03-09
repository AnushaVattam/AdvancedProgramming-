#include <iostream>

using namespace std;
void PrintPattern1(int m )
 {
     if(m ==0)
     {
         return ;
     }
     else
     {
         for(int i=1; i<=m; i++)
         {
             cout<< "*";
         }
         cout << endl;
         return PrintPattern1(m-1);
     }

 }
 void PrintPattern( int i , int n)
 {
     if(n==0)
     {
       return;
     }
    else
    {
        for(int j = 1 ; j <=i ; j++)
		{
		    //cout << "j is " << j << endl;
			cout<<"*";
		}
		cout<<endl;
        i++ ;
	}
         return PrintPattern(i,n-1);
}



int main()
{
    int m, n;
    int i = 1;
    cout << " enter m, n value:" << endl;
    cin >> m ;
    cin >> n;
    PrintPattern1(m);
    PrintPattern(i,n);
    return 0;
}
