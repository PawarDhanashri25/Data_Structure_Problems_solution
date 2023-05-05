#include<iostream>
#include<cmath>
///// print all prime numbers between 2 given numbers
using namespace std;
bool isprime(int n)
{
	int i;
	int flag=0;
	for(i=2;i<sqrt(n);i++)
	{
		if(n%i==0)
		{
			return false;
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		return true;
	}
}
int main()
{
	int n1, n2,i;
	cout<<"Enter two numbers:";
	cin>>n1>>n2;
	for(i=n1;i<=n2;i++)
	{
		if(isprime(i)==true)
		{
			cout<<i<<endl;
		}
	}
	
	return 0;
}
