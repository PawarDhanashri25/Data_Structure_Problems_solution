#include<iostream>
using namespace std;

///Recursion problems

///Tower of Hanoi problem
void TOH(int n, char src, char dest, char help)
{
	if(n==0)
	{
		return;			///base case
		
	}
	else{
		
		TOH(n-1, src, help, dest);
		cout<<"move from "<<src<<" to "<<dest<<endl;
		TOH(n-1, help, dest, src);
	}
}


int main()
{

	TOH(3, 'A', 'C', 'B');
	return 0;
}
