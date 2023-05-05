#include<iostream>
using namespace std;

////write a program to find reverse of array

int main()
{
	int arr[5];
	
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	//int size= arr.length();
	//cout<<size;
	for(int i=4;i>=0;i--)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
