#include <iostream>
using namespace std;
int main() {
   int a=4, b = 3, c = 2, d = 1;

   // a
   cout << ( a == 1 ) << endl; 
   // b
   cout << ( b == 3 ) << endl; 
   // c
   cout << ( d >= 1 && c < 4 ) << endl; 
   // d
   cout << ( d <= 4 && b < d ) << endl; 
   // e
   cout << ( b >= d || c == a ) << endl; 
   // f
   cout << ( c + d < b || b >= a ) << endl; 
   // g
   cout << ( !d ) << endl; 
   // h
   cout << ( !( a - b ) ) << endl; 
   // i
   cout << ( !( c < d ) ) << endl;

   return 0;
}
