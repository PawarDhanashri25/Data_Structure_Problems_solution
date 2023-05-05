#include<iostream>
#include<bits/stdc++.h>
using namespace std;

///    coversions of number system

/*int binarytoDecimal(int n)
{
	int ans=0,y;
	int x=1;
	while(n>0)
	{
		y=n%10;
		ans+= x*y;
		x=x*2;
		n=n/10;	
	}	
	return ans;
} */
/*
int octaltoDecimal(int n)
{
	int ans=0,y,x=1;
	while(n>0)
	{
		y=n%10;
		ans=ans+x*y;
		x=x*8;
		n=n/10;
	}
	return ans;
}*/ 

int hextoDecimal(string n)
{
	int ans=0,x=1;
	
	int s= n.size();
	for(int i=s-1;i>=0;i--)
	{
		if(n[i]>='0' && n[i]<=9)
		{
			ans+=x*(n[i]-'0');
		}
		else if(n[i]>='A' &&  n[i]<= 'F')
		{
			ans+= x*(n[i]-'A'+10);
		}
		x=x*16;
	}
	return ans;
}
int decimaltoBinary(int n)
{
	int ans=0, x=1;
	while(x )
}

int main()
{
	 
	int n;
	cout<<"n:";
	cin>>n;
	//cout<<binarytoDecimal(n)<<endl;
	//cout<<octaltoDecimal(n)<<endl;
	/*string hexno;
	cout<<"HexNo:";
	cin>>hexno;
	cout<<hextoDecimal(hexno);
	*/
	cout<<decimaltoBinary(n);
	return 0;
}
