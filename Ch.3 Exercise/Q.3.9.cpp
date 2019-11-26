
#include <iostream>
#include <string>>
using namespace std;
class Account {

public:

   Account( std::string accountName, int initialBalance )
      : name{ accountName } {

      if ( initialBalance > 0 )
         balance = initialBalance;
   }

   void deposit( int depositAmount ) {
      if ( depositAmount > 0 )
         balance = balance + depositAmount;
   }

   void withdraw( int withdrawAmount ) {
      if ( withdrawAmount > balance )
         std::cout << "Withdrawal amount exceeded account balance.\n";
      if ( withdrawAmount <= balance )
         balance = balance - withdrawAmount;
   }

   int getBalance() const {
      return balance;
   }

   void setName( std::string accountName ) {
      name = accountName;
   }

   std::string getName() const {
      return name;
   }

private:

   std::string name;
   int balance{ 0 };
};
int main() {

   Account account1( "Zee1", 500 );
   Account account2( "Zee2", 100 );
   cout<<"\tWelcome to MCB "<<endl;
   cout << "Account 1 "<<endl<<"Name: " << account1.getName() <<endl<< "balance: "<< account1.getBalance();
   cout << "\n\nAccount 2 "<<endl<<"Name: " << account2.getName() <<endl<< "balance: "<< account2.getBalance();

   int withdrawAmount;

   cout << "\n\nEnter withdraw amount for account 1: ";
   cin >> withdrawAmount;

   account1.withdraw( withdrawAmount );

   cout << "Account 1 "<<endl<<"Name: " << account1.getName() <<endl<< "balance: "<< account1.getBalance();
   cout << "\n\nAccount 2 "<<endl<<"Name: " << account2.getName() <<endl<< "balance: "<< account2.getBalance();

   cout << "\n\nEnter withdraw amount for account2: ";
   cin >> withdrawAmount;
   
   account2.withdraw( withdrawAmount );

  cout << "Account 1 "<<endl<<"Name: " << account1.getName() <<endl<< "balance: "
      << account1.getBalance();
   cout << "\n\nAccount 2 "<<endl<<"Name: " << account2.getName() << endl<<"balance: "<< account2.getBalance();

   return 0;
}
