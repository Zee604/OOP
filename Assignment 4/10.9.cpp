#include <array>
#include <iostream>
#include <string>
using namespace std;
class HugeInteger {
 friend ostream& operator<<(ostream&, const HugeInteger&);
 public:
 static const int digits{40}; 

 HugeInteger(long = 0); 
 HugeInteger(const string&); 
 HugeInteger operator+(const HugeInteger&) const;
 HugeInteger operator+(int) const;

 HugeInteger operator+(const string&) const;
 private:
array<short, digits> integer{}; 
 };

 HugeInteger::HugeInteger(long value) {
 for (int j{digits - 1}; value != 0 && j >= 0; j--) {
 integer[j] = value % 10;
 value /= 10;
 }
 }

 HugeInteger::HugeInteger(const string& number) {
 int length{number.size()};
for (int j{digits - length}, k{0}; j < digits; ++j, ++k) {
 if (isdigit(number[k])) {
 integer[j] = number[k] - '0';
 }
 }
  }
HugeInteger HugeInteger::operator+(const HugeInteger& op2) const {
 HugeInteger temp; 
 int carry = 0;

 for (int i{digits - 1}; i >= 0; i--) {
 temp.integer[i] = integer[i] + op2.integer[i] + carry;

 if (temp.integer[i] > 9) {
 temp.integer[i] %= 10; 
 carry = 1;
 }
 else {
 carry = 0;
 }
 }

 return temp; 
 }

 HugeInteger HugeInteger::operator+(int op2) const {
 return *this + HugeInteger(op2);
 }
 HugeInteger HugeInteger::operator+(const string& op2) const {
 return *this + HugeInteger(op2);
 }

 ostream& operator<<(ostream& output, const HugeInteger& num) {
 int i;

 for (i = 0; (i < HugeInteger::digits) && (0 == num.integer[i]); ++i) { }

 if (i == HugeInteger::digits) {
 output << 0;
 }
 else {
 for (; i < HugeInteger::digits; ++i) {
 output << num.integer[i];
 }
 }

 return output;
 }
int main() {
 HugeInteger n1{7654321};
 HugeInteger n2{7891234};
 HugeInteger n3{"99999999999999999999999999999"};
 HugeInteger n4{"1"};
 HugeInteger n5;

 cout << "n1 is " << n1 << "\nn2 is " << n2
 << "\nn3 is " << n3 << "\nn4 is " << n4
 << "\nn5 is " << n5 << "\n\n";

 n5 = n1 + n2;
 cout << n1 << " + " << n2 << " = " << n5 << "\n\n";

 cout << n3 << " + " << n4 << "\n= " << (n3 + n4) << "\n\n";

 n5 = n1 + 9;
 cout << n1 << " + " << 9 << " = " << n5 << "\n\n";

 n5 = n2 + "10000";
 cout << n2 << " + " << "10000" << " = " << n5 << endl;
 }
