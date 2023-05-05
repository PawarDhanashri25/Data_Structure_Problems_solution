#include<iostream>

using namespace std;

////Finding lcm of two numbers....
int main()
{
	int no1,no2;
	cin>>no1>>no2;
	
	for(int i=1;i>0;i++)
	{
		if(i%no1==0 && i%no2==0)
		{
			cout<<"LCM:"<<i;
			break;
		}
	}
	
	
	return 0;
}
