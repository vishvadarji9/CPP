/*
Problem Statement:

Create a C++ program for an e-commerce system. Define a base class 'Product' with a method 'displayInfo()' to showcase product details like name, price, and description. Implement two derived classes, 'PhysicalProduct' and 'DigitalProduct', inheriting from 'Product'.

Override the 'displayInfo()' method in each derived class:

1. In the 'PhysicalProduct' class, override 'displayInfo()' to include specifics like weight, shipping cost, and delivery time.

2. In the 'DigitalProduct' class, override 'displayInfo()' to include information about download links and file sizes.

Instantiate instances of both 'PhysicalProduct' and 'DigitalProduct', highlighting how method overriding allows you to display unique product details while using a shared interface.

*/

#include<iostream>
using namespace std;

class Product{
private:
    string name, description; 
    int price;
public:
    Product(){}

    Product( string name, string description,int price):name(name),description(description),price(price){}

    void displayInfo(){
        cout<<"Product name : "<<name<<" , description : "<<description<<" , price : "<<price<<endl;
    }

};
class PhysicalProduct : public Product{
private:
    double weight,shippingCost;
    int deliveryTime;
public:
    // PhysicalProduct(){}

    // PhysicalProduct(double weight,double shippingCost,int deliveryTime):weight(weight),
    // shippingCost(shippingCost),deliveryTime(deliveryTime) {}

     PhysicalProduct(string name, string description, int price,
                    double weight, double shippingCost, int deliveryTime)
        : Product(name, description,price), weight(weight), shippingCost(shippingCost), deliveryTime(deliveryTime) {}

    void displayInfo() {
        Product::displayInfo();
        cout << "Weight: " << weight << " kg" << endl;
        cout << "Shipping Cost: " << shippingCost << endl;
        cout << "Delivery Time: " << deliveryTime << " days" << endl;
    }
};

class DigitalProduct : public Product {
private:
    string downloadLink;
    double fileSize; 

public:
    
    // DigitalProduct(string dl,double fs):downloadLink(dl),fileSize(fs){}

    DigitalProduct(string name, string description,int price,string dl,double fs):Product(name, description,price),downloadLink(dl),fileSize(fs){}

    void displayInfo(){
         Product::displayInfo();
         cout<<"DownloadLink : "<<downloadLink<<endl;
         cout<<"fileSize : "<<fileSize<<endl;
    }
};
int main(){
    Product obj("Smooth","Milk shake",10);
    PhysicalProduct obj1("Phone","Call",200,3.5,2.5,5);
    DigitalProduct obj2("Zoom","Meeting",0,"zoom.com",300);

    obj.displayInfo();
    obj1.displayInfo();
    obj2.displayInfo();

    return 0;
}