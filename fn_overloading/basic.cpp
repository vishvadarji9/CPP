#include<iostream>
using namespace std;
class A {
public:
    int add(int a, int b){
        return a+b;
    }
     int add(int a, int b,int c){
        return a+b+c;
    }
    string add(char a,char b){
        string temp="";
        temp +=a;
        temp +=b;

        return temp;
    }

};
int main(){
    A obj;
    cout<<"Add(int , int) : "<< obj.add(2,3)<<endl;
    cout<<"Add(int , int , int) : "<< obj.add(2,2,2)<<endl;
    cout<<"Add(char , char) : "<< obj.add('v','d')<<endl;

    return 0;
}