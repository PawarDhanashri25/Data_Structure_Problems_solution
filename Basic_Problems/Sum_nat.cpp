#include<iostream>
using namespace std;
/// sum of natural numbers upto n 
int main()
{
	int n;
	cout<<"n:";
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=i;
		
	}
	cout<<"Sum:"<<sum;
	return 0;
}
