/*Tasks: (Constructor)
1. Online Shopping Cart:
You are developing an online shopping website, and you need to implement a "ShoppingCart" class. The default constructor of this class will initialize the cart with default values such as an empty list of items, total cost set to zero, and a default currency (e.g., USD). Create an object of the "ShoppingCart" class using the default constructor and display the initial details of the cart.*/

// #include<iostream>
// using namespace std;

// class ShoppingCart{
//     private:
//         string item;
//         double total_cost;
//         string currency;

//     public:
//         ShoppingCart(){
//             item="";
//             total_cost=0.0;
//             currency="USD";
//         }

//         void display(){
//             cout<<"Item:"<<item<<"\ntotal_cost: "<<total_cost<<"\ncurrency: "<<currency<<endl;
//         }

// };

// int main(){
//     ShoppingCart obj;

//     obj.display();
//      return 0;
// }

// 2. Employee Database:
// You are building an application to manage employee data for a company. Implement an "Employee" class with data members like name, employee ID, designation, and salary. The default constructor will initialize the employee with default values like "Unknown" for name and designation, ID set to zero, and salary set to the minimum wage. Create an object using the default constructor to represent a new employee and display their details.

// #include<iostream>
// using namespace std;
// class Employee
// {
//     private:
//       string name;
//       int id;
//       string designation;
//       float salary;

//     public:
//         Employee(){
//             name="vishva";
//             designation="Managing Director";
//             id=101;
//             salary=10000.20f;
//         }

//         void display()
//         {
//             cout<<"Employee name: "<<name<<endl;
//             cout<<"Employee designation: "<<designation<<endl;
//             cout<<"Employee id :"<<id<<endl;
//             cout<<"Employee salary: "<<salary<<endl;
           
//         }
       
// };

// int main(){
//     Employee obj;

//     obj.display();
//      return 0;
// }

// 3).Imagine you are working on an Internet of Things (IoT) project involving temperature sensors. Create a "TemperatureSensor" class with data members to store the current temperature reading, sensor ID, and location. The default constructor initializes the sensor with a default temperature value, sets the ID as "Unknown," and location as "Unspecified." Create an object of the "TemperatureSensor" class using the default constructor and display its properties.

// #include<iostream>
// using namespace std;
// class TemperatureSensor{
//    private:
//     double currentTemperature;
//     string sensorID;
//     string location;

//    public:
//      TemperatureSensor(){
//         currentTemperature=0.0; 
//         sensorID="Unknown"; 
//         location="Unspecified";
//      }

//       void display() {
//         cout << "Sensor ID: " << sensorID <<endl;
//         cout << "Location: " << location <<endl;
//         cout << "Current Temperature: " << currentTemperature<<endl;
//     }
// };

// int main(){
//     TemperatureSensor obj;
//     obj.display();
//     return 0;
// }

// 4. School Attendance Tracker:
// You are developing a system to track student attendance in a school. Implement a "Student" class with data members for student name, roll number, class, and attendance status. The default constructor will set the attendance status to "Absent" by default. Create an object of the "Student" class using the default constructor to represent a new student and display their attendance status.

// #include<iostream>
// using namespace std;
// class Student{
//      private:
//      string name;
//      int rollnumber;
//      string stu_class; 
//      string attendance;

//      public:
//        Student(){
//           name="vishva";
//           rollnumber=9;
//           stu_class="A";
//           attendance="Absent";
//        }
    

//     void display() {
//         cout << "Name: " << name <<endl;
//         cout << "Roll Number: " << rollnumber <<endl;
//         cout << "Class: " <<stu_class <<endl;
//         cout << "Attendance Status: " << attendance <<endl;
//     }
// };

// int main(){
//     Student obj;
//     obj.display();
//     return 0;
// }

// 5. Car Rental System:
// Design a "Car" class to represent cars available for rent in a car rental system. The class should have attributes like car brand, model, year, and rental status. The default constructor initializes the car with default values like "Unknown" for brand and model, year set to the current year, and rental status as "Available." Create an object of the "Car" class using the default constructor and display its details.

// #include<iostream>
// using namespace std;

// class Car{
//      private:
//         string brand;
//         string model;
//         int year;
//         string rentalStatus;

//      public:

//       Car(){
//          brand="unknown";
//          model="unknown";
//          year=2024;
//          rentalStatus="Available";
//       }

//       void display(){
//         cout << "Brand: " << brand <<endl;
//         cout << "Model: " << model <<endl;
//         cout << "Year: " << year <<endl;
//         cout << "Rental Status: " << rentalStatus <<endl;
//       }
// };
// int main(){
//     Car obj;
//     obj.display();
//     return 0;
// }