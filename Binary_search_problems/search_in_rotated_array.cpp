#include<iostream>

using namespace std;

// search element in  the rotated sorted array

class solution{
public:
int findpivot(vector<int>& arr, int n)
{
	int s=0,e=n-1;
	int mid=s+(s-e)/2;
	while(s<e)
	{
		if(arr[mid]>=arr[0])
		{
			s=mid+1;
		}
		else{
			e=mid;
		}
		mid=s+(e-s )/2;		
	}
	
	return s;
}

int binarysearch(vector<int>& arr, int s, int e, int k)
{
	int mid=s+(e-s)/2;
	while(s<=e)
	{
		if(arr[mid]==k)
		{
			return mid;
		}
		else if(arr[mid]>k)
		{
			e=mid-1;
		}
		else if(arr[mid]<k)
		{
			s=mid+1;
		}
	}
}

int findpos(vector<int>& arr, int n, int k)
{
	int pivot=findpivot(arr, n)
	
	if(k>=arr[pivot] && k<arr[n-1])
	{
		//search in second line i.e. apply binary search in second part
		return binarysearch(arr, pivot, n-1, k);
	}
	else{
		//search in first line i.e apply binary search in fisrt part
		return binarysearch(arr, 0, pivot-1, k );
	}
}
int main()
{
	
}
