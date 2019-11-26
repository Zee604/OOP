#include <iostream>
#include <string>
using namespace std;
class Invoice {

public:

   Invoice( string pn, string pd, int qnt, int prc ) :
      vat{ 0.2 },
      discount{ 0.0 } {
      setPartNumber( pn );
      setPartDescription( pd );
      setQuantity( qnt );
      setItemPrice( prc );
   }

   void setPartNumber( string pn ) {
      partNumber = pn;
   }

   void setPartDescription(string pd ) {
      partDescription = pd;
   }

   void setQuantity( int qnt ) {
      if ( qnt < 0 ) quantity = 0;
      if ( qnt >= 0 ) quantity = qnt;
   }

   void setItemPrice( int prc ) {
      if ( prc < 0 ) itemPrice = 0;
      if ( prc >= 0 ) itemPrice = prc;
   }

   void setVAT( double tax ) {
      if ( tax < 0 ) vat = 0.0;
      if ( tax >= 0 ) vat = tax;
   }

   void setDiscount( double dsc ) {
      if ( dsc < 0 ) discount = 0.0;
      if ( dsc >= 0 ) discount = dsc;
   }

   string getPartNumber() const {
      return partNumber;
   }

   string getPartDescription() const {
      return partDescription;
   }

   int getQuantity() const {
      return quantity;
   }

   int getItemPrice() const {
      return itemPrice;
   }

   double getVAT() const {
      return vat;
   }

   double getDiscount() const {
      return discount;
   }

   double getInvoiceAmount() const {
      return quantity * itemPrice * ( 1.0 - vat - discount );
   }

private:

   string partNumber;
   string partDescription;
   int quantity;
   int itemPrice;
   double vat;
   double discount;
};
 main() {

   Invoice invoice( "A-1", "Description", 100, -42 );

   cout << "INITIAL INVOICE"
      << "\nPart number:      " << invoice.getPartNumber()
      << "\nPart description: " << invoice.getPartDescription()
      << "\nQuantity:         " << invoice.getQuantity()
      << "\nItem price:       " << invoice.getItemPrice()
      << "\nVAT rate:         " << invoice.getVAT()
      << "\nDiscount rate:    " << invoice.getDiscount()
      << "\nInvoice amount:   " << invoice.getInvoiceAmount()
      << endl;

   invoice.setPartNumber( "A-1m" );
   invoice.setPartDescription( "Modified description" );
   invoice.setQuantity( 10 );
   invoice.setItemPrice( 42 );
   invoice.setVAT( 0.15 );
   invoice.setDiscount( 0.05 );

   cout << "\nMODIFIED INVOICE"
      << "\nPart number:      " << invoice.getPartNumber()
      << "\nPart description: " << invoice.getPartDescription()
      << "\nQuantity:         " << invoice.getQuantity()
      << "\nItem price:       " << invoice.getItemPrice()
      << "\nVAT rate:         " << invoice.getVAT()
      << "\nDiscount rate:    " << invoice.getDiscount()
      << "\nInvoice amount:   " << invoice.getInvoiceAmount()
      << endl;

   return 0;
}
