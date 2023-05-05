#include<iostream>

using namespace std;

int main()
{
	int n1, n2;
	
	cin>>n1>>n2;
	int hcf;
	int min;
	if(n1>n2)
	{
		min=n2;
	}
	else{
		min=n1;
	}
	for(int i=2;i<=min;i++)
	{
		if(n1%i==0 && n2%i==0)
		{
				hcf=i;
			
			
		}
	}
	cout<<"HCF:"<<hcf;
	return 0;
}
