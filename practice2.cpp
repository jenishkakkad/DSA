#include<iostream>
using namespace std;

int main() {
    int rows, cols, Diagonal = 0, Antdiagonal = 0;

    // Get the dimensions of the 2D array from the user
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int array[rows][cols];

    // Step 1: Take input for the 2D array
    cout << "Enter the elements of the " << rows << "x" << cols << " matrix :" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> array[i][j];
        }
    }

    // Step 2: Display all elements of matrix
    cout << "Display elements of the " << rows << "x" << cols << " matrix :" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    // Calculate the anti-diagonal sum
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i + j == rows - 1) {  // Condition for anti-diagonal
                Antdiagonal += array[i][j];
            }
        }
    }

    cout << "Sum of Anti-diagonal elements in this matrix is: " << Antdiagonal << endl;

    return 0;
}