// Header file for Publication class

#ifndef PUBLICATION_PUBLICATION_H
#define PUBLICATION_PUBLICATION_H
#include <iostream>

using namespace std;

class publication{
    
public:
    
    //Declare two functions getData and putData
    void getData();
    void putData();

    //Declare title and price
    string title;
    float price;
};

#endif //PUBLICATION_PUBLICATION_H
