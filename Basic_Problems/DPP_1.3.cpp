 #include<iostream>
 
 ///find the prime numbers till the  n
 using namespace std;
 
 int main()
 {
 	int n;
 	cin>>n;
 	int flag;
 	for(int i=2;i<n;i++)
 	{
 	
 		for(int j=2;j<i;j++)
		 {
		 		flag=0;
				if(i%j==0)
				{
					flag=1;
					break;
					
				 }
					
		 }
		
 		if(flag==0)
		{
			cout<<i<<endl; 
			
		}		 
	}
 	
 	return 0;
 }
