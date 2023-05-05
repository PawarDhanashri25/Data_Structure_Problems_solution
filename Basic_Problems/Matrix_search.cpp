#include<iostream>
using namespace std;
///Problem statement: Search the key element int the Matrix
// element of row are in ascending order from left to right
///element of column are in ascending order from top to bottom.
 
int main()
{
	int n,m,key;
	cout<<"n,m";
	cin>>n>>m;
	int arr[n][m];
	cout<<"key:";
	cin>>key;
	cout<<"Matrix:";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	int flag=0;
	int r=0, c=m-1;
	while(r<n && c>=0)
	{
			if(arr[r][c]==key)
			{
				cout<<"Found";
				flag=1;
				break;
			}
			if(arr[r][c]>key)
			{
				c--;
			}
			else{
				r++;
			}
			
	}
	if(flag==0)
	{
		cout<<"Not found";
	}
	return 0;
}
