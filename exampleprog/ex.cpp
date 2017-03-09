/* comprehensive exam 2004 summer question 3 solution
Author : Praveen Nandula */

#include<iostream>
using namespace std;
void merge (int *,int*, int *, int);

int main()
{
	int a[5]={2,5,9,11,16};
	int b[5]={3,7,14,19,21};
	int c[10];
	int n=5,i;
	merge(a,b,c,n);
	cout<<"values after merge"<<endl;
	for(i=0;i<10;i++)
	cout<<c[i]<<"\t";
	return 0;
}

void merge(int *a,int *b,int *c, int n)
{
	int i,j,k=0,r[10],*p,v;
		for(i=0;i<5;i++)
		{
		c[k]=a[i];
		k++;
		}
		for(i=0;i<5;i++)
		{
		c[k]=b[i];
		k++;
		}
		cout<<"value before merge"<<endl;
		for(i=0;i<10;i++)
		cout<<c[i]<<"\t";
		for (i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{

					if(c[j]>c[j+1])
					{
						v=c[j];
						c[j]=c[j+1];
						c[j+1]=v;
					}

			}

		}
}
