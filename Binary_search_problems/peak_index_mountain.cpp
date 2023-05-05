#include<iostream>
using namespace std;

///peak index in mountain array solved using binary search 
// index of element which is greater in array

int peakindex(vector<int>& arr)
{
	int s=0;
	int e=arr.size()-1;
	int mid=s+(e-s)/2;
	while(s<e)      ///not use s<=e beacuse we get our ans at iteration s<e ans  is s
	{
		if(arr[mid]<arr[mid+1])
		{
			s=mid+1;
			
		}
		else{
			e=mid;
			
		}
		mid=s+(e-s)/2;
		
	}
	return s;
	  
}
