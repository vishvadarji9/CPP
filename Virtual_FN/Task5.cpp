// 5. Vehicle Hierarchy: Develop a base class 'Vehicle' with virtual function 'start()'. Derive classes 'Car' and 'Bike' from 'Vehicle', each with its own implementation of 'start()'. Write a program to demonstrate polymorphism by starting various vehicles (instances of 'Car' and 'Bike') and observing their behavior.

#include<iostream>
using namespace std;

class Vehicle{
protected:
    string name;
public:
    Vehicle(){}
    Vehicle(string name):name(name){}

    virtual void start(){
        cout<<"Starting Vehicles..."<<endl;
    }
};

class Car:public Vehicle {
public:
    Car(string name):Vehicle(name){}

    void start() override{
        cout<<"Starting "<<name<<"."<<endl;
    }
}; 


class Bike:public Vehicle {
public:
    Bike(string name):Vehicle(name){}

    void start() override{
        cout<<"Starting "<<name<<"."<<endl;
    }
}; 

int main(){
    Car c("BMW");
    Bike b("Ninja h2");

    c.start();
    b.start();

    return 0;

}
