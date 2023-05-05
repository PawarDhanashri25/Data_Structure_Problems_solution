#include<iostream>
#include<vector>
/// intersecation of two array 
using namespace std;

 
class solution {
	
	public:
		/*
	vector<int> intersection(vector<int> &arr1, vector<int> &arr2, int n, int m)
	{
		vector<int> ans;
		for(int i=0;i<m;i++)
		{
			int ele=arr1[i];
			for(int j=0;j<n;j++)
			{
				if(ele<arr2[j])
				{
					break;     //// this conddition is icluded beacause the elements are in increasing order 
								/// so we dont need the check for the next element  this is done to reduce time complexity
				}
				if(ele==arr2[j])
				{
					ans.push_back(ele);
					arr2[j]=-11111;
					break;
				}
			}
		}
		return ans;
	}
	*/
	
	///optimum solution of these  ----> with 1 sec  time complexity 
	
	//// Important question and appproach 
	vector<int> intersection(vector<int> &arr1, vector<int> &arr2, int n, int m)
	{
		vector<int> ans;
		int i=0, j=0;
		while(i<n && j<m)
		{
			if(arr1[i]==arr2[j])
			{
				ans.push_back(arr1[i]);
				i++;
				j++;
			
			}
			else if(arr1[i]<arr2[j])
			{
				i++;
			}
			else{
				j++;
			}
			
		}
		return ans;
	}
	
};
int main()
{
	int n, m;
	cin>>m>>n;
	int ele;
	vector<int> arr1;
	vector<int> arr2;
	for(int i=0;i<n;i++)
	{
		cin>>ele;
		arr1.push_back(ele);
	}
	for(int i=0;i<m;i++)
	{
		
		cin>>ele;
		arr2.push_back(ele);
	}
	
	solution s;
	vector<int> v =s.intersection(arr1, arr2, n,m);
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
}
