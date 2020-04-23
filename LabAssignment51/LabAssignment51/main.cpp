//Antonio Hughes
//CECS 282 - LabAssignment51

#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int *readData(int &n){ // Function to read the data

    ifstream in;

    in.open("Data.txt"); // Open the data file

    if(in.fail()){ // If file is unable to be read

        cout<<"unable to open file"<<endl;

        return 0;

    }

    in>>n;

    int *arr = new int[n]; // Creating the array

    for(int i=0; i<n; i++){

        in>>*(arr+i);

    }

    in.close();

    return arr;

}

void bsort(int *arr, int last){ // Bubble sort function to sort array

    for(int i=0; i<last; i++){

        for(int j=0; j<last-i-1; j++){

            if(*(arr+j)>*(arr+j+1)){

                int temp = *(arr+j);

                *(arr+j) = *(arr+j+1);

                *(arr+j+1) = temp;

            }

        }

    }

}

void writeToConsole(int *arr, int last){ // Display to console output

    for(int i=0; i<last; i++){

        cout<<*(arr+i)<<" ";

    }

    cout<<endl;

}

int main(){ // Main function

    int *arr;

    int n;

    arr = readData(n);

    cout<<"Before sorting: "<<endl;

    writeToConsole(arr, n);

    bsort(arr, n);

    cout<<"After sorting: "<<endl;

    writeToConsole(arr, n);

    delete[] arr;

    return 0;

}
