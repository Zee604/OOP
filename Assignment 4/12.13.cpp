#include <iostream>
using namespace std;
class Account
{
public:
	Account( double ); 
	void setBalance( double );
	double getBalance(); 
private:
	double balance; 
}; 

Account::Account( double initialBalance )
{

	if ( initialBalance >= 0.0 )
		balance = initialBalance;
	else 
	{
		cout << "Error: Initial balance cannot be negative." << endl;
		balance = 0.0;
	} 
} 

void Account::credit( double amount )
{
	balance = balance + amount; 
} 

bool Account::debit( double amount )
{
	if ( amount > balance ) 
	{
		cout << "Debit amount exceeded account balance." << endl;
		return false;
	} 
	else 
	{
		balance = balance - amount;
		return true;
	} 
} 

void Account::setBalance( double newBalance )
{
	balance = newBalance;
} 

double Account::getBalance()
{
	return balance;
} 

class SavingsAccount : public Account
{
public:

	SavingsAccount( double, double );
	double calculateInterest(); 
private:
	double interestRate; 
}; 


SavingsAccount::SavingsAccount( double initialBalance, double rate )
: Account( initialBalance ) 
{
	interestRate = ( rate < 0.0 ) ? 0.0 : rate; 
} 
double SavingsAccount::calculateInterest()
{
	return getBalance() * interestRate;
} 


class CheckingAccount : public Account
{
public:

	CheckingAccount( double, double );

private:
	double transactionFee; 
	void chargeFee();
};
CheckingAccount::CheckingAccount( double initialBalance, double fee )
: Account( initialBalance ) s
{
	transactionFee = ( fee < 0.0 ) ? 0.0 : fee; 
} 
void CheckingAccount::credit( double amount )
{
	Account::credit( amount ); 
	chargeFee();
} 

bool CheckingAccount::debit( double amount )
{
	bool success = Account::debit( amount ); 
	if ( success ) 
	{
		chargeFee();
		return true;
	} 
	else 
		return false;
} 

void CheckingAccount::chargeFee()
{
	Account::setBalance( getBalance() - transactionFee );
	cout << "$" << transactionFee << " transaction fee charged." << endl;
} 
int main()
{
	accounts[ 0 ] = new SavingsAccount( 25.0, .03 );
	accounts[ 1 ] = new CheckingAccount( 80.0, 1.0 );
	accounts[ 2 ] = new SavingsAccount( 200.0, .015 );
	accounts[ 3 ] = new CheckingAccount( 400.0, .5 );

	cout << fixed << setprecision( 2 );

	
	for ( size_t i = 0; i < accounts.size(); i++ )
	{
		cout << "Account " << i + 1 << " balance: $" << ;
		double withdrawalAmount = 0.0;
		cout << "\nEnter an amount to withdraw from Account " << i + 1 << ": ";
		cin >> withdrawalAmount;
	
		double depositAmount = 0.0;
		cout << "Enter an amount to deposit into Account " << i + 1 << ": ";
		cin >> depositAmount;
		SavingsAccount *savingsAccountPtr =
			cout << "Updated Account " << i + 1 << " balance: $" << /* Call the getBalance function through Account pointer i */ << "\n\n";
	} 
} 
