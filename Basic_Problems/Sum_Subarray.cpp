#include<iostream>
//Problem Statement: Given an array a[] of size n. Output sum of each subarray of the given array

using namespace std;

int main()
{
	int n;
	cout<<"n:";
	cin>>n;
	int arr[n];
	cout<<"Enter array element:";
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=0;
		for(int j=i;j<n;j++)
		{
			sum+=arr[j];     
			cout<<sum<<" " ;      ////this line print sum of each subarrays   
		}
	}
	
	return 0;	
} 
