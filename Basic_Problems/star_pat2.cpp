#include<iostream>

using namespace std;

int main()
{
	int n;
	
	cin>>n;

	for(int i=n;i>=0;i--)
	{
		for(int j=i;j>=0;j--)
		{
			cout<<"*";
		}
		for(int j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		
		cout<<endl;
	}		
}
