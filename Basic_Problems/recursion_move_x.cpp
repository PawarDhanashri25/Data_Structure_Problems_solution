#include<iostream>
using namespace std;

///Recursion problems

//move all X to the end of the string 
////"axxbdxcefxhix"  ----> "abdcefhixxxxx"


string movex(string s)
{
	if(s.length()==0)
	{
		return " ";
	}
	char ch=s[0];     
	string ans= movex(s.substr(1));
	
	if(ch=='x')
	{
		return ans+ch;
	}
	return ch+ans;
}
int main()
{
	
	cout<<movex("axxbdxcefxhix");
	return 0;
	
}
