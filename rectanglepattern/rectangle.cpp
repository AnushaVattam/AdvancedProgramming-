#include <iostream>

using namespace std;

int main()
{
    int length , breadth ;
    cout << "enter length and breadth values" ;
    cin >> length >> breadth ;
    for (int i =0 ; i< breadth; i++)
    {
        for(int j=0 ; j<length ; j++)
        {
            cout <<"*";
        }
        cout<<endl;
    }
    return 0;
}
