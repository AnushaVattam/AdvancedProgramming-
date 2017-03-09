#include <iostream>

using namespace std;
int BinarySearch(int arr[], int size, int val)
{
int first=0, last =size-1,middle,position =-1;
bool found = false;
while (first <= last && !found)
    {
        middle =(first+last)/2;
        if(arr[middle]==val)
            {
                found= true;
                position=middle;
            }
        else if(val < arr[middle])
            {
            last=middle-1;
            }
        else
            {
            first=middle+1;
            }

    }

  return position;

}

int main()
{
   int size = 20;
   int val;
   int arr[size];
   for (int i =0 ; i <20 ;i++)
   {
       arr[i]=i+2;
       cout << arr[i] << endl;
   }
   cout << "Enter the value to Search" << endl;
   cin >> val;
   int result = BinarySearch (arr,size,val);
   cout <<  "val " << val << " Value is at position:" << result << endl;
   return 0;
}
