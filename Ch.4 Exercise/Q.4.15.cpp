#include<iostream>
using namespace std;
int main(){
	float sales,salary;
	
	while(sales!=-1){
		cout<<"Enter the Sales in Rs.(-1 to end) :";
		cin>>sales;
		salary=(sales/100*9)+200;
		cout<<"Your Salary is :"<<salary<<endl;
		cout<<"Enter the Sales in Rs.(-1 to end) :";
		cin>>sales;
	}
}
