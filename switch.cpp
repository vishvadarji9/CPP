// 1. Get character as input and check whether vowel / consonant Using SWITCH CASE
// Output :-
// Enter any character : c
// Letter is consonant

// #include<iostream>
// using namespace std;

// int main() {
//     char choice;
//     cout << "Enter any character: ";
//     cin >> choice;

//     switch (choice) {
//         case 'A':
//         case 'E':
//         case 'I':
//         case 'O':
//         case 'U':
//         case 'a':
//         case 'e':
//         case 'i':
//         case 'o':
//         case 'u':
//             cout << "Letter is vowel.";
//             break;
//         default:
//             cout << "Letter is consonant.";
//     }
//     return 0;
// }

// 2. WAP to check whether entered no. in between 1-5 , 6-10 or greater than 10.
// Output:-
// Enter any number : 5
// Between 1 – 5

// #include <iostream>
// using namespace std;

// int main() {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;

//     if (number >= 1 && number <= 5) {
//         cout << "The number is between 1-5." << endl;
//     } else if (number >= 6 && number <= 10) {
//         cout << "The number is between 6-10." << endl;
//     } else if (number > 10) {
//         cout << "The number is greater than 10." << endl;
//     } else {
//         cout << "The number is less than 1." << endl;
//     }

//     return 0;
// }

// 3. Write switch case for 1 for One, 2 for Two till 10. then print out of range
// Output:-
// Enter no between 1 to 5
// 4
// Four

// #include <iostream>
// using namespace std;

// int main()
// {
//     int number;
//     cout << "Enter no between 1 to 10: ";
//     cin >> number;

//     switch (number)
//     {
//     case 1:
//         cout << "One";
//         break;
//     case 2:
//         cout << "Two";
//         break;
//     case 3:
//         cout << "Three";
//         break;
//     case 4:
//         cout << "Four";
//         break;
//     case 5:
//         cout << "Five";
//         break;
//     case 6:
//         cout << "Six";
//         break;
//     case 7:
//         cout << "Seven";
//         break;
//     case 8:
//         cout << "Eight";
//         break;
//     case 9:
//         cout << "Nine";
//         break;
//     case 10:
//         cout << "Ten";
//         break;
//     default:
//         cout << "Out of range";
//     }
//     return 0;
// }

// 4. Write switch case program to print days of the weeks.
// Output:-
// Enter the day: 5
// Thursday

// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Enter the day:";
//     cin>>num;
//     switch (num)
//     {
//     case 1:
//         cout<<"Sunday.";
//         break;
//     case 2:
//         cout<<"Monday.";
//         break;

//     case 3:
//         cout<<"Tuesday.";
//         break;

//     case 4:
//         cout<<"Wednesday.";
//         break;

//     case 5:
//         cout<<"Thursday.";
//         break;

//     case 6:
//         cout<<"Friday.";
//         break;

//     case 7:
//         cout<<"Saturday.";
//         break;

//     default:cout<<"Invalid choice.!";

//     }
//     return 0;
// }

// 5. Write switch case program to print months of the years.
// Output:-
// Enter the number between 1 to 12: 2
// February
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number between 1 to 12:";
    cin >> num;
    switch (num)
    {
    case 1:
        cout << "January.";
        break;

    case 2:
        cout << "February.";
        break;

    case 3:
        cout << "March.";
        break;

    case 4:
        cout << "April.";
        break;

    case 5:
        cout << "May.";
        break;

    case 6:
        cout << "June.";
        break;

    case 7:
        cout << "July.";
        break;

    case 8:
        cout << "August.";
        break;

    case 9:
        cout << "September.";
        break;

    case 10:
        cout << "October.";
        break;

    case 11:
        cout << "November.";
        break;

    case 12:
        cout << "December.";
        break;
    default:
        cout << "Invalid choice!!";
    }
}

// ----------------------------------------------------------------------
// 1.C program to print number of days in a month using switch case
// 2.C program to find maximum between two numbers using switch case
// 3.C program to check even or odd number using switch case
// 4.C program to check positive negative or zero using switch case
// 5.C program to find all roots of a quadratic equation using switch case