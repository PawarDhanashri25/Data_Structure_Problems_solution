#include<iostream>

////print the first occurence and last occurence of given element in array------>

using namespace std;
int firstoccurence (int arr[], int n, int i, int k)
{
	
	if(i==n)
	{
		return -1;
	}
	if(arr[i]==k)
	{
		return i;
	}
	
	firstoccurence(arr, n, i+1, k);
}

int lastoccurence(int arr[], int n ,int i, int k)
{
	if(i==0)
	{
		return -1;
	}
	if(arr[i]==k)
	{
		return i;
	}
	lastoccurence(arr,n,i-1,k);
}
int main()
{
	int arr[]={2, 4, 1 ,5, 3, 2};
	cout<<firstoccurence(arr,6,0,2)<<endl;
	cout<<firstoccurence(arr,6,5,2);
	
	return 0;
}
