#include<iostream>

//character pattern 
// A B C
// A B C
// A B C

using namespace std;
int main()

{
	
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<n;j++)
		{
			char ch='A'+j;
			cout<<ch<<" ";
			
		}
		cout<<endl;
	}
}
