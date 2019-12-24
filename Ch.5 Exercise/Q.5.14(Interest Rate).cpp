#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
   double principal=1000.00;
   
   cout << "Year\t5%\t6%\t7%\t8%\t9%\t10%" << endl;
   cout << fixed << setprecision( 2 );

   for (int year=1; year <= 10; year++ ) {

      cout << setw( 4 ) << year;

      for ( int rate=5; rate <= 10; rate++ ) {
         double amount{ principal * pow( 1.0 + rate / 100.0, year ) };
         cout << "\t" << amount;
      }

      cout << endl;
   }

   return 0;
}
