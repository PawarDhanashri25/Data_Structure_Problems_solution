#include<iostream>
using namespace std;

//// check if there exists two elelemts iin an array such that their sum is equal to given k....

/*bool pairsum(int arr[], int n, int k)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(arr[i]+arr[j]==k)
			{
				cout<<i<<" "<<j<<endl;
				return true;
			}
		}
	}
	return false;
}
*/

///Another approach to solve that problem
///This approach is applicable to sorted array
///if the array is not in sorted order then we need to sort the array...

bool pairsum(int arr[], int n,int k)
{
	
	int low=0;
	int high=n-1;
	while(low<high)
	{
		if(arr[low]+arr[high]==k)
		{
			cout<<low <<" "<<high<<endl;
			return true;
		}
		else if(arr[low]+arr[high]>k)
		{
			high--;
		}
		else
		{
			low++;
		}
	}
	return false;
}

int main()
{
	int n;
	cin>>n;
	int k=31;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<pairsum(arr, n,k);
	
	return 0;
	
}
