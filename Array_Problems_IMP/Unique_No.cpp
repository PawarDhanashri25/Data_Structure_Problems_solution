#include<iostream>
using namespace std;
//N =2m+1
int findunique(int arr[], int n)
{
	int no=0;
	for(int i=0;i<n;i++)
	{
		no=no^arr[i];
	}
	return no;
}
int  main()
{
	
 	int n;
	cin>>n;
	
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int ans=findunique(arr, n);
	cout<<ans;
}
