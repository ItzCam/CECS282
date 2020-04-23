// Staff class will show all info for any given staff

#include "Payroll_System.h"

void Staff::setHourlyrate(double rateHour){ // Setters for Staff class
    Staff::hourlyRate = rateHour;
}
double Staff::getHourlyrate(){  // Getters for Staff class
    return Staff::hourlyRate;
}
double Staff::monthlyEarning(){
    return Staff::getHourlyrate() * Employee::getStaffHours();
}
void Staff::putData(){      // Put Data function
    Employee::putData();
    cout << "Full Time \nHourly Rate: $"<<fixed<<setprecision(2)<<Staff::getHourlyrate()<<endl;
    cout <<"Monthly Salary: $"<<Staff::monthlyEarning()<<endl;
}
Staff::Staff(string lastname, string firstname, string idnumber, char sex, int month, int day, int year,double rateHour){
    Employee::setLastname(lastname);
    Employee::setFirstname(firstname);
    Employee::setIdnumber(idnumber);
    Employee::setSex(sex);
    Employee::setBirthdate(month, day, year);
    Staff::setHourlyrate(rateHour);
}
Staff::Staff(){
    setHourlyrate(10);
}
