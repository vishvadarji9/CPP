#include<iostream>
using namespace std;
class Parent {
private:
    int data;
public:
    Parent():data(9){}

    void display(){
        cout<<"Privaten data from parent is : "<<data<<endl;
    }
};
class Child:public Parent{
private:
    int data;
public:
    Child():data(18){}

    void display(){   //Overridden method
        cout<<"Privaten data from child is : "<<data<<endl;
    }   
};
int main(){
    Parent obj;
    Child obj1;

    obj.display();
    obj1.display();

    return 0;
}