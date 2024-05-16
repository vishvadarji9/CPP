// #include<iostream>
// using namespace std;

// class Food{
//     private:
//       string name;

//     public:
//       Food(string name): name(name){
//         cout<<name<<" has been prepared. "<<endl;
//       }
//       ~Food(){
//         cout<<name<<" has been consumed "<<endl;
//       }

//       string getname(){
//         return name;
//       }
// };
// int main(){
//     Food apple("Apple");
//     {
//         Food banana("banana");
//         cout << "Name: " << banana.getname() << endl;
//     }
     
//     cout << "Name: " << apple.getname() << endl;
    
//     return 0;
// }

/*
Tasks: 

1. Create a class representing a car. Implement a destructor that prints a message indicating the destruction of a car object.*/
// #include<iostream>
// using namespace std;
// class Car{
//     private:
//      string name,color;

//      public:
//      Car(string name,string color):name(name),color(color){
//         cout<<"car name is : "<<name<<" , color is : "<<color<<endl;
//      }
//      ~Car(){
//         cout<<name<<" : "<<color<<endl;
//      }
// };
// int main(){
//     Car Honda("Honda","White");
//     Car BMW("BMW","Black");

//     return 0;
// }

// 2. Design a class to manage student records. Implement a destructor that displays a message when a student record object is destroyed.

// #include<iostream>
// using namespace std;
// class Student{
//     private:
//       string name;
//       int rollno;
    
//     public:
//       Student(string name,int rollno):name(name),rollno(rollno){
//         cout<<"Student name is : "<<name<<" , Roll no : "<<rollno<<endl;
//       }
//       ~Student(){
//         cout<<"sname : "<<name<<" , srollno : "<<rollno<<endl;
//       }

// };
// int main(){
//     Student("Vishva",18);
//     Student("Tina",20);

//     return 0;
// }

// 3. Develop a simple calculator class. Add a destructor that prints a farewell message when a calculator object is destroyed.
// #include<iostream>
// using namespace std;
// class Calculator{
//     public:
//      Calculator() {
//         cout << "Calculator object created." <<endl;
//     }

//     ~Calculator() {
//         cout << "Calculator object destroyed." <<endl;
//     }
//      int add(int a, int b) {
//         return a + b;
//     }

// };
// int main(){
//     Calculator cal;
//     cout<<"Addition is : "<<cal.add(2,2)<<endl;
//     return 0;
// }

// 4. Build a class representing a shopping cart. Include a destructor that displays a message when a shopping cart object is destroyed.

#include<iostream>
using namespace std;

class Shoppingcart{
    private:
       string items;
    public:
    Shoppingcart(string items):items(items){
        cout<<items<<" created."<<endl;
    }
    ~Shoppingcart(){
        cout<<items<<" destroyed."<<endl;
    }   
};
int main(){
    Shoppingcart sc("Bread");

}