#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	int z=0,p=0,ne=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			++z;
		}
		else if(arr[i]>0)
		{
			++p;
		}
		else{
			++ne;
		}
	}
	cout<<(float)z/n<<endl;
	cout<<(float)p/n<<endl;
	cout<<(float)ne/n<<endl;
	
	return 0;
}
