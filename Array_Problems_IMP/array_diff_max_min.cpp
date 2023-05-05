
#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
class solution{
	
	public: 
	int max=-1, second_max=-1;
	//int min_ele;
	int array_fun(vector<int> &v, int n)
{
	
	for(int i=0;i<v.size();i++){
        if(v[i]>max){
            second_max=max;
            max=v[i];          
        }
    
 }
 	return second_max-(*min_element(v.begin(), v.end()));
 }

	
};
int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	//cout << "Input number is " << num << endl;	
	vector<int> v;
	int ele;
	for(int i=0;i<num;i++)
	{
		cin>>ele;
		v.push_back(ele);
	}
	solution s;
	
	int a=s.array_fun(v, num);
	cout<<a<<endl;	
}



// Write your code here

