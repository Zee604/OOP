#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=100;i++){
		if(i==50){
		    break;
//            continue;
		}else{
			cout<<i<<endl;
		}
	}
	
	for(int i=1;i<=100;i++){
		if(i==50){
		    break;
            
		}else{
			continue;
			cout<<i<<endl;
		}
	}
}
