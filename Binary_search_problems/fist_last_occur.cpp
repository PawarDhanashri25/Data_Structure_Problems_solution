#include<iostream>
using namespace std;
//first and last occurence of element in the sorted arrray


int firstoccu(int arr[], int n, int key)
{
	int s=0, e=n-1;
	int mid=s+(e-s)/2;
	int ans=-1;
	
	while(s<=e)
	{
		if(arr[mid]==key)
		{
			ans=mid;
			e=mid-1;
			
		}
		else if(arr[mid]>key)
		{
			e=mid-1;
			
		}
		else if(arr[mid]<key)
		{
			s=mid+1;
			
		}
	}
	return ans;
	
}
int lastoccu(int arr[], int n , int key)
{
	int s=0, e=n-1;
	int mid=s+(e-s)/2;
	int ans=-1;
	while(s<=e)
	{
		if(arr[mid]==key)
		{
			ans=mid;
			s=mid+1;
		}
		
		else if(arr[mid]>key)
		{
			e=mid-1
		}
		else if(arr[mid]<key)
		{
			s=mid+1;
		}
	}
	return ans;
}

pair<int,int> fistanslastocc(vector<int>& arr, int n, int k)
{
	pair<int, int> p;
	p.fist=fistoccur(arr, n, k);
	p.last=lastoccur(arr, n, k);
	return p;
}
int main()
{
	
	int n;
	
}
