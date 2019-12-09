#include<iostream>
using namespace std;
int main(){
	int a=1,b;
	int fmax=0,smax=0;
    while(a<=10){
    		cout<<"Enter Ten Numbers: ";
        	cin>>b;	
			
		if(fmax<b){
			smax=fmax;
			fmax=b;
		}else if(smax<b){
			smax=b;
		}
        a++;
    }
        cout<<"First Maximum Number is: "<<fmax<<endl;
         cout<<"Second Maximum Number is: "<<smax<<endl;
}

