#include<iostream>
using namespace std;

int main()
{
	int arr[]={10,20,30};
	cout<<*arr<<endl;    ///it will print 10
	
	
	int *ptr=arr;
	for(int i=0;i<3;i++)
	{
		cout<<*ptr<<endl;
		ptr++;				///arr++  is illegal   so we use ptr pointer varaible to increment index 
		
		//or
		//cout<<*(arr+i)<<endl;
	}
	
	////************** pointer to pointer varaible ****************************8
	
	int a=20;
	int *p;
	p=&a;
	cout<<p<<endl;
	cout<<*p<<endl;
	
	
	int **q=&p;        		///pointer to pointer varaible   it point to the address of p pointer varaible
	cout<<*q<<endl;
	cout<<**q<<endl;
	
	return 0;
}
