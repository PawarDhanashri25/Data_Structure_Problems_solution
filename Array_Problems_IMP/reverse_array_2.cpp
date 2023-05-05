///Given an array and position . you have to reverse the frray after that position

#include<iostream>
#include<vector>

using namespace std;
vector<int> reverse_array(vector<int>& arr, int pos)
{
	int s=pos+1, e=arr.size()-1;
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
	int p;
	cin>>p;
	vector<int> arr;
	for(int i=0;i<n;i++)
	{
		int ele;
		cin>>ele;
		arr.push_back(ele);
	}	
	
	vector<int> ans=reverse_array(arr, p);
	print(arr);
	
	return 0;
	
}
