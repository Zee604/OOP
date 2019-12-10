#include <iostream>
using namespace std;
int main(){
   int row=1;
   while ( row++ <= 8 ) {
      if ( row % 2 == 0 ){
        cout << ' ';	
	  }
      int column=1;    
      while (column++ <= 8 )
         cout << "* ";
         cout << endl;
   }
}
