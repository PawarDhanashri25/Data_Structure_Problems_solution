#include<iostream>
using namespace std;
int* pointsgame(int arr1[], int arr2[], int n)
{
	int i=0;
	int p[2];
	p[0]=0;
	p[1]=0;
	while(i<n)
	{
		if(arr1[i]==arr2[i])
		{
			p[0]=p[0]+0;
			p[1]=p[1]+0;
		}
		else if(arr1[i]>arr2[i])
		{
			p[0]=p[0]+1;
		}
		else{
			p[1]=p[1]+1;
			//cout<<"hii";
		}
		
		
		i++;
	}
	return p;
	
}
int main()
{
	int n;
	cin>>n;
	int arr1[n];
	int arr2[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>arr2[i];
	}
	int *result;
	result=pointsgame(arr1,arr2,n);
	for(int i=0;i<2;i++)
	{
		cout<<result[i]<<" ";
	}
	return 0;
}
