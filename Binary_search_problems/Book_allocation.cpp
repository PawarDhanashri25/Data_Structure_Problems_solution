#include<iostream>
#include<vector>
using namespace std;
// Book allocation problem using binary search appproach 

class solution{
	public:
		int allocatebook(vector<int>& arr, int n, int m)
		{
			int s=0;
			int sum=0;
			for(int i=0;i<m;i++)
			{
				sum+=arr[i];
			}
			int ans=-1;
			int e=sum;
			int mid=s+(e-s)/2;
			while(s<=e)
			{
				if(ispossible(arr, n, m, mid))
				{
					ans=mid;
					e=mid-1;
					
				}
				else{
					s=mid+1 ;  // if given mid is not possible solution
				}
				mid=s+(e-s)/2;
			}
			return ans;
		}
		bool ispossible(vector<int>& arr, int n, int m, int mid)
		{
			int studcount=1;
			int pagesum=0;
			for(int i=0;i<m;i++)
			{
				if(pagesum+arr[i]<=mid)
				{
					pagesum +=arr[i];
				}
				else{
					studcount++;
					if(studcount>n || arr[i]>mid)
					{
						return false;
					}
					pagesum=arr[i];
						
					
				}
			}
			return true;
		}
};
int main()
{
	int n=2;
	int m=4;
	vector<int> arr;
	for(int i=0;i<m;i++)
	{
		int ele;
		cin>>ele;
		arr.push_back(ele);
	}
	solution obj;
	cout<<"Ans: "<<obj.allocatebook(arr, n,m);	
	
}
