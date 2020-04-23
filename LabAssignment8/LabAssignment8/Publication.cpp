// Implementation File for Publication

#include "Publication.h"
#include <iostream>
using namespace std;

//Define the function getData to get title and price
void publication::getData()
{
    cout << "\nTitle: ";
    cin >> title;
    cout << "\nPrice: ";
    cin >> price;
    return;
}

//Define the function putData to get title and price
void publication::putData()
{
    cout << "\nTitle: " << title << "\nPrice: " << price;
    return;
}
