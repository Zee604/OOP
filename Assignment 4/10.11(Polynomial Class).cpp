#include<iostream>
#include<conio.h>
#include<string.h>
#include<math.h>
#define SIZE 10
using namespace std;
class polynomial{ 
private:
int co[SIZE] ;
public:
     polynomial(){
           for (int i=0 ; i<SIZE ; i++)
                co[i]=0;
     }
     void getvalues (){
           for(int i=4 ; i>=0 ; i--){   
                cout << "Enter value of cofficient x^" <<  i  << ": " ;
                cin  >>  co [i] ;    
           }
     }
     polynomial  operator + (polynomial);
     polynomial  operator - (polynomial);
     polynomial  operator * (polynomial);
     polynomial  operator +=(polynomial);
     polynomial  operator -=(polynomial);
     polynomial  operator *=(polynomial);
     bool  operator ==(polynomial);
     void print(int i = 4){
          for  ( ; i >= 0 ; i-- ){  
                if         ( i == 0 && co[i] > 0 ) { cout << " +"; cout  << co[i] ;}

                else if ( i == 0 && co[i] < 0 ) { cout << " "; cout   << co[i] ;}

                else if    ( co[i] > 0) { cout << " +"; cout  << co[i] << "x^" << i ;}

                else if ( co[i] < 0) { cout << " "; cout  << co[i] << "x^" << i ;}
           }
           cout  << endl;
     }
};
polynomial polynomial :: operator + (polynomial P2) {
     polynomial  P3;
     for ( int i = 0  ; i <= 4 ; i++ ){
          P3.co [i]  =  co [i] +  P2.co [i] ;    
     }
     return P3;     
}
polynomial polynomial :: operator - (polynomial P2) {
     polynomial  P3;
     for ( int i = 0  ; i <= 4 ; i++ ){
         P3.co [i]  =  co [i] -  P2.co [i] ;    
     }
     return P3;

}


polynomial polynomial :: operator *(polynomial P2){

     polynomial  P3;

     for( int i = 0  ; i <= 4 ; i++ ){

           for( int j = 0  ; j <= 4 ; j++ ){

                P3.co [i+j]  +=  co [i] *  P2.co [j] ;    

           }

     }

     return P3;     

}

 

bool polynomial :: operator ==(polynomial P2 ) {

     for (int i=0 ; i<=4 ; i++){

           if(co[i] != P2.co[i])

                return false;

     }
     return true;
}

polynomial polynomial :: operator +=(polynomial P2 ) {

     polynomial  P3;

     for  ( int i = 0  ; i <= 4 ; i++ ){

           P3.co [i]  =  co [i] +  P2.co [i] ;

           co[i] = P3.co [i];

     }

     return P3;     

}

polynomial polynomial :: operator -=(polynomial P2 ) {

     polynomial  P3;

     for  ( int i = 0  ; i <= 4 ; i++ ){

           P3.co [i]  =  co [i] -  P2.co [i] ;

           co[i] = P3.co [i];

 }
     return P3;
}

polynomial polynomial :: operator *=(polynomial P2 ) {

     polynomial  P3;

     for( int i = 0  ; i <= 4 ; i++ ){

           for( int j = 0  ; j <= 4 ; j++ ){

                P3.co [i+j]  +=  co [i] *  P2.co [j] ;    

           }
     }

   for( int i = 0  ; i <SIZE ; i++ )
           co[i]=P3.co[i];
     return P3;
}
int main(){
     polynomial P1, P2, P3;
     P1.getvalues();
     P2.getvalues();
     P1.print();     
	 P2.print();

     if(P1==P2)

           cout <<"These two Polynomials are same \n";
           
     P3 = P1 + P2;
     cout <<"Addition of two Polynomial is \n";      P3.print ();

     P3 = P1 - P2;
     cout <<"Subtraction of two polynomial is \n";   P3.print ();
     P3= P1 * P2;
     cout <<endl << "Multiplication of two polynomial is \n";   P3.print (9);
     system ("PAUSE");

     return 0;    

}
