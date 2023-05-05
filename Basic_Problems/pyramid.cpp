#include<iostream>
using namespace std;

///inverted half pyramid ------>
 *****
 ****
 ***
 **
 *
/*int main()
{
	
	int n;
	int i,j;
	cout<<"Enter value of n";
	cin>>n;
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	return 0;
}

*/
///Half Pyramid After 180 Rotation ----->

         *
        **
       ***
      ****
int main()
{
	int n;
	cout<<"Enter n value";
	cin>>n;
	
	int i,j;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j<=n-i)
			{
				cout<<" ";  ///adding spaces
			}
			else
			{
				cout<<"* ";
			}
		}
		cout<<endl;
	}
	
	return 0;
	
}


