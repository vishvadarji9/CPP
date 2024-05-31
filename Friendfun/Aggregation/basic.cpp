#include<iostream>
#include<iomanip>
using namespace std;

class Customer {
private:
    string name;
    int accountNumber;
    double balance;
public:
    // Customer() : name(""), accountNumber(0), balance(0.0) {}

    Customer(string n, int accNo, double bal) : name(n), accountNumber(accNo), balance(bal) {}

    void display() {
        cout << "Name: " << name << ", Account Number: " << accountNumber << ", Balance: " << fixed << setprecision(2) << balance << endl;
    }

    string getName() { return name; }
};

class Bank {
private:
    string bankName;
    Customer** customers; //Aggregation - Array of customer pointer
    int capacity;
    int size;
public:
    Bank(string n, int cap) : bankName(n), capacity(cap), size(0) {
        customers = new Customer*[capacity];
    }

    ~Bank() {
        for (int i = 0; i < size; i++) {
            delete customers[i];
        }
        delete[] customers;
    }

    void addCustomer(Customer* customer) {
        if(size == capacity) {
            cout << "Sorry " << customer->getName() << ", We cannot created more accounts." << endl;
            return;
        }
        customers[size++] = customer;
        cout << "Account Created for " << customer->getName() << "!" << endl;
    }

    void display() {
        cout << "Customer of " << bankName << ":\n";
        for (int i = 0; i < size; i++) {
            customers[i]->Customer::display();
        }
    }
};

int main() {
    Bank pnb("Punjab National Bank", 5);

    pnb.addCustomer(new Customer("Vishwa Soni", 55388, 0.5));
    pnb.addCustomer(new Customer("Vishva Darji", 1032, 45000));
    pnb.addCustomer(new Customer("Mohak Patel", 420, 10));
    pnb.addCustomer(new Customer("Zafar Sir", 5563, 1000000));
    pnb.addCustomer(new Customer("Shrey", 5468, 5000000));

    pnb.display();

    return 0;
}

