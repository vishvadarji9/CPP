// 10. Perform string concatenation using friend function: Create a class for strings with private data members and a friend function to concatenate two strings.
#include <iostream>
using namespace std;
class Myclass{
  private:
    string v,t;
    public:
    Myclass(string v,string t):v(v),t(t){}
    friend void concatenate_strings(Myclass& obj);
};
void concatenate_strings(Myclass& obj){
    cout<<"\nconcatenate two strings : "<<obj.v<<" "<<obj.t<<endl;
}
int main(){
    Myclass obj("Vishva","Darji");
     concatenate_strings(obj);
     return 0;
}