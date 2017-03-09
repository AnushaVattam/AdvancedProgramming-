/*Write a function bar that takes a positive integer named sales as an
argument and outputs a line in a bar graph. Each asterisk in the output should
represent $100 of sales. The function should output 5 asterisks (followed by a
newline character) for sales = 590.*/

#include <iostream>

using namespace std;

void bar(int sales)
{
  int n = (sales/100);
  if(n==1)
  {
      cout <<"*";
  }
  else
  {
      for(int i=1 ;i<=n;i++)
      {
           cout <<"*";
      }
  }
  cout << endl;
}

int main()
{
    int sales;
    cout <<"enter the sales value"<< endl;
    cin >> sales;
    bar(sales);
    return 0;
}
