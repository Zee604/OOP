#include<iostream>
using namespace std;
int main(){
	int s1,s2,s3;
	cout<<"Enter First Side of a trianle: ";
	cin>>s1;
	cout<<"Enter Second Side of a trianle: ";
	cin>>s2;
	cout<<"Enter Third Side of a trianle: ";
	cin>>s3;
	if((s1 < s2 + s3) && (s2 < s1 + s3) && (s3 < s1 + s2)){
		cout<<"Yes. These three sides represent a triangle.";
	}else{
			cout<<"No. These three sides could not represent a triangle.";
	}
}
