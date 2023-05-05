#include<iostream>
#include<string>
#include<algorithm>
///problem statement: Form the biggest number from the numeric string 

using namespace std;

int main()
{
	string str= "2456";
	
	sort(str.begin(), str.end(), greater<int>());
	
	cout<<str<<endl;
	
	return 0;
}
