/*
// Assingment 1
// 3. Using the above class Bank_account and by supplying a user id and password allow
// users to Login using their id and password. Now if login was successful the user will be able 
// to do the following:
// - Withdraw money.
// - Deposit money.
// - Display Balance.
// - Quit the program.
*/

#include<bits/stdc++.h>

using namespace std;

/* ---Declared Functions ---*/
class BankAccount;
void mainMenu(BankAccount Acc[], int n);
void loginMenu(BankAccount &Acc);

/* ---BankAccount Class ---*/
class BankAccount{
    string acctNo;
    string type;
    double balance;
    string password;
    
    public: 
    string name;
    void initialize();
    int deposit(int amount);
    int withdraw(int amount);
    void display();
    bool isPassCorrect(string pass);
};

void BankAccount::initialize(){
    cout<<"Enter the name of Account Holder: ";
    cin>>name;

    cout<<"Enter the Account Number : ";
    cin>>acctNo;

    cout<<"Enter the type of Account Number: ";
    cin>>type;

    cout<<"Enter the initial Balance: ";
    cin>>balance;

    cout<<"Enter your account password: ";
    cin>>password;
    cout<<"---Account Created---\n\n";
}

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
    cout<<"Name of account holder: "<<name<<endl;
    cout<<"Balance: "<<balance<<endl;
    return;
}

bool BankAccount::isPassCorrect(string pass){
    cout<<password;
    return (password.compare(pass) == 0);
}

void mainMenu(BankAccount Acc[], int n){
    int counter=0;
    int choice;
    do{
        cout<<"Enter: 1 -- TO Create a New Account \n";
        cout<<"Enter: 2 -- TO Login a Account \n";
        cout<<"Enter: 0 -- TO Exit the Program \n";
        cout<<"Enter Choice: ";
        cin>>choice;
        switch (choice)
        {
        case 0:
            return;
        case 1:
            Acc[counter].initialize();
            counter++;
            break;
        case 2:{
            string name;
            int current=-1;
            cout<<"Enter a username/Account holder name: ";
            cin>>name;
            for(int i=0; i<=counter; i++){
                if(Acc[i].name.compare(name)==0){
                    current=i;
                    break;
                }
            }
            if(current==-1){
                cout<<"WARNING :: Wrong username\n";
            }else{
                loginMenu(Acc[current]);
            }
            break;
        }

        default:
            cout<<"Wrong Option selected\n";
            break;
        }
    }while(true);
}

void loginMenu(BankAccount &Acc){
    string pass;
    cout<<"Enter Password: ";
    cin>>pass;
    if(!Acc.isPassCorrect(pass)){
        cout<<"WARNING:: Wrong Password\n\n";
        return;
    }

    int choice;
    do{
        cout<<"Enter: 1 -- TO Withdraw money \n";
        cout<<"Enter: 2 -- Display Balance. \n";
        cout<<"Enter: 3 -- To Deposit Money\n";
        cout<<"Enter: 4 -- To Go Back to Main Menu\n";
        cout<<"Enter: 0 -- TO Exit the Program \n";
        cout<<"Enter Choice: ";
        cin>>choice;
        switch (choice)
        {
        case 0:
            exit(0);
        case 1:{
            int amount;
            cout<<"Enter the amount of withdrawl: ";
            cin>>amount;
            Acc.withdraw(amount);
            break;
        }
        case 2:
            Acc.display();
            break;
        case 3:{
            int amount;
            cout<<"Enter the amount of deposit: ";
            cin>>amount;
            Acc.deposit(amount);
        }
        case 4:
            return;
        default:
            cout<<"Wrong Option selected";
            break;
        }
    }while(true);
    

}

int main(){
    BankAccount Acc[100];
    mainMenu(Acc, 100);
    return 0;
}