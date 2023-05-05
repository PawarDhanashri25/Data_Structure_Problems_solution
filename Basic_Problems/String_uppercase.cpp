#include<iostream>
#include<string>
///problem statement : convert the given string into either lowercase or uppercase....

using namespace std;

int main()
{
	string str="dgHjrw";
	
	//cout<<'a'-'A'<<endl;
	
	//convert int upper case
	
	for(int i=0;i<str.size();i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]-=32;
		}
	}
	cout<<str<<endl;
	
	///convert to lower case
	for(int i=0;i<str.size();i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]+=32;
		}
	}
	cout<<str<<endl;
	
	//string s="gjjjrhj";
	//transform(0, s.size()-1, 0, :: toupper);
	//cout<<s<<endl;
	
	
	return 0;
}
