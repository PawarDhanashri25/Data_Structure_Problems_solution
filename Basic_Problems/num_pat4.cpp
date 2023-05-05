#include<iostream>

//number pattern 
// challenge is uwithout using int cnt varaible --->

using namespace std;
int main()

{
	
	int n;
	int cnt=1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<cnt<<" ";
			cnt=cnt+1;
		}
		cout<<endl;
	}
}
