#include<iostream>

using namespace std;
//problem of maximum of chocolates .......



int main()
{
	int rupees;
	int ch,wr;
	cin>>rupees;
	ch=rupees;
	wr=ch;
	while(wr>=2)
	{
		wr=ch/3;
		ch=ch+wr;
		
	}
	cout<<ch;
	return 0;
}
