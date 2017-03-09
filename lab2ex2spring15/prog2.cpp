#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int sales,n;
    int count = 1 ;
    //int value =0;
    cout << "Enter number of sales to be graphed:";
    cin >> n;
    cout << fixed << setprecision(2);

    for(int i =1 ;i <=n ; i++)
    {
      cout << "Please enter the sales for quarter " << count << endl;
      cin >> sales;
    cout << "Quarterly Sales" << endl << endl;
    cout << "Quarter" << count <<": ";
    count++;
    int p = sales/100;
    for(int j=1 ; j <=p; j++)
    {
        cout << "*";
    }
    cout << endl;
    }
}
