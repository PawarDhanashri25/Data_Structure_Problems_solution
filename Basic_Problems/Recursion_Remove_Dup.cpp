#include<iostream>
using namespace std;

///Recursion problems

//Remove all duplicates from the string 
////"aaaabbbeeecddd"  ----> "abecd"

string  removeDup(string s)
{	
	if(s.length()==0)
	{
		return  "";
	}
	
	char ch= s[0];
	string ans= removeDup(s.substr(1));
	
	if(ch==ans[0])
	{
		return ans;
		
	}
		return ch+ans; 
 	
}
int main()
{
	
	cout<<removeDup("aaaabbbeeecddd");
	return 0;
	
}
