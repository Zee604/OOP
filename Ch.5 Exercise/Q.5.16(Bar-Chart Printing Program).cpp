#include<iostream>
using namespace std;
int main(){
	int number;
   cout << "Enter Five Numbers between 1 and 9: ";
   for(int n=1; n <= 5; n++ ){
      cin >> number;
      if ( number < 1 || 9 < number ) {
         cout << "\nNumber " << number << " is out of range!\n";
         continue;
      }
      cout << endl;
     for ( int i=1; i <= 2; i++ ) {
         for ( int j=1; j<= number; j++ )
           cout << number;
        cout << endl;
    }
   }

}
