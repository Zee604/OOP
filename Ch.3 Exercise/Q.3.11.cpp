#include <iostream>
#include <string>
using namespace std;
class MotorVehicle {

public:

   MotorVehicle(string m,string ft,int y) {
      setMake( m );
      setFuelType( ft );
      setYearOfManufacture( y );
   }

   void setMake( string m ) {
      make = m;
   }

   void setFuelType( string ft ) {
      fuelType = ft;
   }

   void setYearOfManufacture( int y ) {
      yearOfManufacture = y;
   }

   void setColor( std::string c ) {
      color = c;
   }

   void setEngineCapacity( int ec ) {
      engineCapacity = ec;
   }

   string getMake() const {
      return make;
   }

   string getFuelType() const {
      return fuelType;
   }

   int getYearOfManufacture() const {
      return yearOfManufacture;
   }

   string getColor() const {
      return color;
   }

   int getEngineCapacity() const {
      return engineCapacity;
   }

   void displayCarDetails() const {
      cout << "CAR DETAILS"
         << "\nMake:                " << make
         << "\nFuel type:           " << fuelType
         << "\nYear of manufacture: " << yearOfManufacture
         << "\nColor:               " << color
         << "\nEngine capacity:     " << engineCapacity
         << endl;
   }

private:

   string make;
   string fuelType;
   int yearOfManufacture;
   string color;
   int engineCapacity;
};
main() {

   MotorVehicle motorVehicle( "Mercedes", "Diesel", 2010 );

   cout << "INITIAL ";
   motorVehicle.displayCarDetails();
   motorVehicle.setMake( "Mercedes-Benz" );
   motorVehicle.setFuelType( "Hybrid" );
   motorVehicle.setYearOfManufacture( 2015 );
   motorVehicle.setColor( "Green" );
   motorVehicle.setEngineCapacity( 1600 );

   cout << "\nMODIFIED ";
   motorVehicle.displayCarDetails();

   return 0;
}
