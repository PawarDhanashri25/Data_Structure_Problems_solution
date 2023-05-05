#include<iostream>
using namespace std;
///Problem statement : Fing the length of largest word in character array....
 
int main()
{
	int n;
	cout<<"n:";
	cin>>n;
	char arr[n];
	cin.getline(arr,n);
	cin.ignore();
	int i=0;
	int curlen=0,maxlen=0;
	int st=0,maxst=0;
	while(1)
	{
		if(arr[i] == ' ' || arr[i]=='\0')
		{
			if(curlen>maxlen)
			{
				maxlen=curlen;
				maxst=st;	
			}	
			curlen=0;
			st=i+1;
		}
		else{
			curlen++;
		}
		if(arr[i]== '\0')
		{
			break;	
		}	
		
		i++;
	}	
	cout<<maxlen;
	return 0;
}
