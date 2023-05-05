#include<iostream>
using namespace std;

///Floyds pattern of number ---->
int main()
{
	
	int n;
	cout<<"Enter value of n";
	cin>>n;
	int count=0;
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<" "<<++count;
		}
		cout<<endl;
	}
	return 0;
	
}
