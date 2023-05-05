#include<iostream>


using namespace std;

void Alernate_swap(int arr[], int n)
{
	int temp, i=1;
	while(i<n)
	{
		temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
		i=i+2;
	}
	
}
void print_array(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
int main()
{
	int n;
	cin>>n;
	
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	Alernate_swap(arr, n);
	print_array(arr, n);
	
	
}
