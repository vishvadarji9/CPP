// 8. Swap private data members of two different classes: Define two classes with private data members and a friend function to swap those data members between instances of the classes.

#include <iostream>
using namespace std;
class A{
  private:
    int a;
    public:
     A(int a):a(a){}
    //  friend void swap_data(A& obj);

};

class B{
  private:
    int b;
    public:
     B(int a):b(b){}
     friend void swap_data(A& obj,B& obj1);
};

void swap_data(A& obj,B& obj1){
    int temp=obj.a;
    obj.a=obj1.b;
    obj1.b=temp;
}

int main() {

    A obj1(4);
    B obj2(5);

    cout << "Before swapping:" << endl;
    cout << "A value: " << obj1.a << endl;
    cout << "B value: " << obj2.b << endl;

    swap_data(obj1, obj2);

    cout << "After swapping:" << endl;
    cout << "A value: " << obj1.a << endl;
    cout << "B value: " << obj2.b << endl;
    return 0;
}

