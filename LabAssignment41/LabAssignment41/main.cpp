// Antonio Hughes
// CECS 282 - Lab41

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int readData( int *&arr); // Reading the file
void bsort(int *arr, int last); // Bubble sort method
void writeToConsole(int * arr, int last);
void bubble_sort(int *arr, int n, int (*func)(int, int));
int less_than(int v1, int v2); // Method to compare
int greater_than(int v1, int v2); // Method to compare

int main() // Main Function

{

    int n, i;
    int *arr;

    n = readData(arr);
    bsort(arr, n);
    writeToConsole(arr, n);

    //method 2
    printf("\n\nAscending order:\n"); // Display list in ascending order
    bubble_sort(arr, n, &greater_than);
    for (i = 0; i < n; i++)
        printf("%d ", *(arr+i));
    
    printf("\n\nDescending order:\n"); // Display list in descending order
    bubble_sort(arr, n, &less_than);
    for (i = 0; i < n; i++)
        printf("%d ", *(arr+i));
    printf("\n");
    delete arr;
    return 0;
}

int readData( int *&arr){ // This method will read the file

    int n, num, i;

    ifstream in;
    in.open("data.txt");
    in>>n;
    arr = new int[n];
    
    for(i=0; i<n; i++){
        in>>num;
        *(arr+i) = num;
    }

    in.close();
    return n;
    
}

void bsort(int *arr, int last){  //Sorting method

    int i, j, temp;

    for(i=0; i<last; i++){
        for(j=0; j<last-i-1; j++){
            if(*(arr+j)>*(arr+j+1)){
                temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;

            }

        }

    }

}

void writeToConsole(int * arr, int last){ // Writing the output to the console

    cout<<*(arr+0);
    for(int i=1; i<last; i++){
        cout<<", "<<*(arr+i);
    }

    cout<<endl;

}

void bubble_sort(int *arr, int n, int (*func)(int v1, int v2)) // Sorting method

{

    int i, j, temp;

    for (i = 0; i < n; i++)

    {

        for (j = 0; j < n-i-1; j++)

        {

            if ((*func)(*(arr+j), *(arr+j+1)))

            {

                temp = *(arr+j);

                *(arr+j) = *(arr+j+1);

                *(arr+j+1) = temp;

            }

        }

    }

}

int less_than(int v1, int v2) // Less than method to be compared while sorting

{

    return v1 < v2;

}

int greater_than(int v1, int v2) // Greater than method to be compared while sorting

{

    return v1 > v2;

}
