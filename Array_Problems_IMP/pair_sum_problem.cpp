#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/// find the pair from array whoose sum is equal to k 
///output should be vector of vector  and pair should be printed in sorted order 
//<4,1> it should be <1,4> in thse order printed and each printing order od each pair is alos sorder 
class solution{
	public: 
	vector<vector<int> > pair_sum(vector<int> &arr, int n , int s)
	{
		vector<vector<int> > ans;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(arr[i]+arr[j]==s)
				{
					vector<int> temp;
					temp.push_back(min(arr[i], arr[j]));
					temp.push_back(max(arr[i] ,arr[j]));
					ans.push_back(temp);
				}
			}
		}
		sort(ans.begin(),ans.end());
		return ans;
		
	}
	
};
int main()
{
	int n;
	cin>>n;
	int s;
	cin>>s;
	int  ele;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		cin>>ele;
		v.push_back(ele);
	}
	solution ss;
	vector<vector<int> > ans;
	ans=ss.pair_sum(v, n, s);
	for(int i=0;i<ans.size();i++)
	{
		for(int j=0;j<ans[i].size();j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
