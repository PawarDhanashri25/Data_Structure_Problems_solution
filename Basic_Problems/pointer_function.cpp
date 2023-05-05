#include<iostream>
using namespace std;

/////passing pointers to function

void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void increment(int *x)
{
	++*x;
}

int main()
{
	int a=2,b=4;
	int *aptr=&a;
	int *bptr=&b;
	
	swap(aptr,bptr);
	
	///OR swap(&a,&b)
	cout<<"a: "<<a<<" b: "<<b<<endl;
	
	int x=20;
	increment(&x);
	cout<<"x:"<<x;
	return 0;
}
