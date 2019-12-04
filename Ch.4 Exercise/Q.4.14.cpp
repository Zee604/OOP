#include<iostream>
using namespace std;
int main(){
	int acnmbr;
	float bblnce,tcharges,tcredits,climit,nblnce;
	while(acnmbr!=-1){
		cout<<"Enter the Account Number(-1 to quite) :";
		cin>>acnmbr;
		cout<<"Enter the Begining Balance :";
		cin>>bblnce;
		cout<<"Enter Total Charges :";
		cin>>tcharges;
		cout<<"Enter Total Credits :";
		cin>>tcredits;
		cout<<"Enter Credits Limit :";
		cin>>climit;
		nblnce= (bblnce+tcharges)-tcredits;
		cout<<"New Balance is :"<<nblnce<<endl;
		cout<<"Account Nu,ber is :"<<acnmbr<<endl;
		cout<<"Credit Limit :"<<climit<<endl;
		if(climit<nblnce){
			cout<<"Credit Limit Exceeded."<<endl;;
		}
		cout<<"Enter Account Number (-1 to quit): ";
	    cin>>acnmbr;
	}
	
	
	
}
