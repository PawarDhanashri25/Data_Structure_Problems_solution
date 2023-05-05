// selection sort
#include<iostream>
#include<vector>
using namespace std;
void selsort(vector<int>& arr, int n)
{
	for(int i=0;i<n;i++)
	{
		int minind=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[minind])
			{
				minind=j;
			}
		}
		swap(arr[minind],arr[i]);
	}
}
int main()
{
	int n;
	cin>>n;
	vector<int> arr;
	for(int i=0;i<n;i++)
	{
		int ele;
		cin>>ele;
		arr.push_back(ele);
	}
	
	selsort(arr,n);
	
	cout<<"array after sorting:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
