#include<iostream>

using namespace std;

int main()
{
	
	
	int n;
	cin>>n;
	 
	int row= n;
	int col= (2*n)-1;
	
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			cout<<" ";
			
		}
	
	
		for(int j=i;j>=i;j--)
		{
			cout<<i-1<<" ";
		}
		cout<<endl;

	}
	
}

