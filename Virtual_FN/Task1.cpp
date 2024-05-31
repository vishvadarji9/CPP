// 1. Shape Hierarchy: Create a base class 'Shape' with virtual function 'calculateArea()'. Derive classes 'Circle' and 'Rectangle' from 'Shape', each with its own implementation of 'calculateArea()'. Write a program to demonstrate polymorphism by calling 'calculateArea()' for objects of both derived classes.

#include<iostream>
using namespace std;

class Shape{
public:
    virtual void calculateArea(){
        cout<<"Area of Shape....."<<endl;
    }
};

class Circle:public Shape{
private:
   float PI=3.14F,radius;
public:
    Circle(float r):radius(r){}

    void calculateArea() override{
        cout<<"Area of circle : "<<PI*(radius*radius)<<endl;
    }
};

class Rectangle:public Shape{
private:
    float l,b;

public:
    Rectangle(float l,float b): l(l),b(b){}

    void calculateArea() override{
        cout<<"Area of Rectangle : "<<l*b<<endl;
    }
};

int main(){
    Shape S;
    Circle C(10);
    Rectangle R(10,10);

    S.calculateArea();
    C.calculateArea();
    R.calculateArea();

    return 0;
}

