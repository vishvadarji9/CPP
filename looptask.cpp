// > WAP to find power of a given number
// Output :--
// Enter number & Power :2
// 5
// Result of power : 32
// #include<iostream>
// using namespace std;
// int main()
// {
//     int number,exp;
//     float power = 1;
//     cout<<"Enter number & Power :";
//     cin>>number>>exp;
//     int i=1;
//     while (i<=exp)
//     {
//         power = power*number;
//         i++;
//     }
//     cout<<"Result of power :"<<power;
//     return 0;

// }

// > WAP to find factorial of a given number
// Output:--
// Enter the no:5
// The factorial is 120
// #include<iostream>
// using namespace std;
// int main()
// {
//     int number,fact=1;
//     cout<<"Enter the number:";
//     cin>>number;
//     int i=1;
//     while (i<=number)
//     {
//         fact=fact*i;
//         i++;
//     }
//     cout<<"The factorial is:"<<fact;
    
//     return 0;
// }

// > WAP check the no. Armstrong or not
// Output:--
// Enter one no.: 153
// It is armstrong no
// #include<iostream>
// using namespace std;
// int main()
// {
//     int number,temp;
//     cout<<"Enter number:";
//     cin>>number;
//     number=number/10;
    

//     return 0;
// }

// > WAP to print whether no. is Palindrome or not
// Output :--
// Enter a no.: 1221
// pelindrome no

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,number,temp,rev=0;
//     cout<<"Enter number:";
//     cin>>n;
//     int i=0;
//     while (i<=number)
//     {
//         temp=number%10;
//         rev=(rev*10)+temp;
//         number=number/10;
//         i++;
//     }
//     if(rev==n)
//     {
//         cout<<n<<" Is palindrome.";
//     }
//     else{
//         cout<<n<<" Is not palindrome.";

//     }
    
//     return 0;
// }
// > WAP to print Fibonacci Series
// Output:--
// 0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,

// > WAP to find sum of digit.
// Output:-
// Enter a Number:15
// Sum of digits of a number:6

// > WAP to find sum of odd digit of entered digit.
// Output:-
// Enter a Number:1567
// Sum of Odd digits of a number:8



// Using While and Do While loop

// --------------------------------------
//            FOR LOOP
// --------------------------------------


// > WAP to print series as 1 + x^1 + x^2 + x^3 +x^4…..x^n
// Output:-
// Enter value of x and n: 2, 2
// Sum is 7.

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n,x,sum=0;
//     cout<<"Enter value of x and n:";
//     cin>>x>>n;
//     for (int i = 0; i <=n; i++)
//     {
//         sum+= pow(x,i);  
//     }
//     cout<<"Sum is:"<<sum;
    
//     return 0;
// }

// > WAP to print series as 1-3+5-7+9……n
// Output:- 
// Enter one value : 7
// Sum of series is 4

// > WAP to print series 1 + x! ………… n!
// Output :-
// Sum of all factorials is 153

// #include<iostream>
// using namespace std;
// int main(){
//     int n,sum=0;
//     cout<<"Enter number:";
//     cin>>n;
//     for (int i = 1; i <=n; i++)
//     {
//         int fact=1;
//       for (int  j = 1; j<=i; j++)
//       {
//          fact=fact*j;
//       }
//      sum+=fact; 
//     }
//     cout<<"Sum :"<<sum; 

// }