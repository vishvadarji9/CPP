// 9. Calculate the area of a triangle using friend function: Define a class representing a triangle with private data members for its sides and a friend function to calculate its area.
#include <iostream>
using namespace std;
class Myclass{
    private:
     double b,h;
     public:
      Myclass(double b,double h):b(b),h(h){}
      friend void area_triangle(Myclass& obj);
}; 
void area_triangle(Myclass& obj){
    cout<<"\narea of a triangle : "<<(obj.b*obj.h)/2<<endl;
}
int main(){
    Myclass obj(9,9);
     area_triangle(obj);
     return 0;
}