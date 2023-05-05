//rectangle Pattern

/*#include<iostream>
using namespace std;

int main()
{
	int row, col;
	cout<<"Enter rows and cols:";
	cin>>row>>col;
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<"*";
		}
		cout<<endl;
		
	}
	return 0;
}
*/

///Hollow Rectabgle Pattern

#include<iostream>
using namespace std;

int main()
{
	int row, col;
	cout<<"Enter rows and cols:";
	cin>>row>>col;
	int i,j;
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			if(i==1||i==row|| j==1||j==col)       /// logic behind that is if there is first and last row is there 
												//then print the * also if there is fisrt and last col is there the also
												// print *.
			{
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
	return 0;
}
