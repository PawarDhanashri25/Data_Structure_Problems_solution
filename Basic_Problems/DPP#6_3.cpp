#include<iostream >
using namespace std;


//write a program to add two matrices of size 2*2
int main()
{
	
	int arr1[2][2], arr2[2][2];
	cout<<"Elements of first matrix:";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>arr1[i][j];
		}
	}
	
	cout<<"Elements of second matrix:";
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>arr2[i][j];
		}
		
	}
	int sum[2][2];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			sum[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	
	cout<<"Addition:"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<sum[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
