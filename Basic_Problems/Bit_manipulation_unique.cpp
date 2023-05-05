#include<iostream>

////Que : Write a program to find a unique number in an array where all numbers except one, are present twice 

using namespace std;

int uniquearr(int arr[], int n)
{
	int xorsum= 0;
	for(int i=0;i<n;i++)
	{
		xorsum= xorsum^arr[i];
	}
	return xorsum;
}
int main()
{
	
	int arr[]={1,2,3,4,1,2,3};
	cout<<uniquearr(arr,7);
	return 0;
}
