#include <iostream>
using namespace std;
class CallOperator {
 public:
 CallOperator();
 int operator()( int, int );
 private:
 int chessBoard[ 8 ][ 8 ];
 };
 
 CallOperator::CallOperator()
 {
 for ( int loop = 0; loop < 8; ++loop )
 for ( int loop2 = 0; loop2 < 8; ++loop2 )
 chessBoard[ loop ][ loop2 ] = loop2;
 }

 int CallOperator::operator()( int r, int c ) { 
 return chessBoard[ r ][ c ]; 
 }

 int main()
 {
 CallOperator board;

 cout << "board[2][5] is " << board( 2, 5 ) << endl;

 return 0;
 }
