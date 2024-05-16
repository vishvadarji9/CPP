// #include<iostream>
// using namespace std;
// class Grains{
//     private:
//         string color;
//         double weight;
//         string type;
//     public:
//         void setdata(string col,double w,string t){
//             color=col;
//             weight=w;
//             type=t;
//         }

//         void display(){
//             cout<<"color: "<<color<<" ,weight: "<<weight<<" ,Type: "<<type<<endl;
//         }

//         void grow(){
//             cout<<"Grains are growing..."<<endl;
//         }

//         void harvest(){
//             cout<<"Harvesting grains..." << endl;
//         }

//         void process() {
//         cout << "Processing grains..." << endl;
//         }

// };

// int main(){
//       Grains wheat, rice;

//       wheat.setdata("browm",20.3,"wole wheat");
//       rice.setdata("white",5.7,"basmati");

//       wheat.display();
//       rice.display();

//       wheat.grow();
//       wheat.harvest();
//       wheat.process();
      
// }

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class person{
    string name;
    string adrees;
    int age;
    public:
    void input(){
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter adress:";
    cin>>adrees;
    cout<<"Enter age:";
    cin>>age;
    cout<<endl;
    }
    void show(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Adrees:"<<adrees<<endl;
    }
    
};
int main() {
    person vishva;
    
  vishva.input();
  vishva.show();

    return 0;
}