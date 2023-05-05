#include<iostream>

/// check whether two arrays contains same elements 
using namespace std;

int main()
{
	int n,m;
	
	cout<<"Enter size of  arrays";
	cin>>n>>m;
	int arr1[n], arr2[m];
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
	for(int  i=0;i<m;i++)
	{
		cin>>arr2[i];
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++){
			if(arr1[i]==arr2[j])
			{
				cout<<"same element in both array: "<<arr1[i]<<endl   ;
			}
		}
	}
	return 0;
	
}
