#include<iostream>
using namespace std;
///// Search the elelment in a 2d array...

int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	int k,flag=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"Enter element  which want to  search";
	cin>>k;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(arr[i][j]==k)
			{
				flag=1;
				cout<<"Element found at "<<i<<" "<<j<<" position";
				break;
				
			}
		}
	}
	
	if(flag==0)
	{
		cout<<"Element not found";
	}
	
	
	
	////Printing the 2D array code---->
	/*for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}*/
	
		
	return 0;
}
