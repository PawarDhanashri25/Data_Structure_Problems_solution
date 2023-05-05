#include<iostream>

using namespace std;

//Problem statement: Given an array a[] of size n. for every i from o to n-1 max output of array 

int main()
{
	
	int n;
	cout<<"n:";
	cin>>n;
	int arr[n];
	cout<<"Enter array element:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int m=0;
	
	for(int i=0;i<n;i++)
	{
		m= max(m,arr[i]);
		cout<<m<<" ";
	}
	
	return 0;
}
