//Problem:  Find the number of 1 bits in given unsigned integer

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

class solution {
	
	public:
		string s="";
		stringstream ss;
		int no_of_one(int n)
		{
			while(n>0)
			{
				
				int rem;
				rem=n%2;
				if(rem==0)
				{
					s=s+'0';	
				}
				else
				{
					s=s+'1';
				}
				n=n/2;
			}
			int count=0;
			reverse(s.begin(), s.end());
			for (int i=0;i<s.length();i++)
			{
				if(s[i]=='1')
				{
					count++;		
				}	
			}
			return count;
		}
};
int main()
{
	solution obj;
	int n;
	cin>>n;
	cout<<obj.no_of_one(n);
	
}
