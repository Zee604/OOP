#include <iostream>
#include <string>
using namespace std;
class HealthProfile {

public:

   HealthProfile( string fn, string ln, string g,
      int bd, int bm, int by, double h, double w ) {
      setFirstName( fn );
      setLastName( ln );
      setGender( g );
      setBirthDay( bd );
      setBirthMonth( bm );
      setBirthYear( by );
      setHeight( h );
      setWeight( w );
   }

   void setFirstName( string fn ) {
      firstName = fn;
   }

   void setLastName( string ln ) {
      lastName = ln;
   }

   void setGender( string g ) {
      gender = g;
   }

   void setBirthDay( int bd ) {
      birthDay = bd;
   }

   void setBirthMonth( int bm ) {
      birthMonth = bm;
   }

   void setBirthYear( int by ) {
      birthYear = by;
   }

   void setHeight( double h ) {
      height = h;
   }

   void setWeight( double w ) {
      weight = w;
   }

   string getFirstName() const {
      return firstName;
   }

   string getLastName() const {
      return lastName;
   }

   string getGender() const {
      return gender;
   }

   int getBirthDay() const {
      return birthDay;
   }

   int getBirthMonth() const {
      return birthMonth;
   }

   int getBirthYear() const {
      return birthYear;
   }

   double getHeight() const {
      return height;
   }

   double getWeight() const {
      return weight;
   }

   int calculateAge( int cd, int cm, int cy ) {

      int age{ cy - birthYear };

      if ( cm < birthMonth )
         age = age - 1;

      if ( cm == birthMonth )
         if ( cd < birthDay )
            age = age - 1;

      return age;
   }

   int calculateMaximumHeartRate( int cd, int cm, int cy ) {
      return 220 - calculateAge( cd, cm, cy );
   }

   void displayTargetHeartRate( int cd, int cm, int cy ) {
      cout << calculateMaximumHeartRate( cd, cm, cy ) * 0.5 << " - "
         << calculateMaximumHeartRate( cd, cm, cy ) * 0.85;
   }

   double calculateBMI( double w, double h ) {
      return w * 703 / ( h * h );
   }

private:

   string firstName;
   string lastName;
   string gender;
   int birthDay;
   int birthMonth;
   int birthYear;
   double height;
   double weight;
};
main() {

   int cDay, cMonth, cYear;
   int bDay, bMonth, bYear;

   string fName, lName, gender;

   double height, weight;

   cout << "Current date (dd mm yyyy): ";
   cin >> cDay >> cMonth >> cYear;

   cout << "\nPerson's Name (First Last): ";
   cin >> fName >> lName;

   cout << "Gender (Male/Female): ";
   cin >> gender;

   cout << "Date of birth (dd mm yyyy): ";
   cin >> bDay >> bMonth >> bYear;

   cout << "Height, in inches: ";
   cin >> height;

   cout << "Weight, in pounds: ";
   cin >> weight;

   HealthProfile healthProfile( fName, lName, gender, bDay, bMonth, bYear,
      height, weight );

   cout << "\nName: "
      << healthProfile.getFirstName() << ' '
      << healthProfile.getLastName()
      << "\nGender: "
      << healthProfile.getGender()
      << "\nBirth date: "
      << healthProfile.getBirthDay() << '.'
      << healthProfile.getBirthMonth() << '.'
      << healthProfile.getBirthYear()
      << "\nAge: "
      << healthProfile.calculateAge( cDay, cMonth, cYear )
      << " years\nHeight: "
      << healthProfile.getHeight()
      << " inches\nWeight: "
      << healthProfile.getWeight()
      << " pounds\nMaximum heart rate: "
      << healthProfile.calculateMaximumHeartRate( cDay, cMonth, cYear )
      << " bpm\nTarget-heart-rate: ";
   healthProfile.displayTargetHeartRate( cDay, cMonth, cYear );
   cout << " bpm\nBody Mass Index: "
      << healthProfile.calculateBMI( weight, height ) << endl;

   cout << "\nBMI VALUES"
        << "\nUnderweight: less than 18.5"
        << "\nNormal:      between 18.5 and 24.9"
        << "\nOverweight:  between 25 and 29.9"
        << "\nObese:       30 or greater" << endl;

   return 0;
}
