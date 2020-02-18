#include<iostream>
#include<string>
using namespace std;

class student{
   public:
	string std="University Students";
	

};
class undgrad:public student{
	public:
	string name="Undergradute";
	int rollno= 10;
	string section="5C"; 
	
};

class grad: public undgrad{
	public:
	string name="Gradute";
	int rollno= 20;
	string section="4C"; 
};

int main(){
	grad a;
	cout<<a.std;
	
}
