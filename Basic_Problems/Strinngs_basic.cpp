#include<iostream>
#include<string>

using namespace std;

int main()
{
	/*
	string str;
	cin>>str;
	cout<<str<<endl;
	
	string str1(5, 'n');         
	cout<<str1<<endl;
	*/
	
	//string str2;
	//getline(cin,str2);        ///get input of string with space
	//cout<<str2<<endl;
	
	/*
	string s1="fam";
	string s2="ily";
	cout<<s1+s2<<endl;          ///s1= s1+s2    cout<<s1
	s1.append(s2);
	cout<<s1<<endl;
	*/
	
	///Access the character of string
	
//	cout<<s1[4]<<endl;
	
	// s1.clear();    /////clear the string
	
	string s3= "abc";
	string s4="xyz";
	cout<<s4.compare(s3)<<endl;		/// output 1 means s4 is greater   if -1 output then s4 is smaller if 0 then equal
	s3="abc";
	s4="abc";
	
	if(!s3.compare(s4))
	{
		cout<<"String is equal"<<endl;
	}
	
	s3.clear();
	if(s3.empty())
	{
		cout<<"String is empty"<<endl;
	}
	
	string s="hiiihello";
	//s.erase(3,2);
	cout<<s<<endl;
	
	cout<<s.find("hello")<<endl;
	
	s.insert(3,"hii");
	cout<<s<<endl;
	cout<<s.size()<<endl;
	cout<<s.length()<<endl;
	
	string ss= s.substr(6,4);
	cout<<ss<<endl;
	
	//string s6= "786";
	//int x= stoi(s6);
	//cout<<x+2<<endl;
	
	//int y=786;
	//cout<<to_string(x)<<endl;
	
	string str="xgdgjdddcyeir";
	sort(str.begin(),str.end());
	cout<<str<<endl;
	
	
	return 0;
}
