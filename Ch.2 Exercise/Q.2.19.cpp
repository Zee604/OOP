#include<iostream>
using namespace std;
int main (){
	int a,b,c;
	cout<<"\nEnter three different numbers: "<<endl;
	cin>>a>>b>>c;
	cout<<"Sum is="<<a+b+c<<endl;
	cout<<"Product is="<<a*b*c<<endl;
	cout<<"Average is="<<(a+b+c)/3<<endl;
	if(a<b && a<c){
		cout<<a<<" is smallest"<<endl;
	}else if(b<a && b<c){
		cout<<b<<" is smallest"<<endl;
	}else if(c<a && c<b){
		cout<<c<<" is smallest"<<endl;
	}
	if(a>b && a>c){
		cout<<a<<" is biggest"<<endl;
	}else if(b>a && b>c){
		cout<<b<<" is biggest"<<endl;
	}else if(c>a && c>b){
		cout<<c<<" is biggest"<<endl;
	}
}
