// >	Write a C++ program to convert temperature in Fahrenheit to Celsius.
// 	Sample Output:
// 	Convert temperature in Fahrenheit to Celsius :
// 	---------------------------------------------------
// 	Input the temperature in Fahrenheit : 95
// 	The temperature in Fahrenheit : 95
// 	The temperature in Celsius : 35

// #include<iostream>
// using namespace std;
// int main()
// {
//     float F,C;
//     cout<<"Enter the temperature in Fahrenheit:";
//     cin>>F;
//     C=(F-32)*5/9;
//     cout<<"The temperature in Celsius :"<<C;
//     return 0;

// }

// >Write a program in C++ that converts kilometers per hour to miles per hour.
// 	Sample Output:
// 	Convert kilometers per hour to miles per hour :
// 	----------------------------------------------------
// 	Input the distance in kilometer : 25
// 	The 25 Km./hr. means 15.5343 Miles/hr.
// #include<iostream>
// using namespace std;
// int main()
// {
//     float kph,mph;
//     cout<<"Enter the distance in kilometer :";
//     cin>>kph;
//     mph=kph/1.609344;
//     cout<<"The "<<kph<<" Km./hr. means "<<mph<<" Miles/hr.";
//     return 0;
// }

// >	Write a program in C++ to convert temperature in Kelvin to Fahrenheit.
// 	Sample Output:
// 	Convert temperature in Kelvin to Fahrenheit :
// 	---------------------------------------------------
// 	Input the temperature in Kelvin : 300
// 	The temperature in Kelvin : 300
// 	The temperature in Fahrenheit : 80.33

// #include<iostream>
// using namespace std;
// int main()
// {
//     float F,K;
//     cout<<"Enter the temperature in Kelvin:";
//     cin>>K;
//     F = (K - 273.15) *9/5 + 32;
//     cout<<"The temperature in Fahrenheit :"<<F;
//     return 0;

// }

// >Write a C++ program that takes a number as input and prints its multiplication table up to 10.
// 	Sample Output:
// 	Print the multiplication table of a number upto 10:
// 	--------------------------------------------------------
// 	Input a number: 5
// 	5 x 1 = 5
// 	5 x 2 = 10
// 	5 x 3 = 15
// 	5 x 4 = 20
// 	5 x 5 = 25
// 	5 x 6 = 30
// 	5 x 7 = 35
// 	5 x 8 = 40
// 	5 x 9 = 45
// 	5 x 10 = 50
// #include<iostream>
// using namespace std;
// int main()
// {
//     int number;
//     cout<<"Enter a Number:";
//     cin>>number;
//     for (int i=1;i<=10;i++)
//     {
//         cout<<number<<" * "<<i<<" = "<<number*i<<endl;
//     }
//     return 0;
// }

// >Write a C++ program that accepts the radius of a circle from the user and computes the area and circumference.
// 	Sample Output:
// 	Find the area and circumference of any circle :
// 	----------------------------------------------------
// 	Input the radius(1/2 of diameter) of a circle : 5
// 	The area of the circle is : 78.5397
// 	The circumference of the circle is : 31.4159

// #include<iostream>
// using namespace std;
// int main()
// {
//     float area,radius,c;
//     cout<<"Enter the radius of a circle:";
//     cin>>radius;
//     area=3.14*radius*radius;
//     c=2*3.14*radius;
//     cout<<"The area of the circle is :"<<area<<endl;
//     cout<<"The circumference of the circle is :"<<c;
//     return 0;
// }

// >	Write a C++ program to enter length in centimeters and convert it into meters and kilometers.
// 	Sample Output:
// 	Convert centimeter into meter and kilometer :
// 	--------------------------------------------------
// 	Input the distance in centimeter : 250000
// 	The distance in meter is: 2500
// 	The distance in kilometer is: 2.5
#include<iostream>
using namespace std;
int main()
{
    float cm,meter,km;
    cout<<"Enter the distance in centimeter :";
    cin>>cm;
    meter=cm/100;
    km=meter/1000;
    cout<<"The distance in meter is:"<<meter<<endl;
    cout<<"The distance in kilometer is:"<<km;
    return 0;
}