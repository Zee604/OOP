#include<iostream>
using namespace std;
int main(){
	int s1,s2,s3;
	cout<<"Enter First Side of a Right Trianle: ";
	cin>>s1;
	cout<<"Enter Second Side of a Right Trianle: ";
	cin>>s2;
	cout<<"Enter Third Side of a Right Trianle: ";
	cin>>s3;
	if((s1==s2+s3) || (s2==s1+s3) || (s3==s1+s2)){
		cout<<"Yes. These three sides represent a Right triangle.";
	}else{
			cout<<"No. These three sides could not represent a Right triangle.";
	}
}
