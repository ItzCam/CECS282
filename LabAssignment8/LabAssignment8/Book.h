// Header file for the book class

#ifndef PUBLICATION_BOOK_H
#define PUBLICATION_BOOK_H
#include "Publication.h"
#include "Sales.h"

//  This class declares two functions, getData and putData and a data member for page count

class book:public publication, public sale
{

public:
    
    void getData();
    void putData();

    int page_count;
};

#endif //PUBLICATION_BOOK_H
