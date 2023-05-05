#include<iostream>
///Recursion concept problem
using namespace std;

/// calculate the factorial of a number n

int factorial(int n)
{

	if(n==0)
	{
		return 1;
	}
	return n*factorial(n-1);
	
}

int main()
{
	int n;
	cin>>n;
	cout<<factorial(n);
	
}
