#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int Highest(vector<int> values1, int x ,int maxi)
{
        if (x==0)
        {
            maxi=values1[x];
        }
        cout << "size:"<< values1.size()<< endl;
        if(x < (values1.size()-1) )
        {
            x++;
            cout << "x is :" << x << endl;
            if(values1[x] > maxi)
                {
                maxi= values1[x];
                }
            return Highest(values1, x, maxi);
        }
        else
        {
            return maxi;
        }

}

int main()
{
  vector<int> values;
  int val;
  int x =0;
  int maxi =0;
  ifstream InputFile;
  InputFile.open("values.txt");
  while(!InputFile.eof())
  {
      InputFile >> val;
      cout << "values :" << val << endl;
      values.push_back(val);
  }

       cout <<"Highest:" << Highest(values,x,maxi) << endl;
        return 0;
}
