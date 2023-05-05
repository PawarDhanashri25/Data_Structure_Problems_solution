#include<iostream>
using namespace std;

////Butterfly pattern for n=4 
 //8 rows and 8 columns   
 //  2*n rows and cols
  ///Rows: 1 To n     *= row_no
 /// Space: 2*n- 2*Row_no
int main()
{
	int n;
	cout<<"Enter n";
	cin>>n;
	
	int i,j;
	//for above part
	for(i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		int space=2*n-2*i;
		for(j=1;j<=space;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	///for below part
	for(i=n;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		int space=2*n-2*i;
		for(j=1;j<=space;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

