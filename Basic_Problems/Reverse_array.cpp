//Reverse the array element 

#include<iostream>

using namespace std;

void rev_array(int arr[], int n )
{
	int s=0;
	int end=n-1;
	for(int i=0;i<n;i++)
	{
		
		while(s<end)
		{
			int temp=arr[s];
			arr[s]=arr[end];
			arr[end]=temp;
			s++;
			end--;
		}
	}
}
void printarray(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	rev_array(arr,n);
	printarray(arr,n);
	
}
