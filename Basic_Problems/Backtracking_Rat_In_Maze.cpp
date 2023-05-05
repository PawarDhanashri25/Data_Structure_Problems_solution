#include<iostream>

using namespace std;


bool issafe(int** arr, int x, int y, int n)
{
	if(x < n && y < n && arr[x][y]==1)   ////this function checking actuallly our rat will able to go there
	{
		return true;
	}
	return false;
	
}

bool ratinmaze(int** arr, int x, int y, int n, int** solArr)
{
	
	if(x==n-1 && y==n-1)
	{
		solArr[x][y]=1;
		return true;
	}
	if(issafe(arr,x,y,n))
	{
		solArr[x][y]=1;      ///we consider what path we decide it will give a solution so it will set to 1 
		if(ratinmaze(arr, x+1, y,n,solArr))
		{
			return true;      ////move in right direction if it gives solutuon then return true
		}
		if(ratinmaze(arr,x,y+1, n, solArr))
		{
			return true;     ////move in down ward direction if it  gives dolution then return true
		}
		solArr[x][y]=0;   ////backtracking    ////if it not give our solution then set it to false
		return false;
	}
	return false;
	
	
}
int main()
{
	int n;
	cin>>n;
	int** arr= new int*[n];   /////creating dyanamic array
	for(int i=0;i<n;i++)
	{
		arr[i]=new int[n];    /////allocate dynamic  memory to the array nXn
	}
	
	
	/////taking input matrix 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)    
		{
			cin>>arr[i][j];
		}
	}
	
	int** solArr= new int*[n];    ////it is the output matrix 
	for(int i=0;i<n;i++)
	{
		solArr[i]=new int[n];
		for(int j=0;j<n;j++)
		{
			solArr[i][j]=0;	
		}
	}
	cout<<"output Matrix:"<<endl;
	if(ratinmaze(arr, 0, 0, n, solArr))
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<solArr[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	
	return 0;
}
