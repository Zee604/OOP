#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter First Number:";
	cin>>a;
	cout<<"Enter Second Number:";
	cin>>b;
	if(a==b){
		cout<<"Numbers are  Equal";
	}else if (a!=b){
		cout<<"Numbers are Not Equal\n";
	}
	 if(a<b){
		cout<<a<<"is Smaller\n";
	}else if(b<a) {
		cout<<b<<" is Smaller";
	}
}
