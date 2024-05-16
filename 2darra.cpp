// #include<iostream>
// using namespace std;

// class Temprature{
//     public:

//     int arr[5][6]={{234,120,345,453,222,132},{345,654,444,256,154,354},{543,456,476,234,111,110},{432,143,278,546,312,131},{345,654,321,123,567,652}};

//     int highestTemAndLowestTemp(){
//         int max, min,maxcty,mincty;
//         for (int i = 0; i < 5;i++){
//             max =-1;
//             maxcty;
//             min = 1000;
//             mincty;
//             for (int j = 0; j < 6;j++){
//                 if(arr[i][j]>max){
//                     max = arr[i][j];
//                     maxcty = j;
//                 }else if(arr[i][j]<min){
//                     min = arr[i][j];
//                     mincty = j;
//                 } 
//             }
            
//             cout << "\nFor Day " << i + 1;
//             cout << "\nHighest Temperature recorded in city" << maxcty+1<<" with " << max << " cel";
//             cout << "\nLowest Temperature recorded in city" << mincty+1<<" with " << min << " cel";
//             cout << "\n\n";
//         }

//         return 0;
//     }
// };

// int main(){
//     Temprature t;
//     t.highestTemAndLowestTemp();
// }

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;


const int max_rows = 5;
const int max_columns = 6;

class Theater{
    int no_of_booked_ticket = 0;

    public:

        void displaySeatingChart(string arr[max_rows][max_columns])
        {
            cout << "\t " << setw(4) << " C1 " << setw(4) << " C2 " << setw(4) << " C3 " << setw(4) << " C4 " << setw(4) << " C5 " << setw(4) << " C6 ";
            cout << "\n\n";
            for (int i = 0; i < max_rows; i++)
            {
                cout << "R" << i + 1 << "\t";
                for (int j = 0; j < max_columns; j++)
                {
                    cout << setw(4) << arr[i][j];
                }
                cout << "\n";
            }
        }


        void bookSeat(string arr[max_rows][max_columns]){
            int max_seats = 30;
            int no_of_tickets;
            int row  , col , count = 0;

            cout << "\nEnter number of tickets you wanna book: ";
            cin >> no_of_tickets;

            cout << "\n\n";

            if(max_seats < (no_of_booked_ticket+no_of_tickets)){
                cout << "\nSorry we can't book " << no_of_tickets << ",we only have " << (max_seats - (no_of_booked_ticket+no_of_tickets)) << "Ticket's left!!";
            }else{
                while (count < no_of_tickets){
                    displaySeatingChart(arr);
                    cout << "\n At which row you want to book your seat "<<count<<"?";
                    cin >> row;
                    cout << "\n Enter seat no in row R" << row << ":";
                    cin >> col;
                    if(arr[row-1][col-1]=="AV"){
                        arr[row - 1][col - 1] = "NA";
                        count++;
                    }else{
                        cout << "\n Seat is already booked.Please choose another one!!!"<<endl;
                    }
                    cout << "\n";
                }
                cout << "\n Total "<<count<<"seats have been booked successfully booked."<<endl;
                calculateTotalRevenue(count);
                
            }

        }

        void calculateTotalRevenue(int count){
            float price = 150;
            cout << "\n Total Price :" << count * price <<"\n\n";
        }
};


int main(){
    int choice;
    string arr[max_rows][max_columns] = {{"AV", "AV", "AV", "AV", "AV", "AV"}, {"AV", "AV", "AV", "AV", "AV", "AV"}, {"AV", "AV", "AV", "AV", "AV", "AV"}, {"AV", "AV", "AV", "AV", "AV", "AV"}, {"AV", "AV", "AV", "AV", "AV", "AV"}};

    Theater t1;
    
    
    cout << "Hello There , Welcome to Threater!!";
    cout << "\nHow can we help you today?";

while (true){
    cout << "\n\n1. Display Seats";
    cout << "\n2. Book Tickets";
    cout << "\n0. Exit";
    cout << "\nEnter your choice: ";
    cin >> choice;
    switch (choice)
    {
        case 1:
            t1.displaySeatingChart(arr);
            break;

        case 2:
            t1.bookSeat(arr);
            break;
        
        case 0:
            cout << "\n\nThanks for business!!";
            exit(0);

        default:
            cout << "!!Invald Choice!!";
            break;
    }
}

}