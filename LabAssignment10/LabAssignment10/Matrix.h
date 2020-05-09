//
//  Matrix.h
//  LabAssignment10
//
//  Created by Cameron H. Wilson on 5/1/20.
//  Copyright © 2020 Cameron H. Wilson. All rights reserved.
//

#ifndef MATRIX_H

#define MATRIX_H

#include <iostream>

using namespace std;

 
class Matrix {

    private:

        int rowSize;
        int colSize;
        int **ptr;

    public:

        Matrix(int rSize, int cSize);

        ~Matrix();
         //m2(m1)
    
        Matrix(const Matrix &m); //Copy constructor
         //m2 = m1

        Matrix& operator =(const Matrix &m); //Overloading assignment operator
         // m3 = m1 + m2
    
        Matrix operator +(Matrix &m);
         //m2 += m1

        Matrix operator +=(Matrix &m);
         //m2 += 2

        Matrix operator +=(const int &num);
         //m3 = m1 * m2

        Matrix operator *(Matrix &m);
         //m2 = ++m1

        Matrix operator ++();
         //m2 = integer value + m1
    
        friend Matrix operator +(const int &num, const Matrix &m);
         // cin>>m1

        friend istream &operator >>(istream &in, const Matrix &m);
         //cout<<m1

        friend ostream &operator <<(ostream &os, const Matrix &m);

        int getRowSize();

        int getColumnSize();

};
#endif // MATRIX_H
