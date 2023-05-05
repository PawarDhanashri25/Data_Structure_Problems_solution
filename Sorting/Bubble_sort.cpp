// bubble sort

#include<iostream>
#include<vector>

using namespace std;
void bubblesort(vector<int>& arr, int n)
{
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j], arr[j+1]);
			}
		}
		
	}
}

//optimized code in case of  best case -- when array is already sorted it reduces the iterations
void bubble(vector<int>& arr, int n)

{
	bool swapped=false;
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n-i;j++)    ///comparisons are reduced
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j], arr[j+1]);
				swapped=true;
			}
			
			
		}
		if(swapped==false)
		{
			///array is already in sorted order
			break;
		}
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
	bubble(arr, n);
	cout<<"array after sorting:"<<endl;
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
