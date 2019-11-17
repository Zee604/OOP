#include<iostream>
using namespace std;
int  main(){
	int a,b,sum;
	cout<<"Enter Two Numbers"<<endl;
	cin>>a>>b;
	if(a%2==0){
		cout<<a<<" is even number"<<endl;
	}else{
		cout<<a<<"is odd number"<<endl;
	}
	if(b%2==0){
		cout<<b<<" is even number"<<endl;
	}else{
		cout<<b<<" is odd number"<<endl;
	}
	
sum=a+b;
if(sum%2==0){
	cout<<"Sum("<<sum<<") is even"<<endl;
}else{
	cout<<"Sum("<<sum<<") is odd"<<endl;
}
}
