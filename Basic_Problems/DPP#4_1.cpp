#include<iostream>

using namespace std;
///convert the decimal number to binary number
int main()
{
	int n;
	cin>>n;
	int rem;
	int a[30];
	int i=0;
	while(n)
	{
		rem=n%2;
		n=n/2;
		a[i]=rem;
		i++;
	}
	for(int j=i-1;j>=0;j--)
	{
		cout<<a[j];
	}
	return 0;
}
