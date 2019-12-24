#include<iostream>
using namespace std;
int main(){
	int num,fact=1;
	cout<<"Enter Number to Find Factorial: ";
	cin>>num;
	for(int i=1;i<=num;i++){
		fact=fact*i;
	}
	cout<<"Factorial of "<<num<<" is "<<fact<<endl;
}
