#include<iostream>

using namespace std;


int main()
{
	
	int a=4;
	int b=6;
	
	cout<<"a&b: "<< (a&b)<<endl;
	cout<<"a|b: "<< (a|b)<<endl;
	cout<<"~a: "<< (~a)<<endl;
	cout<<"a^b: "<< (a^b)<<endl;
	
	
	/// left shift ----> multiply by 2 
	
	
	cout<<"Left shift: "<<(3<<1)<<endl;
	
	///right shift  ----> divide by 2 
	
	
	cout<<"Right Shift: "<< (5>>2)<<endl;
	
}
