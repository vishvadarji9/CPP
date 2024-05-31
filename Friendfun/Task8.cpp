// 8. Swap private data members of two different classes: Define two classes with private data members and a friend function to swap those data members between instances of the classes.

#include <iostream>
using namespace std;
class B;
class A{
  private:
    int a;
  public:
    A(int a):a(a){}
    friend void swap_data(A& obj, B& obj1);

};

class B{
  private:
    int b;
  public:
    B(int b):b(b){}
    friend void swap_data(A& obj, B& obj1);
};

void swap_data(A& obj,B& obj1){
    cout << "Before swapping:" << endl;
    cout << "A value: " << obj.a << endl;
    cout << "B value: " << obj1.b << endl;

    int temp=obj.a;
    obj.a=obj1.b;
    obj1.b=temp;

    cout << "After swapping:" << endl;
    cout << "A value: " << obj.a << endl;
    cout << "B value: " << obj1.b << endl;

}

int main() {

    A obj1(4);
    B obj2(5);

    swap_data(obj1, obj2);
    return 0;
}

