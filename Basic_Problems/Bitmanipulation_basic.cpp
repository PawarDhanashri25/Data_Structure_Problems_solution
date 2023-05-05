#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
//// Bit manipulation----------->

int getBit(int n , int pos)				////get bit at given position
{
	
	return ((n & (1<<pos))!=0) ;
}
int setBit(int n, int pos)			/// set the bit 
{
	return n| (1<<pos);
}

int clearBit(int n, int pos)		// clear the bit
{
	int mask= ~(1<<pos);
	return ( n & mask);
}

int updateBit(int n, int pos, int value)			///update the bit
{
	int mask= ~(1<<pos);
	n=n&mask;
	return n|(value<<pos);
}
int main()
{
	cout<<getBit(5,3)<<endl;
	cout<<setBit(5,1)<<endl;
	cout<<clearBit(5,2)<<endl; 
	cout<<updateBit(5,1,1)<<endl;    
	return 0;
}
