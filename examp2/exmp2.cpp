/* comprehensive exam 2005 spring question 2 solution
Author : Praveen Nandula */

#include<iostream>
#include<cstring>
using namespace std;

bool palin(char *,int, int);

int main()
{
	char a[]={'a','t','o','y','o','t','a'};
	int i;
	i=sizeof a;
	if(palin(a,i-1,0))
	cout<<"palindrome char array"<<endl;
	else
	cout<<"not a palindrome"<<endl;
	return 0;
}

bool palin(char *a,int len,int start)
{
	//int i=0;
	int s,l;
	//bool b;
	s=(int)a[start];
	l=(int)a[len];
	cout<<s<<":"<<l<<"\t"<<len<<":"<<start<<endl;
	if(s==l && len!=0)
	{
		if(palin(a,len-1,start+1))
		return true;
		else
		return false;
	}
	if(s!=l)
	return false;
	else
	return true;

}
