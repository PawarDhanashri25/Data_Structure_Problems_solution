//aggressive cows Problem 
//Binary search advanced problems

#include<iostream>
#include<vector>

using namespace std;
class solution{
	
	int aggressivecows(vector<int>& stall, int k)
	{
		//sorting the array
		sort(stall.begin(), stall.end());
		
		int s=0;
		int maxi=-1;
		for(int i=0;i<stall.size();i++)
		{
			maxi=max(maxi, stall[i]);
		}
		
		e=maxi;
		int mid=s+(e-s)/2;
		int ans=-1;
		while(s<=e)
		{
			if(ispossible(stall,k, mid))
			{
				ans=mid;
				s=mid+1;            ///we want maximum distance cows 
			}
			else{
				e=mid-1;
			}
		}
		return ans;
		
	}
	bool ispossible(vector<int>& stall, int k, int mid)
	{
		int cowcount=1;
		int lastpos=stall[0];
		
		for(int i=0;i<stall.size();i++)
		{
			if(stall[i]-lastpos>=mid)
			{
				cowcount++;
				if(cowcount==k)
				{
					return true;
				}
			}
			
			lastpos= stall[i];
			
		}
		return false;
	}
};
int main()
{
	
}
