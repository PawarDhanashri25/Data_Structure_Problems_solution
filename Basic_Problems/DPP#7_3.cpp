#include<iostream>

using namespace std;
///conver decimal to octal number

int main()
{
	
	int no;
	cin>>no;
	
	int arr[30];
	int i=0;
	int rem;
	while(no)
	{
		rem=no%8;
		no=no/8;
		arr[i]=rem;
		i++;
	}
	for(int j=0;j<i;j++)
	{
		cout<<arr[j];
	}
	return 0;
}
