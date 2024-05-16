// 7. Implement a simple calculator using friend functions: Define a class representing a calculator with private data members for operands and a friend function for performing arithmetic operations.

#include <iostream>
using namespace std;
class Myclass
{
private:
    int a, b, c;

public:
    Myclass(int a, int b) : a(a), b(b) {}
    friend void arithmetic_operations(Myclass& obj);
};
void arithmetic_operations(Myclass& obj)
{
    cout << "\nAddition is : " << obj.a + obj.b << endl;
    cout << "\nSub is : " << obj.a - obj.b << endl;
    cout << "\nDiv is :" << obj.a / obj.b << endl;
    cout << "\nMul is : " << obj.a * obj.b << endl;
}
int main()
{
    Myclass obj(18, 9);
    arithmetic_operations(obj);
    return 0;
}