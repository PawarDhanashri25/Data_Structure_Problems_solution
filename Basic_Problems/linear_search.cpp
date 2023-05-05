#include<iostream>

using namespace std;

int main()
{
	int n,key,flag=1;
	cout<<"n:";
	cin>>n;
	int arr[n];
	cout<<"Enter array elemets:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter search element:";
	cin>>key;
	
	for(int i=0;i<n;i++)
	{
		if(key==arr[i])
		{
			cout<<"Element found at position "<<i;
			flag=0;
			break;
			
		}
	}
	if(flag==1)
	{
		cout<<"Element not found";
	}
	
	return 0;	
}
