//merge sorted array
//merge the two sorted array to make the one single sorted array
#include<iostream>
#include<vector>

using namespace std;
/*void merge(vector<int>& arr1, vector<int>& arr2, int m, int n)
{
	int i=0, j=0;
	int k=0;
	while(i<n && j<m)
	{
		if(arr1[i]<arr2[j)
		{
			arr3[k]=arr1[i];
			k++;
			i++;
		}
		else{
			arr3[k]=arr2[j];
			k++;
			j++;
		}
		
	}
	//copy the fisrt array k elements;
	while(i<n)
	{
		arr3[k]=arr[i];
		k++;
		i++;
	}
	
	//copy the second array k remaining  element 
	while(j<m)
	{
		arr3[k]=arr2[j];
		k++;
		j++;
	}
	
}*/
void merge2(vector<int> arr1, vector<int> arr2, int m, int n)
{
	int i=0, j=0;
	int k=m+n;
	int a=0;
	while(a<k)
	{
		
		while(i<m && j<n)
		{
			if(arr1[i]<arr2[j])
			{
				arr1[a]=arr1[i];
				a++;
				i++;
			}
			else{
				arr1[a]=arr2[j];
				a++;
				j++;
			}
			
		}
		while(i<m)
		{
			arr1[a]=arr1[i];
			a++;
			i++;
		}
		if(j<n)
		{
			arr1[a]=arr2[j];
			a++;
			j++;
			
		}
		
	
	}
	
	
}
/*void print(arr3, n)
{
	
}*/

int main()
{
	int m,n;
	cin>>m>>n;
	vector<int> arr1;
	vector<int> arr2;
	cout<<"First array:"<<endl;
	for(int i=0;i<m;i++)
	{
		int ele;
		cin>>ele;
		arr1.push_back(ele);
	}
	cout<<"Second array:"<<endl;
	for(int i=0;i<n;i++)
	{
		int ele;
		cin>>ele;
		arr2.push_back(ele);
	}
	
	merge2(arr1, arr2, m, n);
	
	cout<<"Array after merging:"<<endl;
	for(int i=0;i<m+n;i++)
	{
		cout<<arr1[i]<<" ";
	}
	
}

