#include<iostream>

using namespace std;

////Template with default parameter


template <class T1=int, class T2=float>
class abc{
	
	public:
		T1 a;
		T2 b;
		
		abc(T1 x, T2 y)
		{
			a=x;
			b=y;
			
		}
		
		void display()
		{
			cout<<a<<endl<<b<<endl;
		}
};

int main()
{
	abc<>ob1(4,6.4);
	ob1.display();
	abc<char, int> ob2('d', 4);
	ob2.display();
	return 0;
}
