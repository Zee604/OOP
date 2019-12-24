#include <iostream>
using namespace std;
int main() {

   int x=1,y=2,a=3,b=4;
      if ( !( x <= 6 && y % 2 == 1 ) == ( !( x <= 6 ) || !( y % 2 == 1 ) ) )
      cout << true;
	  if ( !( a < 4 || b >= 6 ) == ( !( a < 4 ) && !( b >= 6 ) ) )
      cout << true;
	  if ( ( !( x < 3 ) && !( y >= 2 ) ) == !( x < 3 || y >= 2 ) )
      cout << true;
	  if ( ( !( a == b ) || !( b != 2 ) ) == !( a == b && b != 2 ) )
      cout << true;

   cout << endl;
   return 0;
}
