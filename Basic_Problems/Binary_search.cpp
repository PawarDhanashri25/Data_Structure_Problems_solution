#include<iostream>

using namespace std;
int BinarySearch(int arr[], int n, int key)
{
	int mid, low=0 ,high=n;
	while(low<=high)
	{
	
		mid= (low+high)/2;
	
		if(key==arr[mid])
		{
			return mid;
		}
		else if(key<arr[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	return -1;
}

int main()
{
	int n,key,flag=1;
	cout<<"n:";
	cin>>n;
	int arr[n];
	cout<<"Enter array elemets:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Enter search element:";
	cin>>key;
	
	cout<<BinarySearch(arr, n, key);
	
	return 0;	
}
