#include<iostream>
#include<ctime>
using namespace std;
int main(){
	srand(time(0));
	for(int a=1; a<=10; a++){
		cout<<rand()<<endl;
	}
}
