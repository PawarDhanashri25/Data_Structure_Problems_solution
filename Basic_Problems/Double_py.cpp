#include<iostream>
using namespace std;
/* Double  star pyramid
	 	*
	   * *
	  * * *
	 * * * *
	 * * * *
	  * * *
	   * *
	    *
	 
*/
int main()
{
	int n;
	cout<<"n:";
	cin>>n;
	int i,j;
	
	//above pyramid 
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"*"<<" ";
		}
		
		cout<<endl;
		
	}
	
	//below pyramid
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"*"<<" ";
		}
		
		cout<<endl;
		
	}

	
	return 0;
}
