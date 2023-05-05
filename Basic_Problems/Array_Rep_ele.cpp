#include<iostream>
using namespace std;
///Problem statement: 
//Asked IN AMAZON and Rackel
// Given an array arr[] of size N. The task is to find repeating elelement in the array of integers.

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int minindx=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				minindx=i;
				break;
			}
		}
	}
	cout<<minindx;
	return 0;
}
