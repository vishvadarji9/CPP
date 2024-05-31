#include<iostream>
using namespace std;

class Shape{
    string color;
    public:
        Shape(string color) : color(color){};
        string getColor(){
            return color;
        }
        void setColor(string color){
            this->color = color;
        }
        void getArea(){
            cout << "Area of Shape : ";
        }
        void draw(){
            cout << "Drawing shape..."<<endl;
        }
};

class Circle:public Shape{
    double radius;
    public:
        Circle(string color, double radius) : Shape(color),radius(radius){};

    
        void displayColor(){
            cout << "\nColor of circle : " << getColor()<<endl;
        }

        void getArea1(){
            cout << 3.14 * radius * radius;
        }

};

int main(){
    Circle c("pink", 10);
    c.displayColor();
    c.draw();
    c.getArea();
    c.getArea1();
    c.setColor("Green");
    c.displayColor();

    return 0;
}