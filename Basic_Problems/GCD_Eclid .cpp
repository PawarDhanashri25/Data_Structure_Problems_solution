#include<iostream>
///Inclusion-Exclusion principle 
///this concept is used to find numbers

using namespace std;
///Euclid algorithm to find GCD


int GCD(int x1, int x2)
{
	while(x1!=0)
	{
	
		if(x1<x2)
		{
			int temp=x1;
			x1=x2;
			x2=temp;
			x1=x1-x2;
			
		}
		else{
			x1=x1-x2;
		}
	}
	return x2;
	
	/* Another way
			int rem= a%b;
			a=b;
			b=rem;
			
			return a;
	*/
}

int main()
{
	int a, b;
	cin>>a>>b;
	
	cout<<GCD(a,b);
	

	return 0;
}
