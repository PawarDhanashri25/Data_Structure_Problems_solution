#include<iostream>
///Find the duplicate number in array 

using namespace std;
class solution{
	public:
	
	int  duplicate(int arr[], int n)
	{
		int ans=0;
		//XOR ing all array elements
		
		for(int i=0;i<n;i++)
		{
			ans=arr[i]^ans;
		}
		cout<<ans<<endl;
		
		//XOR  ans with [1, N-1] 
		for(int i=1;i<n;i++)
		{
			ans=ans^i;
		}
		return ans;
		
	}
};

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	solution s;
	int a=s.duplicate(arr, n);
	cout<<a;
	
}
