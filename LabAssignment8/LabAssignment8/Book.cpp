//Implementation file for Book Class

#include "Publication.h"
#include "Sales.h"
#include "Book.h"

//Define the function getData to get the publication, sales, and page count
void book::getData()
{
    publication::getData();
    sale::getData();
    
    cout << "\nEnter page count of the book: ";
    cin >> page_count;
    return;
}

//Define the function putData to display the publication, sales, and page count
void book::putData()
{
    publication::putData();
    sale::putData();
    
    cout << "\nPage count of the book: " << page_count;
    return;
}
