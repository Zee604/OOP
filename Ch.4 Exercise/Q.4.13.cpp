#include<iostream>
using namespace std;
int main(){
    int gallon;
    float mileage,MPG;
    float average=0;
    int count=0;
    
    while(mileage!=-1){
    	count++;
    	cout<<"Enter Distance in Miles(-1 to quite) :";
    	cin>>mileage;
    	cout<<"Enetr Total Gallons :";
    	cin>>gallon;
    	MPG=mileage/gallon;
    	average=MPG/count;
    	cout<<"Mileages per Gallon for this Trip :"<<MPG<<endl;
    	cout<<"Total mileages per Gallon :"<<average<<endl;
    	cout<<"Enter Distance in Miles(-1 to quite) :";
    	cin>>mileage;
	}
}
