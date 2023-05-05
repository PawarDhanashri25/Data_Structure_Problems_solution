#include<iostream>
using namespace std;

///inverted number pattern
/*
12345
1234
123
12
1
*/
/*
int main()
{
	int n;
	int i,j;
	cout<<"Enter n ";
	cin>>n;
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
		
	}
	
	return 0;
}

*/
/// 0-1 Pattern
/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/

int main()
{
	
	int n;
	int i, j;
	cout<<"Enter n ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if((i+j)%2==0)
			{
				cout<<"1";
			}
			else
			{
				cout<<"0";
			}
		}
		cout<<endl;	
	}
	return 0;
	
}

