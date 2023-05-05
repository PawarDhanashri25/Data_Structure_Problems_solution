#include<iostream>

using namespace std;

int main()
{
	int arr[5];
	cout<<"Enter the marks of five subject:";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	
	int total=0;
	for(int i=0;i<5;i++)
	{
		total=total+arr[i];
	}
	
	float per=(float(total)/500)*100;
	cout<<"Percentage:"<<per;
	return 0;
}
