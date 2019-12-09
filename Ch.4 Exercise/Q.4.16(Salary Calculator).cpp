#include<iostream>
using namespace std;
 int main(){
 	int hours,rate,salary;
	 while(hours!=-1){
	 	cout<<"Enter Worked Hours(-1 to exit): ";
	 	cin>>hours;
	 	cout<<"Enter Hourly rate of the Employee: ";
	 	cin>>rate;
	 	salary=hours*rate;
	 	cout<<"Salary is: "<<salary<<endl;
	 } 
 }
