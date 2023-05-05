#include<iostream>
using namespace std;
////Member template function  and overloading template function 

template <class  T>

class abc{
	
	public:
		
		T data;
		abc(T a){
			data=a;	
		}
		void display();
};
template <class  T>
void abc<T> :: display()     ////definning the function outside the class using scope resolution(::) operator
{
	cout<<data<<endl;
}

void func(int a)
{
	cout<<"i am first func: "<<a<<endl;
}
template <class T>
void func(T a)
{
	cout<<"I am templatized function:"<<a<<endl;
}

int main(){
	
	abc<float> a(4.5);
	abc<char> b ('a');
	a.display();
	b.display();
	
	func(4);   ///Exact match is there then highest priority function is called
	
	func('d');   ////hwere data type is changed i.e. char so templatize function is called 
	return 0;
}
