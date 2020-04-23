//  ANTONIO HUGHES
//  CECS 282 Lab Assignment 1
//
//  Created by Antonio Hughes on 1/22/20.
//  Copyright © 2020 Antonio Hughes. All rights reserved.

//------------------------------------------------------------------------------------------
// Problem 3 [20 points]
//The Weather Service Bureau department has data representing  monthly rainfall for a year
//and we would like to create a table categorizing each month as rainy (rainfall 20% higher
//than average) dry (rainfall 25% lower than average). or average. The data file for
//monthly rain fall is called rainfall.txt.
// -----------------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
using namespace std;

// function declarations

void inputRainfall(int rainFall [], int size);

int calculateAverageRainFall(int rainFall [], int size);

void classifyAndDisplayRainfall(int rainFall[], int months);

string getRainFallType(int average, int currentMonth);

string getMonthName(int month);

int main(){

int rainFall[12];

int size = 12;

inputRainfall(rainFall, size);

classifyAndDisplayRainfall(rainFall, size);

return 0;

}

// function definations

void inputRainfall(int rainFall [], int size){

//Open the file

ifstream inputFile;

inputFile.open("rainfall.txt");

//Initialize month counter

int month = 0; //first month

//Read the monthly rainfall in the file

while(month < size){

inputFile >> rainFall[month];

month++;

}

// CLose the file

inputFile.close();

}

int calculateAverageRainFall(int rainFall [], int size){

// initializng total with zero

int total = 0;

// adding all rainfall in total

//initializng count

int month = 0; // first month

while(month < size){

total = total + rainFall[month];

month++;

}

//returning average

return total/size;

}

void classifyAndDisplayRainfall(int rainFall[], int months){

// getting avaerage

int average = calculateAverageRainFall(rainFall, months);

// finding max and min temperature

// initializing max and min with first month rainfall

int max = rainFall[0], min = rainFall[0];

int maxMonth = 0, minMonth = 0; // to save month number

int month = 1; // counter

while(month < months){

if(rainFall[month] > max){

max = rainFall[month];

maxMonth = month;

}

if(rainFall[month] < min){

min = rainFall[month];

minMonth = month;

}

month++;

}

// now printing average, max, min

cout<<"The year's average monthly rainfall was "<<average<<" mm."<<endl;

cout<<getMonthName(maxMonth+1)<<" has the highest rainfall ("<<max<<" mm)."<<endl;

cout<<getMonthName(minMonth+1)<<" has the highest rainfall ("<<min<<" mm)."<<endl;

cout<< "           " <<endl;

cout<<" Month     Rainfall(mm)     Classification"<<endl;

cout<<"------- ----------------- ------------------"<<endl;

month = 0;

while(month < months){

cout<<setw(4) << (month+1)<<" "<< setw(14)<<rainFall[month]<<" "<< setw(15) <<getRainFallType(average, rainFall[month])<<endl;

month++;

}

}

string getRainFallType(int average, int currentMonth){

if(currentMonth > average){

double percent = ((currentMonth - average)*100.0)/average;

if(percent > 20)

return "Rainy";

}

else if(currentMonth < average){

double percent = ((average - currentMonth)*100.0)/average;

if(percent > 25)

return "Dry";

}

return "Average";

}

string getMonthName(int month){

switch(month){

case 1:

return "January";

case 2:

return "February";

case 3:

return "March";

case 4:

return "April";

case 5:

return "May";

case 6:

return "June";

case 7:

return "July";

case 8:

return "August";

case 9:

return "September";

case 10:

return "October";

case 11:

return "November";

case 12:

return "December";

default:

return "None";

}

}

