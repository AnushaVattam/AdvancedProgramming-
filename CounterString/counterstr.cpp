#include <iostream>
#include <string>

using namespace std;


int counter(string y)
{
    int count =0;
    //cout << count << endl;

    for( int i=0 ; i < y.size();i++)
    {

        char z= y[i];

            if(y[i]!=' '&& y[i]!= '"')
            {
            ++count;
            }
            else
            {
            cout << count<<" ";
            count=0;
            //return count;
            }


    }
   return count;
}
int main()
{
    //int count =0;
    string x;
    char z;
    cout << "Enter the String Input" << endl;
    getline(cin,x);
    cout << x <<endl;
    cout << x.size() << endl;
    int result =counter(x);
    cout << result << endl;
    return 0;
}
