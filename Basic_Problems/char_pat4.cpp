#include<iostream>

//character pattern 
// A B C
// B C D
// C D F

using namespace std;
int main()

{
	
	int n;
	cin>>n;
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j< n;j++)
		{
			char ch='A'+i+j-1;
			cout<<ch<<" ";
			
		}
		cout<<endl;
	}
}
