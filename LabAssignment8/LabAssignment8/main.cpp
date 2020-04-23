// Antonio Hughes
// CECS 282 - Lab Assignment 8

#include "Sales.h"
#include "Publication.h"
#include "Book.h"
#include "Digital.h"   //Import all header files
#include <iostream>
#include <string>

using namespace std;

int main() {

    book book;
    
    digital digital;

    book.getData();

    book.putData();

    cout << endl;

    digital.getData();

    digital.putData();

    cout << endl;

    return 0;

}

