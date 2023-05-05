#include<iostream>

//character pattern 
// A B C
// C D E
// F G H

using namespace std;
int main()

{
	
	int n;
	cin>>n;
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<n;j++)
		{
			char ch='A'+cnt;
			cout<<ch<<" ";
			
		}
		cout<<endl;
	}
}
