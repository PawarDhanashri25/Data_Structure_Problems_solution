#include<iostream>
///Recursion concept problem
using namespace std;

/// print the nth fibonacci number    0, 1, 1,2,3,5,8,1..... n=4 then ans=3

int fibbo(int n)
{

	if(n==0 ||n==1)
	{
		return n;
	}
	return fibbo(n-1)+fibbo(n-2);

	
}

int main()
{
	int n;
	cin>>n;
	cout<<fibbo(n);
	
}
