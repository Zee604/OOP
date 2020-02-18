#include "(10.6).h"
#include <iostream>
#include <stdexcept>
#include <ctime>
using namespace std;

// use system date
Date::Date(){
    time_t now = time(nullptr);
    struct tm* localTime = localtime(&now);
    setMonth(localTime->tm_mon + 1);
    setDay(localTime->tm_mday);
    setYear(1900 + localTime->tm_year);
    setWeekDay();
}
// integer values
Date::Date(int m, int d, int y){
    setMonth(m);
    setDay(d);
    setYear(y);
    setWeekDay();
}
// string month
Date::Date(string m, int d, int y){
    for(int i=1; i<=monthsPerYear; ++i){
        if(monthNames[i] == m){
            setMonth(i);
            break;
        }
    }
    setDay(d);
    setYear(y);
    setWeekDay();
}
// SETTERS
void Date::setMonth(int m){
    if(m > 0 && m <= monthsPerYear){
        month = m;
    }else{
        throw invalid_argument("month must be 1-12");
    }
}
void Date::setDay(int d){
    day = checkDay(d);
}
void Date::setYear(int y){
    year = y;
}
// world's format DDD YYYY
void Date::printDayYear() const{
    cout << weekday << " " << year;
}
// Short date format MM/DD/YY
void Date::printShort() const{
    cout << month << '/' << day << '/' << year;
}
// long date format MMM DD, YYYY
void Date::printLong() const{
   cout << monthNames[month] << " " << day << ", " << year;
}

int Date::checkDay(int testDay) const{
    if(testDay > 0 && testDay <= daysPerMonth[month]){
        return testDay;
    }

    // february 29 check for leap year
    if(month == 2 && testDay == 29 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))){
        return testDay;
    }

    throw invalid_argument("Invalid day for current month and year");
}
// returns the weekday as a string from the given date
void Date::setWeekDay(){
    tm timeStruct = {};
    timeStruct.tm_year = year - 1900;
    timeStruct.tm_mon = month - 1;
    timeStruct.tm_mday = day;
    timeStruct.tm_hour = 12;

    mktime(&timeStruct);

    weekday = dayNames[timeStruct.tm_wday];
}
int main(int argc, const char *argv[]){
    Date d1;
    Date d2("February", 14, 1952);

    d1.printDayYear();
    printf("\n");
    d1.printShort();
    printf("\n");
    d1.printLong();
    printf("\n\n");

    d2.printDayYear();
    printf("\n");
    d2.printShort();
    printf("\n");
    d2.printLong();
    cout << std::endl;

    return 0;
}

