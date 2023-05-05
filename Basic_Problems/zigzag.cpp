////Zig Zag pattern

#include<iostream>
using namespace std;
/*
  Row= 1 to 3
  column: (i+j)%4==0 ||  j==2 && j%4==0   then print *

*/
int main()
{
	int n;
	cout<<"Enter n";
	cin>>n;
	int i,j;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=n;j++)
		{
			if((i+j)%4==0 || (i==2 && j%4==0))
			{
				cout<<"* ";
			}
			else{
				cout<<"  ";
		   	}
		}
		cout<<endl;
	}
	
	
	
	return 0;
	
}
