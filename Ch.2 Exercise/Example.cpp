#include<iostream>
using namespace std;
int main(){
	int feet,inch;
    cout<<"\nEnter Length in Feets and Inches:"<<endl<<;
    cin>>feet>>inch;
    int a=(feet*12)+inch;
    int feet1=a*2.54;
    cout<<"Length in Centimeters:"<<feet1;
    return 0;
}
