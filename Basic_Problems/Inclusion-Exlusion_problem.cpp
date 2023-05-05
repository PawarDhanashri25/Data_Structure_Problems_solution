#include<iostream>
///Inclusion-Exclusion principle 
///this concept is used to find numbers

using namespace std;
//problem stmt: how many numbers bet 1 1000 are divisible by 5 or 7
int divisible(int n, int a, int b)
{
	int ct1=0,ct2=0,ct3=0,total;
	/*for(int i=1;i<=n;i++)
	{
		if(i%a==0)
		{
			++ct1;
		}
		if(i%b==0)
		{
			++ct2;
		}
		if((i%a==0) && (i%b==0))
		{
			++ct3;
		}
	}
	total=ct1+ct2-ct3;
	cout<<total;*/
	int c1= n/a;
	int c2=n/b;
	
	int c3= n/(a*b);
	
	return c1+c2-c3;
}

int main()
{
	
	int n;
	cin>>n;
	int a,b;
	cin>>a>>b;
	cout<<divisible(n,a,b);
	return 0;
}
