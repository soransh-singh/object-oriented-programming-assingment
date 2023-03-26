/*
// Assingment 1
// 2. Define a class Bank_Account to represent a bank account. It contains 
// - Data Members:
//     - Name of the depositor
//     - Account Number
//     - Type of account
//     - Balance
// - Member Functions:
//     - To assign initial values
//     - To deposit an amount
//     - To withdraw an amount < amount available
//     - Display the name and balance.
*/

#include<bits/stdc++.h>

using namespace std;

class BankAccount{
    string name;
    string acctNo;
    string type;
    double balance;
    
    public: 
    BankAccount(){
        cout<<"Enter the name of Account Holder: ";
        cin>>name;

        cout<<"Enter the Account Number : ";
        cin>>acctNo;

        cout<<"Enter the type of Account Number: ";
        cin>>type;

        cout<<"Enter the initial Balance: ";
        cin>>balance;
    
    }

    int deposit(int amount);
    int withdraw(int amount);
    void display();
};

int BankAccount::deposit(int amount){
    balance+=amount;
    return balance;
}

int BankAccount::withdraw(int amount){
    if(balance<amount){
        throw invalid_argument("Transaction cannot be fulfield");
    }
    balance-=amount;
    return balance;
}

void BankAccount::display(){
    cout<<"Name of account holder: "<<name;
    cout<<"Balance: "<<balance;
    return;
}

int main(){
    BankAccount A1;
    A1.deposit(5000);
    A1.withdraw(100);
    A1.display();
    return 0;
}

