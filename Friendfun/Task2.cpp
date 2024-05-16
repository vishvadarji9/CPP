// 2. Compare the private data members of two different classes: Define two classes with private data members and a friend function to compare those data members and determine which class has a greater value.

#include <iostream>
using namespace std;
class Myclass
{
private:
    int a;

public:
    Myclass(int a) : a(a) {}

    friend int add(Myclass& obj);
};

class Myclass1
{
private:
    int b;

public:
    Myclass1(int b) : b(b) {}

    friend int add1(Myclass1& obj1);
};
int add(Myclass &obj)
{
    int x = obj.a;
    return x;
}

int add1(Myclass1 &obj1)
{
    int y = obj1.b;
    return y;
}

int main()
{
    int a, b;
    Myclass obj(81);
    a = add(obj);

    Myclass1 obj1(89);
    b = add1(obj1);

    if (a>b){
        cout<<"\nA is greater : "<<a<<endl;
    }
    else if(b>a)
    {
        cout<<"\nB is greater : "<<b<<endl;
    }
    else{
        cout<<"\nBoth number are is equal."<<endl;
    }
    


    return 0;
}

