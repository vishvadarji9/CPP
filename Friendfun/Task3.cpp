// 3. Access private members of a class from another class: Define a class with private data members and another class with a friend function to access and modify those private members.

#include<iostream>
using namespace std;

class A;    //Forward Declaration

class B{
    private:
    int b = 10;

    public:
    friend class A;

};

class A{
    public:

        void display(B& obj){
            cout << "\nBefore modify: " << obj.b<<endl;
            obj.b = 5;
            cout << endl << "After modify: " << obj.b<<endl;
        }
};


int main(){
    B b;
    A a;
    a.display(b);
     
     return 0;
}
