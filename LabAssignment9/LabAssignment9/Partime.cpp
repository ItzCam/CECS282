// Partime class used to pay an employee

#include "Payroll_System.h"

void Partime::setHours(int hours){ // Setters for Partime class
    Partime::Hours = hours;
}
double Partime::getHours(){
    return Partime::Hours;
}
double Partime::monthlyEarning(){
    return Staff::getHourlyrate() * Partime::getHours() * 4;
}
void Partime::putData(){
    Employee::putData();
    cout << "Hours worked per month: "<< Partime::getHours() * 4<<endl; // resetiosflags(ios::fixed)
    cout << "Hourly Rate: $"<<fixed<<setprecision(2)<<Staff::getHourlyrate()<<endl;
    cout << "Monthly Salary: $"<<Partime::monthlyEarning()<<endl;
}
Partime::Partime(string lastname, string firstname, string idnumber, char sex, int month, int day, int year, double hourRate, int hours){
    Employee::setLastname(lastname);
    Employee::setFirstname(firstname);
    Employee::setIdnumber(idnumber);
    Employee::setSex(sex);
    Employee::setBirthdate(month, day, year);
    Staff::setHourlyrate(hourRate);
    Partime::setHours(hours);
}
