//  ANTONIO HUGHES
//  CECS 282 Lab Assignment 1
//
//  Created by Antonio Hughes on 1/22/20.
//  Copyright © 2020 Antonio Hughes. All rights reserved.

//------------------------------------------------------------------
// Problem 2 [5 points]
// Write a program that displays the factors of a specified integer.
// -----------------------------------------------------------------

#include <iostream>
using namespace std;

int main(){

    int num, j;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Factors of " << num << " are: " << endl;

    for(j = 1; j <= num; ++j){

        if(num % j == 0)
            cout << j << endl;

    }
return 0;
}
