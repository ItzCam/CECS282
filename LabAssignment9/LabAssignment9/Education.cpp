// Education class for displaying the level of education per individual

#include "Payroll_System.h"

void Education::setDegree(string degree){   // Setters for Education class
    Education::Degree = degree;
}
void Education::setMajor(string major){
    Education::Major = major;
}
void Education::setResearch(int researches){
    Education::Research = researches;
}

string Education::getDregree(){   // Getters for Education class
    return Education::Degree;
}
string Education::getMajor(){
    return Education::Major;
}
int Education::getResearch(){
    return Education::Research;
}
Education::Education(){}
