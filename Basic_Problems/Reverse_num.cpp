#include<iostream>

using namespace std;

int main()
{
	int no,lastdigit;
	int rev=0;
	cout<<"Enter a number:";
	cin>>no;
	
	while(no>0)
	{
		lastdigit=no%10;
		rev=rev*10+lastdigit;
		no=no/10;
	}
	cout<<"Reverse number: "<<rev;
	return 0;
}
