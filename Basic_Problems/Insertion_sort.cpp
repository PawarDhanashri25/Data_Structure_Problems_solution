#include<iostream>

using namespace std;
//Insertion sort


int main()
{
	int n;
	cout<<"n:";
	cin>>n;
	int arr[n];
	cout<<"Enter array element:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++)
	{
		int current = arr[i];
		int j=i-1;
		while(arr[j]>current &&  j>=0)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=current
		
		
	}
	return 0;
}
