#include<iostream>
using namespace std;
class Myclass{
    private:
        int data,a,b,c,d,x,y;
    public:
        Myclass(int data):data(data){}
        Myclass(int a,int b,int c,int d):a(a),b(b),c(c),d(d){}

        friend void printdata(Myclass& obj);
        friend void addvector(Myclass&);
};
void printdata(Myclass& obj){
    cout<<"\nData in myclass:"<<obj.data<<endl;
}
void addvector(Myclass& obj){
    obj.x=obj.a+obj.c;
    obj.y=obj.b+obj.d;

    cout << "Addition: \n" << obj.a << " + " << obj.b << "i" << endl;
    cout << obj.c << " + " << obj.d << "j" << endl << "---------" << endl;
    cout << obj.x << " + " << obj.y << "k" << endl;
}
int main(){
    Myclass obj(18);
    printdata(obj);

    Myclass obj1(1,2,3,4);
    addvector(obj1);

    return 0;
}