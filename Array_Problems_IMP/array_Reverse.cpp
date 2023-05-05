//Reverse the array

#include<iostream>
#include<vector>

using namespace std;

vector<int> reverse_array(vector<int>& arr, int n)
{
	int s=0, e=n-1;
	while(s<=e)
	{
		swap(arr[s], arr[e]);
		s++;
		e--;
		
	}
	
	return arr;
}
void print(vector<int>& arr)
{
	for(int i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int n;
	cin>>n;
	
	vector<int> arr;
	for(int i=0;i<n;i++)
	{
		int ele;
		cin>>ele;
		arr.push_back(ele);
	}	
	vector<int> ans=reverse_array(arr, n);
	print(arr);
	
	return 0;
}
