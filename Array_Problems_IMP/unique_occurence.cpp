#include<iostream>
#include<vector>
///Unique occurrences of number in array if yes then return true else return false 

using namespace std;
class solution{
	
	public:
	void unique_occu(vector<int> &v, int n)
	{
		vector<int> occu;
		
		for(int i=0;i<n;i++)
		{
			int a=v[i]; 
			int cnt=0;
			for(int j=0;j<n;j++)
			{
				
				if(v[j]==a)
				{
					cnt++;
				}
			
			}
				occu.push_back(cnt);
		}
		for(int i=0;i<occu.size();i++)
	{
		cout<<occu[i]<<" ";
	}
		
			
	}
};

int main()
{
	int n;
	cin>>n;
	int  ele;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		cin>>ele;
		v.push_back(ele);
	}
	
	solution s;
	s.unique_occu(v,n);
	
}
