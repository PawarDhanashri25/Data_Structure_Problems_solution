#include<iostream>


///print numbers till in n using recursion 


using namespace std;

void decorder(int n)
{
	if(n==0)
	{
		return ;
	}
	cout<<n<<endl;
	decorder(n-1);
	
}
void incorder(int n)
{
	if(n==1)
	{
		
		cout<<"1"<<endl;
		return ;
	}
	incorder(n-1);
	cout<<n<<endl;
}
int main()
{
	int n;
	cin>>n;
	decorder(n);
	incorder(n);
	/*
	///printing elements in decreasing order up to n;
	for(int i=n;i>0;i--)
	{
		cout<<i<<" ";			
	}
	
	
	///printing elments in incresing order up to n;
	
	for(int i=1;i<=n;i++)
	{
		cout<<i<<" ";
	}*/
	
	
	return 0;
}
