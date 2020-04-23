//  ANTONIO HUGHES
//  CECS 282 Lab Assignment 1
//
//  Created by Antonio Hughes on 1/22/20.
//  Copyright © 2020 Antonio Hughes. All rights reserved.



// --------------------------------------------------------------------
// Problem 1 [5 points]
// Write a program that displays the sum of all odd digits of an input.
// --------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Hello! Please enter a number.\n";
    cin >> n;
    int sum = 0;

    while(n > 0){

        int r = n % 10;

            if(r % 2 == 1)

                sum += r;

        n = n / 10;

        }

        cout<<"Sum of all oddd digits: "<<sum<<endl;

return 0;

}


