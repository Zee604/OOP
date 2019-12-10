#include<iostream>
using namespace std;
int main(){
	int nmbr,fst,scnd,thrd,frth,remainder,original;
	cout<<"Enter 4 Digits: ";
	cin>>nmbr;
	original=nmbr;
	remainder=nmbr%10;
	nmbr=nmbr/10;
	frth=remainder;
	// modules tells about last digit
	remainder=nmbr%10;
	nmbr=nmbr/10;
	thrd=remainder;
	
	remainder=nmbr%10;
	nmbr=nmbr/10;
	scnd=remainder;
	
	remainder=nmbr%10;
	nmbr=nmbr/10;
	fst=remainder;
	
	fst=(fst+7)%10;
	scnd=(scnd+7)%10;
	thrd=(thrd+7)%10;
	frth=(frth+7)%10;
	cout<<"The Original Text is: "<<original<<endl;
	cout<<"The Encrypted Text is: "<<thrd<<frth<<fst<<scnd;
}
