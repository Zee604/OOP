#include <string>
#include<iostream>
#include <iomanip>
#include <stdexcept>
#include <sstream>

class Employee {
 public:
 Employee(const std::string&, const std::string&, const std::string &);
 virtual ~Employee() = default; 
 void setFirstName(const std::string&); 
 std::string getFirstName() const;
 void setLastName(const std::string&);
 std::string getLastName() const; 
 void setSocialSecurityNumber(const std::string&); 
 std::string getSocialSecurityNumber() const; 
 private:
 std::string firstName;
 std::string lastName;
 std::string socialSecurityNumber;
 Employee::Employee(const string & first, const string& last,
const string& ssn): firstName(first), lastName(last), socialSecurityNumber(ssn) {}

 void Employee::setFirstName(const string& first) {firstName = first;}

 string Employee::getFirstName() const {return firstName;}

 void Employee::setLastName(const string& last) {lastName = last;}

 string Employee::getLastName() const {return lastName;}

 void Employee::setSocialSecurityNumber(const string& ssn) {
 socialSecurityNumber = ssn; 
 }

 string Employee::getSocialSecurityNumber() const {
 return socialSecurityNumber;
 }

 string Employee::toString() const {
 return getFirstName() + " "s + getLastName() +"\nsocial security number: "s + getSocialSecurityNumber();
}
 
};

class SalariedEmployee {
public:
 SalariedEmployee(const std::string&, const std::string&,
 const std::string&, double = 0.0);


 void setWeeklySalary(double); 
 double getWeeklySalary() const; 

 private:
 	double weeklySalary;
 	double wage;
SalariedEmployee::SalariedEmployee(const string& first,
 const string& last, const string& ssn, double salary)
 : {
 setWeeklySalary(salary);
  if (wage < 0.0) 
         throw new IllegalArgumentException(
            "Hourly wage must be >= 0.0");

      if ((hours < 0.0) || (hours > 168.0)) 
         throw new IllegalArgumentException(
            "Hours worked must be >= 0.0 and <= 168.0");

      this.wage = wage;
      this.hours = hours;
   } 
   
void setWage(double wage)
   {
      if (wage < 0.0)
         throw new IllegalArgumentException(
            "Hourly wage must be >= 0.0");
 
      this.wage = wage;
   } 
 

   public double getWage()
   {
      return wage;
   } 
 }


 void SalariedEmployee::setWeeklySalary(double salary) {
 if (salary < 0.0) {
 throw invalid_argument("Weekly salary must be >= 0.0");
 }

 weeklySalary = salary;
 }

 double SalariedEmployee::getWeeklySalary() const {return weeklySalary;}

 double SalariedEmployee::earnings() const {return getWeeklySalary();}

 string SalariedEmployee::toString() const {
 ostringstream output;
 output << fixed << setprecision(2);
 output << "salaried employee: "
 <<Employee::toString() 
 << "\nweekly salary: " << getWeeklySalary();
 return output.str();
 }
 };
 
 class CommissionEmployee {
 public:
 CommissionEmployee(const std::string&, const std::string&,
 const std::string&, double = 0.0, double = 0.0);
 virtual ~CommissionEmployee() = default; 

 void setCommissionRate(double); 
 double getCommissionRate() const; 

 void setGrossSales(double);
 double getGrossSales() const; 


  virtual double earnings() const override; 
    virtual std::string toString() const override;

 private:
 double grossSales; 
 double commissionRate; 
 
 CommissionEmployee::CommissionEmployee(const string &first,
 const string &last, const string &ssn, double sales, double rate)
 : Employee(first, last, ssn){
 setGrossSales(sales);
 setCommissionRate(rate);
 }
 void CommissionEmployee::setGrossSales(double sales) {
 if (sales < 0.0) {
 throw invalid_argument("Gross sales must be >= 0.0");
 }
 grossSales = sales;
 }
 double CommissionEmployee::getGrossSales() const {return grossSales;}
void CommissionEmployee::setCommissionRate(double rate) {
 if (rate <= 0.0 || rate > 1.0) {
 throw invalid_argument("Commission rate must be > 0.0 and < 1.0");
 }

 commissionRate = rate;
 }

 double CommissionEmployee::getCommissionRate() const {
 return commissionRate;
 }
 double CommissionEmployee::earnings() const {
 return getCommissionRate() * getGrossSales();
 }
 string CommissionEmployee::toString() const { ostringstream output;
 output << fixed << setprecision(2);
 output << "commission employee: " <<
<< "\ngross sales: " << getGrossSales()
 << "; commission rate: " << getCommissionRate();
 return output.str();
  }
 };
 
 int main() {
 cout << fixed << setprecision(2); 

 SalariedEmployee salariedEmployee{
 "John", "Smith", "111-11-1111", 800};
 CommissionEmployee commissionEmployee{
 "Sue", "Jones", "333-33-3333", 10000, .06};
 BasePlusCommissionEmployee basePlusCommissionEmployee{
 "Bob", "Lewis", "444-44-4444", 5000, .04, 300};

 cout << "EMPLOYEES PROCESSED INDIVIDUALLY USING STATIC BINDING\n"
<<salariedEmployee.toString()
<< "\nearned $" <<salariedEmployee.earnings() <<basePlusCommissionEmployee.earnings()
 
<< "\nearned $" << commissionEmployee.toString()
<< "\n\n"
<<commissionEmployee.earnings()
<< "\nearned $" << basePlusCommissionEmployee.toString()<< "\n\n";


vector<Employee *> employees{&salariedEmployee, &commissionEmployee,&basePlusCommissionEmployee};
 cout << "EMPLOYEES PROCESSED POLYMORPHICALLY VIA DYNAMIC BINDING\n\n";

cout << "VIRTUAL FUNCTION CALLS MADE OFF BASE-CLASS POINTERS\n";

 for (const Employee* employeePtr : employees) {
  virtualViaPointer(employeePtr);
 }
cout << "VIRTUAL FUNCTION CALLS MADE OFF BASE-CLASS REFERENCES\n";
 for (const Employee* employeePtr : employees) {
 virtualViaReference(*employeePtr);
 }
 }

 void virtualViaPointer(const Employee* const baseClassPtr) {
 cout <<baseClassPtr->toString()

 << "\nearned $" <<baseClassPtr->earnings() << "\n\n";
 }

 void virtualViaReference(const Employee& baseClassRef) {
 cout <<baseClassRef.toString()
 << "\nearned $" << baseClassRef.earnings()<< "\n\n";
 }


