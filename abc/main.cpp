
#include<iostream>
using namespace std;

int main()
{
	int i,j,n=4,k=1;
	for(i=0;i<=n;i++)
	{
		k=i;
		for(j=0;j<k;j++)
		{
		if(k>=2 && k%2==0)
		cout<< i;
		i++;
		}
		i=k;
		cout<<endl;
	}
	return 0;
}
