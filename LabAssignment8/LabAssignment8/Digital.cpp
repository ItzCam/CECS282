//Implementation file for Digital file

#include "Publication.h"
#include "Sales.h"
#include "Digital.h"

//Define the functions getData to input publication, storage and three months of sales
void digital::getData()
{
    publication::getData();
    sale::getData();
    
    cout << "\nEnter storage in MegaBytes(float value) of the book: ";
    cin >> storage_MB;
    return;
}

//Define the function putData to display the publication, storage and three months of sales
void digital::putData()
{
    publication::putData();
    sale::putData();
    
    cout << "\nStorage in MegaBytes(float value) of the book: " << storage_MB;
    return;
}
