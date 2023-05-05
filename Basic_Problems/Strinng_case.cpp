#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	
	string str= "FGgttujjfs";
	transform(str.begin(), str.end(), str.begin(), ::toupper);
	
	cout<<str<<endl;
	
	transform(str.begin(), str.end(), str.begin(), :: tolower);
	cout<<str<<endl;
	
	
	///form the greater number
	string s= "2546573";
	
	sort(s.begin(), s.end(),greater<int>());
	cout<<s<<endl;
	
	
	return 0;
}
