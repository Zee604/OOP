#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"\n\tEnter First Digit: ";
	cin>>a;
	cout<<"Entyer Second Digit: ";
	cin>>b;
	if(a%b==0){
		cout<<"Both digits are multiple of each other"<<endl;
	}else if(a%b!=0){
		cout<<"Both digits are not multiple of each other"<<endl;
	}
	
}
