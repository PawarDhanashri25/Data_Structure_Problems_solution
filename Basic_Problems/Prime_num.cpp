#include<iostream>
#include<cmath>
///check whether given number is prime or not
using namespace std;

int main()
{
	int no;
	cout<<"Enter any number:";
	cin>>no;
	
	int i, flag=0;
	for(i=2;i<sqrt(no);i++)     ////chech up to square root of no.  ////for minimize the check
	{
		if(no%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"Not Prime number";
	}
	else
	{
		cout<<"prime number";
	}
	
	return 0;
}
