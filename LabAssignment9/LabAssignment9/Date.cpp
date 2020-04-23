// Date class for displaying a date of birth

#include "Payroll_System.h"

void Date::setDate(int x, int y, int z){  // Set Date
    Date::month = x;
    Date::day   = y;
    Date::year  = z;
}
void Date::showDate(){  // Show the date 
    cout << "Birth Date: "<< month << "/" << day << "/19" << year << endl;
}
