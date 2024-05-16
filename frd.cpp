// 1. Calculate the sum of two private data members of different classes: Create two classes with private data members and a friend function to calculate the sum of those data members.
#include <iostream>
using namespace std;
class Myclass
{
private:
    int a;

public:
    Myclass(int a) : a(a) {}

    friend int add(Myclass &obj);
};

class Myclass1
{
private:
    int b;

public:
    Myclass1(int b) : b(b) {}

    friend int add1(Myclass1 &obj1);
};
int add(Myclass &obj)
{
    int x = obj.a;
    return x;
}

int add1(Myclass1 &obj1)
{
    int y = obj1.b;
    return y;
}

int main()
{
    int a, b;
    Myclass obj(8);
    a = add(obj);

    Myclass1 obj1(8);
    b = add1(obj1);

    cout << "Addition of two numbers is:" << a + b;

    return 0;
}
