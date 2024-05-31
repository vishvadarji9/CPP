// 1. Vehicle Inheritance Hierarchy: Implement a program that demonstrates single inheritance by creating a base class 'Vehicle' with derived classes 'Car', 'Motorcycle', and 'Truck'. Each derived class should inherit properties and methods from the base class while also adding its own unique characteristics.

#include<iostream>
using namespace std;

class Vehicle{
    public:
        string brand;
        string model;
        double price, avg;
    Vehicle(string brand,string model,double price, double avg){
        this->brand=brand;
        this->model=model;
        this->price=price;
        this->avg=avg;
    }
     void displayInfo() {
        cout << "Brand: " << brand << ", Model: " << model <<",Price "<<price<<",avg"<<avg<<endl;
    }
  
};
class Car : public Vehicle{
    public:
        void car_info(){
            
        }

};
class Motorcycle: public Vehicle{
    
};

class Truck: public Vehicle{
    
};
int main(){

    return 0;
}