#include<iostream>
using namespace std;

int main()
{
	int a=10;
	int *aptr;    	////pointer varaible
	aptr=&a;			/// aptr varaible point to the address of varaible 'a'
	cout<<&a<<endl;       ////print the address of a variable
	cout<<aptr<<endl;		// print the address of a variable
	cout<<*aptr<<endl;		// print the value of variable 'a'
	
	
	
	///we can update the value of varaible 'a' using the pointer varaible aptr ---->
	*aptr=20;
	cout<<a<<endl;   ///update the value of a varaible from 10 to 20
	
	////pointer arithmetic operation 
	
	aptr++;
	///for ex. aptr=2000     ----aptr++ = 2004
	cout<<aptr<<endl; 			//// increment the address of integer varaible by four.
	
	
	char ch ='a';
	char *chptr;
	chptr=&ch;
	
	cout<<chptr<<endl;
	
	chptr++;		///increment the address of character varaible by 1 
	cout<<chptr<<endl;    //for ex. chptr=3000   chptr++= 3001
	 
	
	return 0;
}
