// 
//  main.cpp
//  LabAssignment11
//
//  Created by Antonio C. Hughes on 5/4/20.
//  Copyright © 2020 Antonio C. Hughes. All rights reserved.
//

#include<iostream>
#include<string>
#include<set>

using namespace std;

class Person{

public:
    
    string first_name;
    string last_name;
    int age;
    
    //constructor
    Person(string fName , string lName , int a){
        
        first_name = fName;
        last_name = lName;
        age = a;
        
    }

};

struct comparePersons {
    
    bool operator()(const Person * key_lhs, const Person * key_rhs){
        
        //first sort using first name if first name is equal then sort using last name
        
        if(key_rhs -> first_name == key_rhs -> first_name){
            
            return key_lhs -> last_name < key_rhs -> last_name;
            
        }
        
        //Sort using first name
        
        return key_rhs -> first_name < key_rhs -> first_name;
        
    }

};

//Function for adding to set

void addPerson(multiset<Person * , comparePersons> & myset){
    
    string fname;
    string lname;
    int age;
    
    cout<<"Enter First Name: ";
    getline(cin , fname);
    
    cout<<"Enter Last Name: ";
    getline(cin , lname);
    cout<<"Enter Age: ";
    
    cin>>age;
    cin.ignore(256, '\n');
    
    //create object
    
    Person *p = new Person(fname, lname , age);
    myset.insert(p);
    
}

//Function for search

void searchPerson(multiset<Person * , comparePersons> & myset){
    
    string fname;
    string lname;
    
    cout<<"Enter Last Name: ";
    getline(cin , lname);
    
    cout<<"Enter First Name: ";
    getline(cin , fname);
    
    bool found = false;
    
    for(auto i : myset){
        
        if(i -> first_name == fname && i -> last_name == lname){
            
            cout<<i->first_name<<" "<<i->last_name<<" Age: "<<i->age<<endl;
            
            found = true;
            
        }
    }
    
    //If none has the same name
    
    if(!found){
        
        cout<<"Person with given name not found\n";
        
    }
    
}

// Display function

void displayPersons(multiset<Person * , comparePersons> & myset){
    
    for(auto i : myset){
        
        cout<<i->first_name<<" "<<i->last_name<<" Age: "<<i->age<<endl;
        
    }

}

int main(){
    
    //create multiset
    
    multiset<Person * , comparePersons> myset;
    
    int user = 0;
    
    cout<<"1) Add Person\n";
    cout<<"2) Search Person\n";
    cout<<"3) Display Person\n";
    cout<<"4) Quit\n";
    
    while(1){
        
        cout<<"Make a choice: ";
        
        //get user choice
        cin>>user;
        cin.ignore(256, '\n');
        
        switch(user){
            
            case 1:
                
                addPerson(myset);
                break;
            
            case 2:
                
                searchPerson(myset);
                break;
            
            case 3:
                
                displayPersons(myset);
                break;
            
            case 4:
                
                return 0;
                
        }
        
    }
    
}
