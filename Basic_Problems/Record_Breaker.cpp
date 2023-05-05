#include<iostream>
using namespace std;

// Problem statement : Record breaker  Asked BY GOOGLE in Kick start contest

int main()
{
	int n;
	cout<<"n";
	cin>>n;
	int arr[n+1];
	arr[n]=-1;
	cout<<"Enter array elemets:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	if(n==1)
	{
		cout<<"1";
		return 0;
	}
	int ans=0;
	int mx=-1;
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]>mx && arr[i]>arr[i+1])
		{
			ans++;
		}
		mx= max(mx,arr[i]);
	}
	cout<<"Record Breaking days: "ans<<endl;
	return 0;
}
