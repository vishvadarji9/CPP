// 4. Calculate the average of private data members of a class: Create a class with private data members and a friend function to calculate the average of those data members.

#include<iostream>
using namespace std;
class Myclass{
    private:
        int a,b,c;
    
    public:
    Myclass(int a,int b,int c):a(a),b(b),c(c){}
      friend void average(Myclass& obj);

};
void average(Myclass& obj){
    cout<<"\nAverage is : "<<(obj.a+obj.b+obj.c)/3<<endl;
}
int main(){
    Myclass obj(2,2,2);
    average(obj);
    return 0;
}
