#include<iostream>
using namespace std;
class Dad{
public:
    string car = "OMNI";
    string hobby = "Driving";

};
class son : public Dad{
    public:
        void introduce(){
            cout << "\nI have " << car << " and my hobby is " << hobby <<"."<< endl;
        }
};
int main(){
    son yash;
    yash.introduce();
    return 0;
}