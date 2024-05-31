// 4. Bank Account Hierarchy: Create a base class 'Account' with virtual functions 'deposit()' and 'withdraw()'. Derive classes 'SavingsAccount' and 'CheckingAccount' from 'Account', each with its own implementation of 'deposit()' and 'withdraw()'. Write a program to simulate banking transactions such as depositing and withdrawing money from both savings and checking accounts.

#include<iostream>
using namespace std;

class Account{
public:
    virtual void deposit(){

    }
    virtual void withdraw(){
        
    }
};
