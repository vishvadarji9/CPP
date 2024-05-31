// 2. Employee Inheritance: Develop a system for managing employees in an organization using inheritance. Create a base class 'Employee' with derived classes 'Manager', 'Engineer', and 'Clerk'. Each derived class should inherit common attributes and methods from the base class while having specialized features specific to their role.

#include<iostream>
using namespace std;
class Employee{
protected:
    string name;
    int age;
    double salary;
public:
     Employee(string name,int age,double salary):name(name){}
     void emp_info(){
        cout<<"Employee name : "<<name<<endl;
        cout<<"Employee salary : "<<salary<<endl;
        cout<<"Employee age : "<<age<<endl;
     }

};
class Manager: public Employee{
    

};
class Engineer: public Employee{
    
};
class Clerk: public Employee{
    
};

int main(){

    return 0;
}