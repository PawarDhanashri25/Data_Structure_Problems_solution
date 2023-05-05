#include<iostream>
///Recursion concept problem
using namespace std;

/// calculate n raised to power of p

int power(int n , int p)
{
	if(p==0)
	{
		return 1;
	}
	int prevpower= power(n, p-1);
	return n*prevpower;
}
int main()
{
	
	int n ,p;
	cin>>n>>p;
	cout<<power(n,p);
	return 0;
}
