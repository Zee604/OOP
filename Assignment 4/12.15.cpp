#include <iostream>
#include <vector>
using namespace std;

class CarbonFootPrint
{
public:
    virtual double getCarbonFootPrint();
};


double CarbonFootPrint::getCarbonFootPrint()
{
    return 0;
}

class Building : CarbonFootPrint
{


public:
    Building(double e = 0, int m = 12);
    ~Building();
    double setElectric();
    virtual double getCarbonFootPrint();

private:
    double electric;
    int months;
};

Building::Building(double e, int m)
{
    electric = e;
    months = m;
}

Building::~Building()
{

}

double Building::setElectric()
{
    cout << "Enter your monthly electric in KWH: " << endl;
    cin >> electric;
    return electric;
}

double Building::getCarbonFootPrint()
{
    cout << "The carbon footprint for this house is " << endl;
  
    return(electric * months);
}


class Car : CarbonFootPrint
{
public:
    Car(double = 0, double = 0); 
    ~Car(); 
    double setYearlyMiles();
    double setAverageMPG();
    virtual double getCarbonFootPrint();

 private:
    double yearlyMiles, averageMPG;
    int co2 = 9;
 };


Car::Car(double ym, double mpg)
{
    yearlyMiles = ym;
    averageMPG = mpg;
}

Car::~Car()
{

}

double Car::setYearlyMiles()
{
    cout << "Enter in your yearly miles: " << endl;
    cin >> yearlyMiles;
 return yearlyMiles;
}

double Car::setAverageMPG()
{
    cout << "Enter in your average miles per gallon: " << endl;
    cin >> averageMPG;
    return averageMPG;
}

double Car::getCarbonFootPrint()
{

 
    cout << "The carbon footprint for this car is " << endl;

    return((yearlyMiles * averageMPG) * co2);
}

class Bicycle : CarbonFootPrint
{
public:
    Bicycle(double = 0, int = 34); 
    ~Bicycle(); 
    double setMiles(); 
    virtual double getCarbonFootPrint();

private:
    int calories;
    double miles;
};


Bicycle::Bicycle(double m, int c)
{
    miles = m;
    calories = c;
}

Bicycle::~Bicycle()
{

}

double Bicycle::setMiles()
{
    cout << "Enter in number of miles: " << endl; 
    cin >> miles;
    return miles;
}

double Bicycle::getCarbonFootPrint()
{

    cout << "The carbon footprint for this bicycle is " << endl;

    return (miles * calories);
}

int main()
{
    vector <CarbonFootPrint> *list;
    int answer, i;

    cout << "Welcome to the Carbon Footprint Calculator!\n" << endl;

    do
    {
        cout << "Main Menu\n" << endl;
        cout << "1: Set house info.\n" << endl;
        cout << "2: Set car info.\n" << endl;
        cout << "3: Set bicycle info.\n" << endl;
        cout << "4: Get carbon footprint for all items set.\n" << endl;
        cin >> answer;

        switch (answer)
        {
            case 1:
            {
                cout << "\n" << endl;
                Building *anotherBuilding;
                anotherBuilding = new Building;
                anotherBuilding->setElectric();
                cout << "\n" << endl;

                break;
            }

            case 2:
            {
                cout << "\n" << endl;
                Car *anotherCar;
                anotherCar = new Car;
                anotherCar->setYearlyMiles();
                anotherCar->setAverageMPG();
                cout << "\n" << endl;

                break;
            }

            case 3:
            {
                cout << "\n" << endl;
                Bicycle *anotherbike;
                anotherbike = new Bicycle;
                anotherbike->setMiles();
                cout << "\n" << endl;

                break;
            }

            case 4:
            {
                break;
            }

            default:
            {
                cout << answer << " is not a valid option" << endl;

                break;
            }
        }
    }
    while (answer != 4);

    system("pause");
    return 0;
}
