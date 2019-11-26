#include <iostream>
using namespace std;
class ElectricBill {

public:

   ElectricBill( double ap ) {
      setAmountPaid( ap );
   }

   void setAmountPaid( double ap ) {
      amountPaid = ap;
      if ( ap < 0 )
         amountPaid = 0;
   }

   double getAmountPaid() const {
      return amountPaid;
   }

   double getVAT() const {
      return amountPaid * 0.18;
   }

   double getEWURA() const {
      return amountPaid * 0.01;
   }

   double getREA() const {
      return amountPaid * 0.03;
   }

   double getUnits() const {
      return ( amountPaid - getVAT() - getREA() - getEWURA() - 5000 ) / 295;
   }

private:

   double amountPaid;
};
int main() {

   double amount;

   cout << "Amount (Tanzanian Shillings): ";
   cin >> amount;

   ElectricBill electricBill( amount );

   cout << "\nAmount paid:    " << electricBill.getAmountPaid() << " TZS"
        << "\nUnits provided: " << electricBill.getUnits() << " kWh"
        << "\nVAT (18%):      " << electricBill.getVAT() << " TZS"
        << "\nREA (3%):       " << electricBill.getREA() << " TZS"
        << "\nEWURA (1%):     " << electricBill.getEWURA() << " TZS"
        << "\nFixed charge:   5000 TZS" << endl;

   return 0;
}
