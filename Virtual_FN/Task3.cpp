// 3. Animal Hierarchy: Implement a base class 'Animal' with virtual function 'makeSound()'. Derive classes 'Dog' and 'Cat' from 'Animal', each with its own implementation of 'makeSound()'. Write a program to demonstrate polymorphism by making various animals (instances of 'Dog' and 'Cat') produce their respective sounds.

#include<iostream>
using namespace std;

class Animal{
public:
    Animal(){}
    virtual void makesound(){
        cout<<"Animal sound..."<<endl;
    }
};

class Dog:public Animal{
public:
    void makesound(){
        cout<<"DOG : bark!."<<endl;
    }
};
class Cat:public Animal{
public:
    void makesound(){
        cout<<"CAT : Meow!."<<endl;
    }
};
int main(){
    Animal a;
    Dog d;
    Cat c;

    a.makesound();
    d.makesound();
    c.makesound();
    return 0;
}
