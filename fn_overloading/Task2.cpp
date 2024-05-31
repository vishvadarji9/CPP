// 2. Math Operations: Develop a class named 'MathOperations' that overloads methods for performing arithmetic operations like addition, subtraction, multiplication, and division for different data types such as integers, floating-point numbers, and complex numbers.

#include <iostream>
using namespace std;
class MathOperations
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    float add(float a, float b)
    {
        return a + b;
    }

    int sub(int a, int b)
    {
        return a - b;
    }
    float sub(float a, float b)
    {
        return a - b;
    }

    int mul(int a, int b)
    {
        return a * b;
    }
    float mul(float a, float b)
    {
        return a * b;
    }

    int div(int a, int b)
    {
        return a / b;
    }
    float div(float a, float b)
    {
        return a / b;
    }
};
int main()
{
    MathOperations obj;
    cout << "Addition (int,int): " << obj.add(9, 3) << endl;
    cout << "Addition (float,float): " << obj.add(3.0F, 3.0F) << endl;

    cout << "Subtraction (int,int): " << obj.sub(10, 2) << endl;
    cout << "Subtraction (float,float): " << obj.sub(5.0F, 2.0F) << endl;

    cout << "Multiplication : " << obj.mul(3, 3) << endl;
    cout << "Multiplication (float,float): " << obj.mul(3, 3) << endl;

    cout << "Division (int,int): " << obj.div(8.0F, 2.0F) << endl;
    cout << "Division (float,float): " << obj.div(8.0F, 2.0F) << endl;
    
    return 0;
}