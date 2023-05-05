#include<iostream>

////Que : check whether the given number is power of 2 using Bit manipulation concept

using namespace std;

	//n= 6= (0110) //flip the rightmost 1 of by 0 and all the onwards 0 by 1 to get the n-1 number
	//n-1= 5= (0101) 
	
	///to check whether the given number is power of 2 we have perform AND operation bet n and n-1 if it is 0 then 
	///the given number is power of 2 otherwise not
	bool ispowerof2(int n)
	{
		return (n && !(n & n-1));
	}

	int main()
	{
	/*int n; 
	cin>>n;
	while(n>0)
	{
		
		n=n/2;
		if(n==1)
		{
			cout<<"power of 2"<<endl;
		}
	}*/
	
	cout<<ispowerof2(16)<<endl;
	return 0;
}
