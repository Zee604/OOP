#include <iostream>
using namespace std;
int main() {
   int asterik=9;

   for ( int i=1; i<=9; i++ ) {

      for ( int j=1; j<=9; j++ ) {

         if ( j==1 || i==1 || j==9 || i==9 )
            cout << "#";
         else {

            for ( int j=1; j< ( 9 - asterik ) / 2; j++ )
               cout << " ";
            for ( int j=1; j<= asterik; j++ )
               cout << "*";
            for ( int j=1; j < ( 9 - asterik ) / 2; j++ )
               cout << ' ';

            j = 8;
         }
      }

      i < 5 ? asterik =asterik-2 : asterik =asterik+2;

      cout << endl;
   }

   return 0;
}
