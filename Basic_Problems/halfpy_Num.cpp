#include<iostream>
using namespace std;

///half pyramid using numbers ---->

int main()
{
	int n;
	int i,j;
	cout<<"Enter value of n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<i;
		}
		cout<<endl;
	}
	return 0;
	
}
