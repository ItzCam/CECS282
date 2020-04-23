//Antonio Hughes
//CECS 282 - LabAssignment52

#include <iostream>
#include<string>
using namespace std;

class Person{
    
private:
string name;
float salary;
    
public:
void setPerson(); //input name and salary
string getName();
float getSalary();
};

void Person::setPerson(){
cout<<"Enter name:";
cin>>name;
cout<<"Enter Salary:";
cin>>salary;
}

string Person::getName(){
return name;
}

float Person::getSalary(){
return salary;
}

//n is an the number of person objects stored in the array
//s is true, then sort by name;otherwise, sort by salary.
void bsort(Person** p,int n,bool s)
{
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
Person* temp;
/*Here we are using comparison based on s value if s==true,compare name,otherwise salary */
if((s==false && p[i]->getSalary()>p[j]->getSalary()) || (s==true && p[i]->getName()>p[j]->getName()))
{
//swap
temp=p[i];
p[i]=p[j];
p[j]=temp;
}
}
}
}
//This method print the array
void print(Person** p,int n)
{
for(int i=0;i<n;i++)
{
cout<<(p[i]->getName())<<" "<<(p[i]->getSalary())<<endl;
}
}
int main()
{
int n;
cout<<"Enter number of person :";
cin>>n;
Person* p[n]; //array of pointers to persons.
for(int i=0;i<n;i++)
{
p[i]=new Person();
p[i]->setPerson();
}
cout<<"Unsorted order"<<endl;
print(p,n);
cout<<"Sorted base of name"<<endl;
bsort(p,n,true);
print(p,n);
cout<<"Sorted based on salary"<<endl;
bsort(p,n,false);
print(p,n);
return 0;
}
