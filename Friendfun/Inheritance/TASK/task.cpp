// Scenario:

// Design a class hierarchy to represent various shapes in a drawing application.

// Requirements:

// -> Base Class (Shape):
//     -> Data members:
//         -> 'color' (string): The color of the shape.
//     -> Member functions:
//         -> 'getArea()' (virtual): A pure virtual function to calculate the area (implemented in derived classes).
//         -> 'getColor()' (const): Returns the shape's color.
//         -> 'setColor(const string&)': Sets the shape's color.
//         -> 'draw()' (virtual): A pure virtual function to draw the shape (implemented in derived classes).

// -> Derived Classes (Single Inheritance):
//     -> Rectangle:
//         -> Data members:
//             -> 'width' (double): The width of the rectangle.
//             -> 'height' (double): The height of the rectangle.
//         -> Member functions (override 'getArea()' and 'draw()'):
//             -> 'getArea()': Calculates and returns the area (width -> height).
//             -> 'draw()': Prints information or utilizes graphics library functions to draw a rectangle.
#include<iostream>
using namespace std;
class Shape{
protected:
    string color;
public:
    Shape(string color):color(color){}
    void getarea(){
        cout<<"area of shape.."<<endl;
    }
    void draw(){
        cout<<"Draw the shape.."<<endl;
    }
    string getcolor(){
        return color;
    }
    void displaycolor(){
        cout<<"Sahpe color : "<<color<<endl;
    }
    string setColor(string color){
        this->color=color;
        cout<<"set the color.."<<endl;
    }
};
class Rectangle : public Shape{
public:
     double w,h;
    Rectangle(double w,double h,string color):w(w),h(h),Shape(color){}

     void getarea(){
        cout<<"Area of Rectangle : "<<w*h<<endl;
     }
     void displaycolor(){
        cout<<"Sahpe color : "<<getcolor()<<endl;
    }

};
int main(){
    Rectangle obj(10,10,"pink");
    obj.draw();
    obj.getarea();
    // obj.getcolor();
    obj.displaycolor();
    obj.setColor("Blue");
    obj.displaycolor();
    return 0;
}