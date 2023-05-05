#include<iostream>


///check if an array is sorted or not
using namespace std;
bool sorted(int arr[], int n)
{
	if(n==1)
	{
		return true;
	}
	bool restArray=sorted(arr+1,n-1);
	return (arr[0]<arr[1] && restArray);
	
}
int main()
{
	
	int arr[5]={1,2,3,5,4  };
	cout<<sorted(arr,5);
/*	This is simple approach ------>

	int arr[5]={1,2,3,4,5};
	int flag=0;
	for(int i=0;i<5;i++)
	{
		int j=i+1;
		if(arr[i]>arr[j])
		{
			cout<<"not sorted";
			flag=1;
			break;
		}
		
	}
	if(flag==0)
	{
		cout<<"sorted";
	}
	
	*/
	return 0;
}
