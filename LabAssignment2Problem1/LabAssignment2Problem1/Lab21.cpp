// Antonio Hughes
// CECS 282 LAB 2 - Problem #1
// [10 points] Implement a class Account. An account has a balance, functions to add and withdraw money, and a function to query
//the current balance. Charge $20 penalty if an attempt is made to withdraw more money than available in the account.
//Test your Account class by using the following main function.


#include <iostream>
using namespace std;

class Account
{
    
private:
    double balance; // Declare our variable to hold the balance
    const double penalty = 20; // The penalty constant to be applied
public:
    Account(double balance){ // Constructor to add the balance to the object
        this->balance = balance;
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
    
    double get_balance(){ // This method will display the balance
        return balance;
    }
    
    
};

int main()
{
   Account my_account(100);     // Set up my account with $100
   my_account.deposit(50);
   my_account.withdraw(175);   // Penalty of $20 will apply
   my_account.withdraw(25);

   cout << "Account balance: " << my_account.get_balance() << "\n";
  
   my_account.withdraw(my_account.get_balance());  // withdraw all
   cout << "Account balance: " << my_account.get_balance() << "\n";
 
   return 0;
}
