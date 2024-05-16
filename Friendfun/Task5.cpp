// . Perform matrix addition using friend function: Define a class for matrices with private data members and a friend function to add two matrices.

#include <iostream>
using namespace std;
class A
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int c[3][3];

public:
    friend void matrix_addition(A& obj);
};

void matrix_addition(A& obj)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // cout<<obj.c[i][j]<<"\t";
              obj.c[i][j]=obj.a[i][j]+obj.b[i][j];
               cout<<obj.c[i][j]<<"\t";
        }
        cout<<"\n";
    }
    
	cout << "Result matrix is " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++){
			 cout<<obj.c[i][j]<<"\t";
        }
		cout << endl;
	}
}

int main(){
    A obj();
    // matrix_addition();
}

