#include <iostream>
using namespace std;
int main() {
   int size;
   do {
      cout << "Enter Height in Odd Numbers(1-29): ";
      cin >> size;
   } while ( size < 1 || size > 29 || size % 2 == 0 );

   int asterik=size; 

   for ( int i=1; i <= size; i++ ) {
      
      for ( int j=1; j <= size; j++ ) {
      
         if ( j== 1 || i == 1 || j == size || i == size )
            cout << "#";
         else {
            
            for ( int i=1; i < ( size - asterik ) / 2; i++ )
               cout << " ";            
            for ( int i=1; i <= asterik; i++ )
               cout << "*";            
            for ( int i=1; i < ( size - asterik ) / 2; i++ )
               cout << " ";

            j = size - 1;
         }
      }

      i <= size / 2 ? asterik =asterik-2 : asterik =asterik+2;

      cout << "\n";
   }

   return 0;
}
