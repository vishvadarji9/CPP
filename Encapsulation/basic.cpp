#include<iostream>
using namespace std;

class Person{
private:
    string name;
    int age;
    float height;
public:
    string getName(){
        return name;
    }

    void setName(string name){
        if(!name.empty()){
            this->name=name;
        }
        else
        {
            cout<<"Error: Name can't be empty."<<endl;
        }
    }
    int getAge(){
        return age;
    }

    void setAge(int age){
        if(age>=0 && age<=120){
            this->age=age;
        }
        else{
            cout<<"Erorr: Age must be between 0 and 120." << endl;
        }
    }

    float getHeight(){
        return height;
    }

    void setHeight(float height){
        if(height>0){
            this->height=height;
        }
        else
        {
             cout << "Erorr: Height must be a +ve value." << endl;
        } 
    }
};

int main(){
    Person p;

    p.setName("Vishva");
    p.setAge(20);
    p.setHeight(2.17);

    cout<<"Name : "<<p.getName()<<endl;
    cout<<"Age : "<<p.getAge()<<endl;
    cout<<"Height : "<<p.getHeight()<<endl;

    p.setName("");
    p.setAge(130);
    p.setHeight(-1.5);

    cout << "Name: " << p.getName() << endl;
    cout << "Age: " << p.getAge() << endl;
    cout << "Height: " << p.getHeight() << endl;

    return 0;
}