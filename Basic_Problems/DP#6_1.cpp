#include<iostream>
using namespace std;
//Write a program to find out whether a given integer is present in an array

int main()
{
	int arr[100];
	
	for(int i=0;i<6;i++)
	{
		cin>>arr[i];
	}
	int flag=0,n;
	cin>>n;
	for(int i=0;i<6;i++)
	
	{
		if(n==arr[i])
		{
			flag=1;
			cout<<"Number present";
			break;
		}
	}
	
	if(flag==0)
	{
		cout<<"Number is not present";
	}
	return 0;
}
