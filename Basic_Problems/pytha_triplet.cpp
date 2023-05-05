#include<iostream>
using namespace std;
/// program of pythogorian triplet

bool triplet_check(int x, int y, int z)
{
	int b,c;
	int a=max(x, max(y,z));
	if(a==x)
	{
		b=y;
		c=z;
	}
	else if(a==y)
	{
		b=x;
		c=z;
	}
	else{
		b=x;
		c=y;
	}
	if(a*a==b*b+c*c)
	{
		return true;
	}
	else
	{
		return false;
	}
	
	
}
int main()
{
	int x, y, z;
	cout<<"Enter x,y,z:";
	cin>>x>>y>>z;
	if(triplet_check(x,y,z))
	{
		cout<<"It  is pythagorain triplet";
	}
	else{
		cout<<"It is not pythagorain triplet";
	}
	return 0;
}
