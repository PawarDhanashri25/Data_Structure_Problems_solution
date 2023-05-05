#include<iostream>
#include<vector>
using namespace std;

///c++.com vector method
template <class T> 

void display(vector<T> &v)
{
	cout<<"Displaying vector:"<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	
	cout<<endl;
}
int main()
{
	
	////ways to create vector 
	vector<int> vec1;  ////Zero lenght vector 
	vector<char> vec2(4);   ////4 element character vector 
	vector<char> vec3(vec2);  //4 element character vector from vec2 
	vector<int> vec4(6,3);     ////  vector of 6 element of 3s
	display(vec1);
	vec2.push_back('5');
	display(vec2);
	display(vec3);
	
	display(vec4);
	cout<<vec4.size();
	int ele;
/*	
	for(int i=0;i<4;i++)
	{
		cout<<"Enter the element:";
		cin>>ele;
		vect1.push_back(ele);
	}
	*/
 ///	vect1.pop_back();
 
 /*
 	display(vect1);
 	
 	vector<int> :: iterator iter=vect1.begin();
 	vect1.insert(iter+2, 10 ,566);    ////this method is used to insert the element in vector , first argument is iterator
    /// second argument says how much copies of that element should insert...third argument is actual element.... 	
 
	display(vect1);
	*/
	
	////at() method
	///swap() method 
	///front() method 
	return 0;
}
