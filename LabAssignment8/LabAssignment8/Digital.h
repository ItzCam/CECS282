//Header file for the Digital Class

#ifndef PUBLICATION_DIGITAL_H
#define PUBLICATION_DIGITAL_H
#include "Publication.h"
#include "Sales.h"

//Class Digital is created from classes Publication and Sales
//In this class we declared two functions getData and putData and a data member for storage
class digital:public publication, public sale
{
    
public:
    
    void getData();
    void putData();

    float storage_MB;
};
#endif //PUBLICATION_DIGITAL_H
