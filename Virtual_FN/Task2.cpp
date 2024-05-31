// 2. Employee Hierarchy: Develop a base class 'Employee' with virtual function 'calculateSalary()'. Derive classes 'FullTimeEmployee' and 'PartTimeEmployee' from 'Employee', each with its own implementation of 'calculateSalary()'. Write a program to calculate and display the total salary of a team consisting of both full-time and part-time employees.

#include<iostream>
using namespace std;
class Employee{
public:
    Employee(){}

    virtual void calculatesalary(){
        cout<<"Employee salary .. "<<endl;
    }

};
class FullTimeEmployee:public Employee{
private:
    double salary;
public:
    FullTimeEmployee(double s):salary(s){}

    void calculatesalary() override{
        cout<<"Employee salary is : "<<salary<<endl;
    }
};

class PartTimeEmployee:public Employee{
private:
    double salary;
    int hours;
public:
    PartTimeEmployee(double salary,int hours):salary(salary),hours(hours){}

    void calculatesalary() override{
        cout<<"Employee salary is : "<<salary<<" ,  per hour : "<<hours<<endl;
    }
};

int main(){
    Employee e;
    FullTimeEmployee fe(25000.0);
    PartTimeEmployee pe(2000.0,1);

    e.calculatesalary();
    fe.calculatesalary();
    pe.calculatesalary();

    return 0;
}