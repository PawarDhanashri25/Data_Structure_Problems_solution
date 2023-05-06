///Rotate the array to k the position 
#include<iostream>
#include<vector>
using namespace std;


void rotate(vector<int>& arr, int k)
{
	vector<int> temp(arr.size());
	for(int i=0;i<arr.size();i++){
		temp[(i+k)%arr.size()]=arr[i]; ///this is the formula to shift the array element after the k position 
	}
	////copy the temp into arr vector
	arr=temp;
}

int main()
{
	
	int n;
	cin>>n;
	int k;
	cin>>k;
	vector<int> arr;
	for(int i=0;i<n;i++)
	{
		int ele;
		cin>>ele;
		arr.push_back(ele);
	}
	rotate(arr, k);
	
	cout<<"Array after rotatation:"<<endl;
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
