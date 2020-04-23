// Antonio Hughes
// CECS 282 - Lab42

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// function to read data from file into an array.

int readData(int **arr)

{

FILE* fp = fopen("data.txt", "r");
char buffer[100];
fgets(buffer, 100, fp);
int countOfElements = atoi(buffer);
*arr = (int *)(malloc(sizeof(int) * countOfElements));
int* temp = *arr;
for(int i=0; i<countOfElements; i++,temp++)

{

fgets(buffer, 100, fp);
*temp = atoi(buffer);

}

return countOfElements;

}

// ascending bubble sort.

void bsort(int *arr, int last)

{

int* tarr = arr;

for(int i=0; i<last; i++)

{

for(int j=0; j<last-i-1; j++)

{

if(*(tarr+j) > *(tarr+j+1))

{

int temp = *(tarr+j);

*(tarr+j) = *(tarr+j+1);

*(tarr+j+1) = temp;

}

}

}

}

// given two nos a and b, returns true if a is less than b.

bool dscCompare(int a, int b)

{

return (a<b);

}

// given two nos a and b, returns true if b is less than a.

bool ascCompare(int a, int b)

{

return (a>b);

}

// bubble sort

// sorting order depends on the function pointer passed.

// if ascCompare pointer is passed, sorting will ascending

// if dscCompare pointer is passed, sorting will be descending.

void bubble_sort(int *arr, int size, bool (*dscCompare)(int, int))

{

int* tarr = arr;

for(int i=0; i<size; i++)

{

for(int j=0; j<size-i-1; j++)

{

if(dscCompare(*(tarr+j), *(tarr+j+1)))

{

int temp = *(tarr+j);

*(tarr+j) = *(tarr+j+1);

*(tarr+j+1) = temp;

}

}

}

}

// given a pointer to array, prints all the elements in the array.

void writeToConsole(int *arr, int last)

{

for(int i=0; i<last; i++)

{

printf(" %d", *(arr+i));

}

}

int main(void) {

int *arr;

// read the data

int count = readData(&arr);

printf("\nInitial array : \n");

writeToConsole(arr, count);

// sort the array in ascending order.

bsort(arr, count);

printf("\nAfter ascending sort: \n");

writeToConsole(arr, count);

// create a pointer to dscCompare function.

bool (*dscComparePtr)(int, int) = &dscCompare;

// sort the array in descending order.

// by passing dscCompare function to it.

bubble_sort(arr, count, dscCompare);

printf("\nAfter descending sort: \n");

writeToConsole(arr, count);

return 0;

}
