// 4. Bank Account Hierarchy: Create a base class 'Account' with virtual functions 'deposit()' and 'withdraw()'. Derive classes 'SavingsAccount' and 'CheckingAccount' from 'Account', each with its own implementation of 'deposit()' and 'withdraw()'. Write a program to simulate banking transactions such as depositing and withdrawing money from both savings and checking accounts.

#include<iostream>
using namespace std;

class Account{
protected:
    double Balance;
public:
    Account(){}
    Account(double a):Balance(a){}

    double getBalance(){
        return Balance;
    }
    double setBalance(double Balance){
        this->Balance=Balance;
    }

    virtual void deposit(double amt){
        cout<<"Deposit...."<<endl;
    }
    virtual void withdraw(double amt){
        cout<<"Withdraw..."<<endl;
    }
};

class SavingsAccount:public Account{
public:
    SavingsAccount(double Balance):Account(Balance){}

    void deposit(double amt) override{
         if(amt>0){
            Balance +=amt;
            cout<<"Deposited : "<<Balance<<" From savingaccount."<<endl;
         }
         else{
            cout<<"Deposite amount should be greater than 0 in savingaccount."<<endl;
        }
    }

    void withdraw(double amt) override{
        if(Balance>=amt+1000){
            Balance -=amt;
            cout<<"Withdrawed : "<<Balance <<" From savingaccount."<<endl;
        }
        else{
            cout<<"Not enough balance in saving savingaccount..."<<endl;
        }
    }

    
};

class CheckingAccount:public Account{
public:
    CheckingAccount(double Balance):Account(Balance){}

    void deposit(double amt) override{
         if(amt>0){
            Balance +=amt;
            cout<<"Deposited : "<<Balance<<" From CheckingAccount."<<endl;
         }
         else{
            cout<<"Deposite amount should be greater than 0 in CheckingAccount."<<endl;
        }
    }

    void withdraw(double amt) override{
        if(Balance>=amt+1000){
            Balance -=amt;
            cout<<"Withdrawed : "<<Balance <<" From CheckingAccount."<<endl;
        }
        else{
            cout<<"Not enough balance in CheckingAccount..."<<endl;
        }
    }
};

int main(){
    SavingsAccount sa(20000.0);
    CheckingAccount ca(20000.0);

    sa.deposit(10000.0);
    sa.withdraw(1000.0);

    ca.deposit(500.0);
    ca.withdraw(100.0);
    
    return 0;
}
