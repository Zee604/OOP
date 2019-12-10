#include<iostream>
using namespace std;
int main() {
   int binary,decimal=0,value=1;
   cout << "Binary number: ";
   cin >> binary;
   while ( binary ) {
      decimal=decimal+binary % 10 * value;
      value=value*2;
      binary=binary/10;
   }

   cout << "Decimal equivalent is " << decimal << endl;

   return 0;
}
