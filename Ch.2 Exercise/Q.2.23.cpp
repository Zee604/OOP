#include<iostream>
using namespace std;
int  main(){
	int a,b,c,d,e;
	cout<<"Enter Five different Values:"<<endl;
	cin>>a>>b>>c>>d>>e;
	if(a<b && a<c && a<d && a<e){
		cout<<a<<" is smallest"<<endl;
	}else if(b<a && b<c && b<d && b<e){
		cout<<b<<" is smallest"<<endl;
	}else if(c<a && c<b && c<d && c<e){
		cout<<c<<" is smallest"<<endl;
	}else if(d<a && d<b && d<c && d<e){
		cout<<d<<" is smallest"<<endl;
	}else if(e<a && e<b && e<c && e<d){
		cout<<e<<" is smallest"<<endl;
	}
	
    if(a>b && a>c && a>d && a>e){
		cout<<a<<" is biggest"<<endl;
	}else if(b>a && b>c && b>d && b>e){
		cout<<b<<" is biggest"<<endl;
	}else if(c>a && c>b && c>d && c>e){
		cout<<c<<" is biggest"<<endl;
	}else if(d>a && d>b && d>c && d>e){
		cout<<d<<" is biggest"<<endl;
	}else if(e>a && e>b && e>c && e>d){
		cout<<e<<" is biggest"<<endl;
	}	
}
