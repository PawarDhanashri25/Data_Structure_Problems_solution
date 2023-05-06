//sum of two array  
#include<iostream>
#include<vector>

using namespace std;

vector<int> sum_array(vector<int>& arr1,int n,  vector<int>& arr2, int m)
{
	int sum=0, carry=0;
	int i=n-1;
	int j=m-1;
	vector<int> ans;
	while(i>=0 && j>=0)
	{
		int val1=arr1[i];
		int val2=arr2[j];
		
		int sum= val1+val2+carry;
		
		carry=sum/10;
		
		sum=sum%10;
		ans.push_back(sum);
		i--;
		j--;
		
	}
	
	///first case --->  first array is greater than second array
	
	while(i>=0)
	{
		int sum=arr1[i]+carry;
		
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		i--;
	}
	
	//second case  ------> second array is greater than first array
	
	while(j>=0)
	{
		int sum=arr2[j]+carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		j--;
		
	}
	 
	 //third case --> carry is remaining 
	 
	 while(carry!=0)
	 {
	 	sum=carry;
	 	carry=sum/10;
	 	sum=sum%10;
	 	ans.push_back(sum)
	 	
	 }
	
	
	return reverse(ans);
}

vector<int> reverse(vector<int> ans)
{
	int s=0;
	int e=ans.size();
	
	while(s<e)
	{
		swap(ans[s++], ans[e--]);
	}
	return ans;
}
int main()
{
	
}
