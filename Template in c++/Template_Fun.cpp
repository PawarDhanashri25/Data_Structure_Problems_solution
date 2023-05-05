#include<iostream>
using namespace std;

///Template and  function Template


template <class T1, class T2>

///finding average function
float funavg(T1 a, T2 b)
{
	float avg= (a+b)/2;
	return avg;
	
}

////swapping function 
template <class T>
void swapp(T &a , T &b)
{
	T temp= a;
	a=b;
	b=temp;
}

int main()
{
	float a;
	a= funavg(5, 2.6);
	cout<<"Average: "<<a<<endl;
	int x=5, y=7;
	swapp(x,y);
	cout<<"x: "<<x<<" y: "<<y;
	
	return 0;
}
