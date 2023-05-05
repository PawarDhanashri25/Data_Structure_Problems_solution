#include<iostream>
#include<ctime>
using namespace std;
////program to display current date and time 

int main()
{
	time_t timetoday;
	time(&timetoday);
	
	cout<<"Calender date and time as per todays is:"<<asctime(localtime(&timetoday));
	
	
	return 0; 
}
