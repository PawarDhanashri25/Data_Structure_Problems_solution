#include<iostream>

using namespace std;

int main()
{
	int no,lastdigit;
	int sum=0;
	
	cout<<"Enter a number:";
	cin>>no;
	int copy=no;
	while(no>0)
	{
		lastdigit=no%10;
		sum+=lastdigit*lastdigit*lastdigit;          ///  we can also use this method pow(lastdigit,3)
		no=no/10;
	}
	if(copy==sum){
		cout<<"Armstrong number";
	}
	else
	{
		cout<<"Not armstrong number";
	}
	
	return 0;
}
