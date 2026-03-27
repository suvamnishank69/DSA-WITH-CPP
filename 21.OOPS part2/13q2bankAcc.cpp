
// q1. Create a class BankAccount with private attributes accountNumber and balance.
// Implement public methods deposit(),withdraw(),andgetBalance()to manage the account
#include<iostream> 
#include<STRING>
using namespace std;

class BankAccount{
private:
   int accountNumber;
   double balance;

public:
    BankAccount(int accNum,double bal){
         accountNumber = accNum;
         balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
    }

    
    void withdraw(double amount) {
        if(amount <= balance){
            balance-=amount;
        } else{
            cout<<"No sufficient balance for this withdrawal.\n";
        }
    }
double getBalance() {
    return balance;
}
};



int main(){


    BankAccount accA1(001,500.0);
    accA1.deposit(150.0);
    accA1.withdraw(100.0);
    
    cout<<"Current Blaance: Rs. "<< accA1.getBalance()<<"\n";


    return 0;
}

//create a coff mangement system for pratice
// create a libreary mangement system