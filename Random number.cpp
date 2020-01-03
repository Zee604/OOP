#include<iostream>
#include<ctime>
#include<windows.h>
using namespace std;
int main(){
	for(int i=1;i<=10;i++){
	srand(time(0));
	cout<<2+rand()%6<<endl;
	Sleep(1000);	
	}
	
}
