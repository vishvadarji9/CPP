// -> Derived Class (Multilevel Inheritance):
//     -> Square:
//         -> Inherits from 'Rectangle'.
//         -> No additional data members needed (inherits from 'Rectangle').
//         -> Member functions:
//             -> May or may not override 'getArea()' and 'draw()' for specific square behavior (optional).
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
     double w;
    Rectangle(double w,string color):w(w), Shape(color){}

};
class Square:public Rectangle{
public:
 
    Square(double w,string color):Rectangle(w,color){}
    void getarea(){
        cout<<"Area of  Square: "<<w*w<<endl;
     }
      void displaycolor(){
        cout<<"Sahpe color : "<<getcolor()<<endl;
    }

};
int main(){
    Square  s(10,"pink");
    s.getarea();
    s.displaycolor();
    return 0;
}