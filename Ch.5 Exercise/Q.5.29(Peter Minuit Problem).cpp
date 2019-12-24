#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main() {

   double amount,principal=24.0,rate;
   do {
      cout << "Rate (%, 5 to 10): ";
      cin >> rate;
   } while ( rate < 5 || rate > 10 );

   cout << "\nYear" << setw( 25 ) << "Amount on deposit\n\n";
   cout << fixed << setprecision( 2 );

   for ( int year{ 1626 }; year <= 2019; year++ ) {
      amount = principal * pow( 1.0 + rate / 100, year - 1625 );
      cout << setw( 4 ) << year << setw( 23 ) << amount << endl;
   }

   return 0;
}
