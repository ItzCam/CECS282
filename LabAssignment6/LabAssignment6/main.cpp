//CECS 282 - Lab Assignment 6
//Antonio Hughes

#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;

void transform(char* raw, char *testStr){ // Function to transform into C-String

    int index=0;
    int length=0;
    char letter;
        while(*(raw+index)!='\0'){ // Reads the string as long as there is a letter other than 0

            letter = *(raw+index);

            if('a'<=letter && letter<='z'){

                length+=1;
                
            }

            else if('A'<=letter && letter<='Z'){

                length+=1;
                
            }

            index++;
            
        }

    length+=1;
    int pos=0;
    index =0;

        while(*(raw+index)!='\0'){
            
            letter = *(raw+index);
            
            if('a'<=letter && letter<='z'){
                
                *(testStr+pos)=letter;

                pos++;
                
            }

            else if('A'<=letter && letter<='Z'){

                *(testStr+pos)=tolower(letter);

                pos++;
                
            }

            index++;
            
        }

    *(testStr+pos)='\0';
    
}

bool testPalindrome(char* str){ // Function to test string is palindrome
    
    int length = strlen(str);
    int start =0;
    int end = length-1;
    
    while(start<end){
        
        if(*(str+start)!=*(str+end)){
            
            return false;
            
        }
        
        start+=1;
        end-=1;
        
    }

    return true;
    
}

int main(){ // Main function
    
    char letter[100];
    char testStr[100];
    char repeat;
    
    do{
        cout<<"Enter a sentence to test: ";
        cin.getline(letter,99,'\n');
        
        transform(letter,testStr);
        
        if(testPalindrome(testStr)){
            
            cout<<letter<<" is a palindrome.\n";
            
        }else{

            cout<<letter<<" is not a palindrome.\n";

        }
        
        cout<<endl<<"Do you want to repeat (y/n)? "; cin>>repeat;cin.ignore(256,'\n');
        
        cout<<endl;
        
    } while (repeat=='y' || repeat=='Y');
    
    cout<<"Bye!\n";
}
