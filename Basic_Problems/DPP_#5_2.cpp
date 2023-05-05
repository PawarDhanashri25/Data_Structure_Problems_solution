#include<iostream>

////Program to reverse the string 
using namespace std;

int main()
{
	
	string str;
	cout<<"Enter any string:";
	cin>>str;
	int l= str.length();
//	cout<<l;
	for(int i=l-1;i>=0;i--)
	{
		cout<<str[i];
	}
	
	return 0;
}
