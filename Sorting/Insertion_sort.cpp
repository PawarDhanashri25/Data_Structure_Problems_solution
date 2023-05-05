////insertion sort 
#include<iostream>
#include<vector>

using namespace std;

void insersort(vector<int>& arr, int n)
{
	for(int i=1;i<n;i++)
	{
		int temp=arr[i];
		int j=i-1;
		for(;j>=0;j--)
		{
			if(arr[j]>temp)
			{
				arr[j+1]=arr[j];
			}
			else{
				
				//stop
				break;
			}
			
		}
		arr[j+1]=temp;
	}
}
int main()
{
	int n;
	cin>>n;
	vector<int>  arr;
	for(int i=0;i<n;i++)
	{
		int ele;
		cin>>ele;
		arr.push_back(ele);
	}
	
	insersort(arr,n);
	cout<<"after sorting:"<<endl;
	for(int i=0; i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

