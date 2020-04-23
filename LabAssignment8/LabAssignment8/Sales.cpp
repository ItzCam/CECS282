// Implementation file for Sales

#include "Sales.h"
#include <iostream>
using namespace std;

//Define the function getData to input sales for three months
void sale::getData()
{
    cout << "\nEnter the sales data for last three months: ";
    for(int i=0;i<3;i++)
    {
        cout << "\nMonth " << i+1 << ": ";
        cin >> saleArray[i];
    }
    return;
}

//Define the function putData to display three months of sales
void sale::putData()
{
    cout << "\nSales data for last three months: ";
    for(int i=0;i<3;i++)
    {
        cout << "\nMonth " << i+1 << ": " <<saleArray[i];
    }
    return;
}
