#include<iostream>
//Problem Statement: length of longest arithmetic subarray from given array
/// *********** This problem ask by GOOGLE in Kick start contest   ********************************
using namespace std;

int main()
{
	int n;
	cout<<"n:";
	cin>>n;
	int arr[n];
	cout<<"Enter array element:";
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int pd=arr[1]-arr[0];
	int ans=2;
	int j=2;  
	int curr=2;
	
	while(j<n)
	{
		if(pd==arr[j]-arr[j-1])
		{
			curr++;
		}
		else{
			pd=arr[j]-arr[j-1];
			curr=2;
		}
		ans= max(ans, curr);
		j++;
	}
	cout<<"Length of subarray:"<<ans<<endl;
	
	return 0;	
} 
