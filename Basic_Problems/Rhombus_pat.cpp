#include<iostream>
using namespace std;

///Rhombus pattern ---->

int main()
{
	int n;
	int i,j;
	cout<<"Enter n:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			cout<<" ";
			
		}
		for(j=1;j<=n;j++)
		{
			cout<<"*";
			
		}
		cout<<endl;
	}
	
	return 0;
	
}
