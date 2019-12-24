#include <iomanip>
#include <iostream>
using namespace std;
int main() {

   double total=0.0;

   int number=-1,quantity;;

   while ( number ) {

      cout << "Product number (1-5) [0 to exit/total sales]: ";
      cin >> number;

      if ( number < 1 || number > 5 )
         continue;

      do {
         cout << "Quantity sold: ";
         cin >> quantity;
      } while ( quantity < 0 );

      switch ( number ) {
      case 1:
         total =total+quantity * 2.98; break;
      case 2:
         total =total+quantity * 4.50; break;
      case 3:
         total =total+quantity * 9.98; break;
      case 4:
         total =total+quantity * 4.49; break;
      case 5:
         total =total+quantity * 6.87; break;
      }
      cout << endl;
   }

   cout << fixed << setprecision( 2 )<< "\nTotal retail value of all products sold is $" << total << endl;

   return 0;
}
