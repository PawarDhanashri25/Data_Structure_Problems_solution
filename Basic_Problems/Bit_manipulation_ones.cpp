#include<iostream>

////Que : Write a program to count the number of ones in binary  representation of a number

using namespace std;


//// n  & n-1 has the same  bit as n except the rightmost bit
int numberofones(int n)
{
	int count=0;
	while(n)
	{
		n= n &(n-1);
		count++;
	}
	return count;
}
int main()
{
	cout<<numberofones(19)<<endl;
		
	return 0;
}
