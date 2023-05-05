#include<iostream>
#include<climits>
using namespace std;

int main()
{
	int n;
	cout<<"n:";
	cin>>n;
	int arr[n];
	cout<<"Enter array elemets:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int maxn=arr[0];         // max=INT_MIN    INT_MIN is minimum value available in c++    #include<climits> required to import
	int minn=arr[0];			// min=INT_MAX   INT_MAX is maximum value available in c++
	for(int i=0;i<n;i++)
	{
		if(maxn<arr[i])
		{
			maxn=arr[i];      // maxn= max(maxn, arr[i]);    instead of these we can use
		}						/// max() and min() are inbuilt functions
		if(minn>arr[i])
		{
			minn=arr[i];		///minn= min(minn,arr[i])      
		}
	}
	cout<<"Max element:"<<maxn;
	cout<<"Min element:"<<minn;
	
	return 0;
}
