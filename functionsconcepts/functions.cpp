#include <iostream>
#include <fstream>

using namespace std;

int Highest(int b[10] , int size)
{

   int highest;
   highest = b[0];
    for (int j = 1; j < size ; j++)
        {
            if (b[j] > highest )
            {
                highest = b[j];
            }

        }
    return highest;
 }

int Lowest(int b[10] , int size)
{

   int lowest;
   lowest = b[0];
   for (int j = 1; j < size ; j++)
        {
            if (b[j] < lowest )
            {
                lowest = b[j];
            }

        }
    return lowest;
 }
float Mean(int c[10], int size)
 {
    float mean,sum=0;
    sum= c[0];
    for (int k=1; k < size ; k++)
     {
         sum=(sum+c[k]);
         mean =(sum/size) ;
     }
     return mean;
 }

void Sort(int c[10],int size)
{
      for (int i=0; i<(size-1); i++)
      {
        for (int j=0 ; j< (size-1);j++)
        {
        if (c[j]> c[j+1])
            {
                int temp = c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }

        }
      }
    cout << "sorted array:"<< endl;
    for(int n=0 ; n<10; n++)
    {
        cout << c[n] << endl;
    }

}

int Median(int c[],int size)
{
    int median;
    if(size%2 ==0 )
    {
        cout << c[size/2] << " " << c[size/2 - 1] << endl;
        median = ( c[size/2] + c[size/2 - 1] )/(2.0);
    }
    else
    {
        median =c[size/2];
    }
    return median;
}

void Mode(int m[], int size )
{
        int temp =0;
            for(int j=0 ; j < (size-2); j++)
            {
                if(m[j]== m[j+1])
                {
                    temp = m[j+1];
                    cout << "Modes among the numbers in the array are :" << temp << endl;
                }
            }
}

int main()
{

    int i =0;
    int a[10];
    ifstream InputFile;
    InputFile.open("values.txt");

    while(!InputFile.eof())
     {
        InputFile>> a[i];
        cout << a[i] << endl;
        i++;
     }

        cout << "highest number:" <<  Highest(a,10) << endl;
        cout << "lowest number:" <<  Lowest(a,10) << endl;
        cout << "Mean:" << Mean(a,10) << endl;
        Sort(a,10);
        cout << "array after sort which is inside main loop" << endl;
        for (int i=0; i<10; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        cout << "Median :" << Median(a,10) << endl;
         Mode (a,10);
        return 0;
}
