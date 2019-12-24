#include <iostream>
using namespace std;
int main() {
   int number,smallest;   
   cout << "Number of values: ";
   cin >> number;
   cout << "\nValue: ";
   cin >> smallest; 
   while (--number){
      int value;
      cout << "Value: ";
      cin >> value;
      
      if ( value < smallest )
         smallest = value;
   }
   cout << "\nSmallest Value is " << smallest << endl;
}
