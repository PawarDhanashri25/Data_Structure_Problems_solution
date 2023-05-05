// problem : substract the product and sum of digits of an integer

#include<iostream>
using namespace std;

/*

int main()
{
	int sum=0;
	int pro=1;
	int n;
	cin>>n;
	while(n>0)
	{
		int rem=n%10;
		sum=sum+rem;
		pro=pro*rem;
		n=n/10;
	}
	cout<<"Difference bet product and sum of digit: "<<(pro-sum)<<endl;
}
*/

class solution{
	
	public: 
	int pro_sum_diff(int n)
	{
	    int sum=0;
	  	int pro=1;
	while(n>0)
		{
			int rem=n%10;
			sum=sum+rem;
			pro=pro*rem;
			n=n/10;
		}
	int diff=pro-sum;
	return diff;
	}
	
};

int main()
{
	solution obj;
	int n;
	cin>>n;
	int dif=obj.pro_sum_diff(n);
	cout<<dif;
}
