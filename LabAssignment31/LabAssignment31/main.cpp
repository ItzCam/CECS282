//Antonio Hughes
//CECS 282 - Lab31

#include <iostream>
#include <iomanip>
using namespace std;


//Sort function to sort the array
void Sort(double array[], int size)
{
int i, j, first, temp;
if ( size < 2) return;

for (i = size - 1; i > 0; i--)
{
first = 0;
for (j=1; j<=i; j++)
{
if (array[j] < array[first])
   first = j;
}
temp = array[first];
array[first] = array[i];
array[i] = temp;
}
}
//function to displayArray array elements
void displayArray(double array[],int size){
  
for(int i = 0;i<size;i++){
cout<<array[i]<<" ";
}
}

//function to find Average of array elements
double average(double array[],int size){
int sum = 0;
for(int i = 0;i<size;i++){
sum+=array[i];
}
return (double)sum/size;
}

int main()
{
int size;
//ask user score he want to enter
cout<<"How many score do you want to enter ? ";
cin>>size;
double score[size];
//store in score array
for(int i = 0;i<size;i++){
cout<<"Enter score #"<<(i+1)<<": ";
cin>>score[i];
}
//print Orignal array
cout<<"Orignal order scores are: ";
displayArray(score,size);
//sort the array
Sort(score,size);
cout<<"\nScores ordered high to low: ";
//print sorted array
displayArray(score,size);
//print Average score
cout << fixed << showpoint << setprecision(2);
cout<<"Average of score: "<<average(score,size)<< endl;
  
return 0;
}
