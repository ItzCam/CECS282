// Antonio Hughes
// CECS 282 LAB 2 - Problem 2

// [10 points] Enhance the Account class to compute the interest on the current balance.
// An account has initial balance of $10,000.00, and 6% percent annual interest is
// compounded monthly until the investement is double.
// Write a main function to determine the number of months to double the initial
// investment. Create a menu to allow the user to enter the initial investement
// and the annual interest rate.


#include <iostream>
using namespace std;

class Account
{
    
private:
    double balance; // Declare our variable to hold the balance
    const double penalty = 20; // The penalty constant to be applied
    double doubleInvestment;
    double annualInterestRate;
    double monthlyInterestRate;
    int month = 0;
public:
    Account(double balance){ // Constructor to add the balance to the object
        this->balance = balance;
    }
    
    Account(double balance, double annualInterestRate){ // Construcctor that takes 2 variables for the compound interst and sets up the monthly rate and investment x 2
        this->balance = balance;
        this->annualInterestRate = annualInterestRate;
        this->monthlyInterestRate = (annualInterestRate/12)/100;
        this->doubleInvestment = balance*2;
    }
    
    void deposit(double money){ // This method adds the money variable to the balance
        balance += money;
    }
    
    void withdraw(double money){ // This method withdraws money from the total balance
        if(money > balance){ // If amount attept to withdraw is greater than the total balance
            balance -= penalty; // Deduct $20 from the balance
            cout << "ERROR! Amount exceeds balance" << "\n";
            cout << "A $20 fee has been applied" << "\n";
        }
        else{
            balance -= money; // Withdraw money from the balance
        }
    }
    
    void compound_monthly_rate(){ // This method will find the months to get the double of the investments
        while(balance < doubleInvestment){
            balance += balance * monthlyInterestRate;
            month++;
        }
    }
    
    double get_balance(){ // This method will display the balance
        return balance;
    }
    
    double get_months(){ // This getter will return the num of months to double the investment
        return month;
    }
    
    
};

int main()
{
    char input; //will store variable to tell us if we want to do a custom investment
    double invest = 0;
    double rate = 0;
    cout<<"The current account balance is $10,000.00 and has an annual interest rate of 6%"<<endl;
    cout<<"Would you like to enter your own balace and rate? (Enter Y or N)"<<endl;
    cin >> input;
    if(input == 'Y' || input == 'y'){ //if statement to see if we will do a custom investment
        cout<<"Please enter your initial balance"<<endl;
        cin>>invest;
        cout<<"Please enter the annual interest rate"<<endl;
        cin>>rate;
        Account my_account(invest,rate); //create the account object with the custom variables
        my_account.compound_monthly_rate();//get the monthly rate and time
        cout<<"It will take "<<my_account.get_months();//dislay the months it will take to double
        cout<<" months to double your investment of $"<<fixed<<invest<<endl;
        
    }
    else{ //else we use our default values given in the instructions
        invest = 10000;
        rate = 6;
        Account my_account(invest,rate); //create the account object with the custom variables
        my_account.compound_monthly_rate();//get the monthly rate and time
        cout<<"It will take "<<my_account.get_months();//dislay the months it will take to double
        cout<<" months to double your investment of $"<<invest<<endl;
    }
    
    return 0;
}


