#include<iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    Student() {
        rollNo = 0;
        name = "";
        marks = 0.0f;
        // marks = 0.0F;
        // marks = (float)0.0;
        cout << "Default Constructor..." << endl;
    }

    // Student(int rno, string n, float m) {
    //     rollNo = rno;
    //     name = n;
    //     marks = m;

    //     cout << "Parameterized Constructor..." << endl;
    // }

    // Student(Student& obj) {
    //     rollNo = obj.rollNo;
    //     name = obj.name;
    //     marks = obj.marks;
    // }

    void show() {
        cout << "RollNo: " << rollNo << endl; 
        cout << "Name: " << name << endl; 
        cout << "Marks: " << marks << endl; 
    }
};

int main() {
    Student mohak,vishwa;
    // Student mohak(101, "Mohak Patel", 78.5);
    // Student vishwa(mohak);

    mohak.show();
    vishwa.show();

    return 0;
}

