// painters board partition problem '
//Binary search advanced problem 

#include<iostream>
#include<vector>
using namespace std;

class solution {
	public:
		int boardallo(vector<int>& arr, int k, int n)
		{
			int s=0;
			int sum=0;
			for(int i=0;i<n; i++)
			{
				sum+=arr[i];
			}
			int e=sum;
			int ans=-1;
			int mid=s+(e-s)/2;
			while(s<=e)
			{
				if(ispossible(arr,n, k, mid))
				{
					
					
					ans=mid;
					e=mid-1;
				}
				else{
					
					s=mid+1;
				}
				mid=s+(e-s)/2;
			}
			return ans;
		}
		bool ispossible(vector<int>& arr, int n, int k , int mid)
		{
			int count=1;
			int timesum=0;
			
			for(int i=0;i<n;i++)
			{
				if(timesum+arr[i]<=mid)
				{
					timesum+=arr[i];
				}
				else{
					count++;
					if(count>k || arr[i]>mid)
					{
						return false;
					}
					timesum=arr[i];
				}
				return true;
			}
			
		}
		
};
int main()
{
	int k=2;
	int n=4;
	vector<int> arr;
	for(int i=0;i<n;i++)
	{
		int ele;
		cin>>ele;
		arr.push_back(ele);
	}
	solution s;
	cout<<s.boardallo(arr, k, n );
}

