// 1. Shape Calculations: Create a class called 'Geometry' that implements methods to calculate the area of various shapes such as circle, rectangle, and triangle. Use method overloading to define separate functions for each shape's area calculation.

#include <iostream>
using namespace std;

class Geometry
{
public:
    const double PI = 3.14;

    double cal_area(double r)
    {
        return PI * r * r;
    }

    double cal_area(double l, double b)
    {
        return l * b;
    }

    float cal_area(float b, float h)
    {
        return (b * h) / 2;
    }
};

int main()
{
    Geometry obj;
    cout << "Area of circle : " << obj.cal_area(10.0) << endl;
    cout << "Area of rectangle : " << obj.cal_area(3.0, 3.0) << endl;
    cout << "Area of triangle : " << obj.cal_area(2.0F, 2.0F
     ) << endl;
    return 0;
}
