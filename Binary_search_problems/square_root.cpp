#include<iostream>

//find the square root using binary search
using namespace std;
class solution{ 
	public:
		long long int getsquroot(int n)
	{
		int s=0, e=n;
		long long int mid=s+(e-s)/2;
		long long int ans=-1;
		while(s<e)
		{
			long long int sq=mid*mid;
			if(sq==n){
				return mid;
			}
			else if(sq<n)
			{
				
				ans=mid;
				s=mid+1;
			}
			else
			{
			
				e=mid-1;
			}
			mid=s+(e-s)/2;
			
		}
		return ans;
	}
	
	double moreprecision(int n, int pre, int tempsol)
	{
		
		int factor=1;
		double ans=tempsol;
		for(int i=0;i<pre;i++)
		{
			factor=factor/10;
			for(double j=ans;j*j<n;j=j+factor)
			{
				ans=j;
			}
		}
		return ans;
	}
		
};
int main()
{
	int n;
	cin>>n;
	solution s;
	int sr=s.getsquroot(n);
	cout<<sr;
	
	double ans=s.moreprecision(n,3,sr);
	cout<<ans;
	
}
