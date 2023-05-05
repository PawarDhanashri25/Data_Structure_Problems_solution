#include<iostream>
///Recursion concept problem
using namespace std;

/// Add all numbers till n 
int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	int prevsum= sum(n-1);
	return n+prevsum;
}
int main()
{
	int n;
	cin>>n;
	cout<<sum(n);
	
	return 0;
}
