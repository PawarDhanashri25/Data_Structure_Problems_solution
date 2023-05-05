#include<iostream>
using namespace std;

//// find the maximum sum of subarray 

int main()
{
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int sum=0;
	int maxsum=INT_MIN;
	for (int i=0;i<n;i++)
	{
		sum=0;
		for(int j=i;j<n;j++)
		{
			sum+=arr[j];
			cout<<sum<<" ";
			maxsum=max(maxsum,sum);
		}
		
	}
	cout<<endl;
	cout<<maxsum;
	
	return 0;
}
