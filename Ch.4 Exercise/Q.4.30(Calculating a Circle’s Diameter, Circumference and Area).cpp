#include<iostream>
using namespace std;
int main(){
	double radius,pi = 3.14159,circumference,diameter,area;
	cout<<"Enter radius of a circle: ";
	cin>>radius;
	diameter=radius*2;
	circumference=2*pi*radius;
	area=pi*radius*radius;
	cout<<"Diameter of a circle is: "<<diameter<<endl;
	cout<<"Circumference of a circle is: "<<circumference<<endl;
	cout<<"Area of a circle is: "<<area<<endl;
}
