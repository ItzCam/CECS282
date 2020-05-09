//
//  Matrix.cpp
//  LabAssignment10
//
//  Created by Antonio Hughes on 5/1/20.
//  Copyright © 2020 Antonio C. Hughes. All rights reserved.
//

#include "Matrix.h"

Matrix::Matrix(int rSize, int cSize){

    ptr = new int*[rSize];

    for(int i = 0; i < rSize; i++){

        ptr[i] = new int[cSize];

    }

    rowSize = rSize;

    colSize = cSize;

}

//Copy constructor m2(m1)

Matrix::Matrix(const Matrix &m){

    rowSize = m.rowSize;

    colSize = m.colSize;

    ptr = new int*[m.rowSize];

    for(int i = 0; i < m.rowSize; i++){

        ptr[i] = new int[m.colSize];

    }

    for(int i = 0; i < m.rowSize; i++){

        for(int j = 0; j < m.colSize; j++){

            ptr[i][j] = m.ptr[i][j];

        }

    }

}

 

// m2 = m1;

Matrix& Matrix::operator =(const Matrix &m){

    rowSize = m.rowSize;

    colSize = m.colSize;

    for(int i = 0; i < m.rowSize; i++){

        for(int j = 0; j < m.colSize; j++){

            ptr[i][j] = m.ptr[i][j];

        }

    }

    return *this;

}

//Destructor

Matrix::~Matrix(){

    for(int i = 0; i < rowSize; i++){

        delete[] ptr[i];

    }

    delete[] ptr;

}


Matrix Matrix::operator +(Matrix &m){  //DONE

    Matrix *result = new Matrix(rowSize, colSize);
    
    for (int i = 0; i < rowSize; i++){
        
        for (int j = 0; j < m.colSize; j++) {
            
            int num = 0;
            
            num += this->ptr[i][j] + m.ptr[i][j];
            
            result->ptr[i][j] = num;
            
            }
    }
    
    return *result;
}



        

Matrix Matrix::operator *(Matrix &m){

    Matrix *result = new Matrix(rowSize, colSize);

          for (int i = 0; i < rowSize; i++) {

                   for (int j = 0; j < m.colSize; j++) {

                             int num = 0;

                             for (int k = 0; k < colSize; k++) {

                                      num += this->ptr[i][k] * m.ptr[k][j];

                             }

                             result->ptr[i][j] = num;

                   }

          }

          return *result;

}

 

Matrix Matrix::operator ++() {      // DONE
    
    for (int i = 0; i < rowSize; i++){
        
        for (int j = 0; j < colSize; j++) {
            
            int num = 0;
            
            num += this->ptr[i][j] + 1;
            
            this->ptr[i][j] = num;
        }
        
    }
    
    return *this;

}

 

Matrix operator +(const int &num, const Matrix &m) {  // DONE (maybe)

    Matrix temp(m.rowSize,m.colSize);
    
    for(int i = 0; i < m.rowSize; i++){
        
        for(int j = 0; j < m.colSize; j++){
            
            temp.ptr[i][j] = m.ptr[i][j]+num;
            
        }

    }

    return temp;

}

 

Matrix Matrix::operator += (Matrix & m) {  //DONE (Maybe)
    
    for(int i = 0; i < rowSize; i++){
        
        for(int j = 0; j < colSize; j++){
            
            this->ptr[i][j] += m.ptr[i][j];

    }
        
    }

    return *this;

}

 

Matrix Matrix::operator += (const int &num) {

    for(int i = 0; i < rowSize; i++){

          for(int j = 0; j < colSize; j++){

          ptr[i][j] += num;

          }

    }

    return *this;

}

 

istream &operator >>(istream &in, const Matrix &m){ // DONE(maybe)

    cout<<"Enter the array: "<<endl;
    
    for(int i = 0; i < m.rowSize; i++){
        
        for(int j = 0; j < m.colSize; j++){
            
            cin >> m.ptr[i][j];
            
        }

    }
    

    return in;

}

 

ostream &operator <<(ostream &os, const Matrix &m){

    for(int i = 0; i < m.rowSize; i++){

        for(int j = 0; j < m.colSize; j++){

            cout << m.ptr[i][j] << " ";

        }

        cout << "\n";

    }

    return os;

}

