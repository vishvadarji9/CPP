// #include<iostream>
// using namespace std;
// class Movie{
//     string title;
//     string director;
//     int year,duration;

// public:
//   Movie(string title,string director,int year,int duration){
//         this->title=title;
//         this->director=director;
//         this->year=year;
//         this->duration=duration;
//   }
//   void display(){
//     cout << "Title: " << title;
//     cout << ", Director: " << director;
//     cout << ", Year: " << year;
//     cout << ", Duration: " << duration << " minutes" << endl;
//   }
// };
// int main(){
//     Movie obj("Intersteller", "Christopher Nolan", 2014, 169);
//     obj.display();

//     return 0;
// };

// ------------------------------------------
// TASk:

// 1. "Create a class 'Employee' to represent an employee in a company. Each employee has a unique ID and salary. Implement a member function 'compareSalary(Employee* other)' that takes another employee object as a parameter and uses the 'this' pointer to compare the salary of the current employee with the other employee."

// #include<iostream>
// using namespace std;
// class Employee{
//     float salary;
//     int id;
// public:
//     Employee( float salary,int id){
//         this->salary=salary;

//     }
// };

// 2. "Design a class 'Car' to model different cars owned by individuals. Each car has a unique license plate number and a fuel level. Implement a member function 'refuel(double liters)' that takes the amount of fuel to be added and uses the 'this' pointer to update the fuel level of the current car."

// #include<iostream>
// using namespace std;
// class Car{
//     string license_plate_number;
//     int fuel_level;

//     public:
//        Car(string license_plate_number,int fuel_level){
        
//        }
// };

