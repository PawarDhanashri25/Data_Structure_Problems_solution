//Check if the array is sorted and rotated

#include<iostream>
#include<vector>

using namespace std;
bool check(vector<int>& arr)
{
	int count=0;
	int n= arr.size();
	
	for(int i=1;i<n;i++)
	{
		if(arr[i-1]>arr[i])
		{
			count++;
		}
		
	}
	if(arr[n-1]>arr[0])
	{
		count++;
	}
	
	return count<=s1;
}
int main()
{
		
}

