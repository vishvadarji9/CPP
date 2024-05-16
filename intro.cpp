/*
CPP is a Semi-Object Oriented Programming language
iostream = istream + ostream

istream - cin
ostream - cout

all the objects comes under standard namespace

ostream object uses insertion operator (<<) to print the data on the console
istream object uses extraction operator (>>) to scan the data from the console

*/
#include<iostream>
using namespace std;
int main(){
    // int a,b,c;
    // cout<<"Enter a,b,c:";
    // cin>>a>>b>>c;
    // cout<<"a="<<a<<" ,b="<<b<<" ,c="<<c;
    char str[20];
    cout<<"Enter str:";
    // cin>>str;
    cin.getline(str,20);
    cout<<"Str is:"<<str;
    return 0;
}