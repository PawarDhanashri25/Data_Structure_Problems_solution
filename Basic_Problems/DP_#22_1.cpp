#include<iostream>
using namespace std;
// Write a prgram to swap the two nmbers without using third varaible 
int main()
{
	 int a, b;
	 cin>>a>>b;
	 
	 cout<<"Value of a: "<<a<<" b: "<<b<<endl;
	 a=a+b;
	 b=a-b;
	 a=a-b;
	 cout<<"After swapping:"<<endl;
	 cout<<"a: "<<a<<" b: "<<b;
	return 0;
}
