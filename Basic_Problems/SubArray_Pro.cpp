#include<iostream>
using namespace std;
///Problem statement: 
//Find the subarray from given array whoose sum is equal to s....
//Asked in GOOGLE ,FACEBOOK, VISA etc..
int main()
{
	int n,s;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"s:";
	cin>>s;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=0;
		for(int j=i;j<n;j++)
		{
			
			sum+=arr[j];
			if(sum==s)
			{
				cout<<i+1<<" "<<j+1;
			}
			
		}
	}
	return 0;
}
