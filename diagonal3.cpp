#include <iostream>
using namespace std;

int main() {
    int SIZE; // Declare SIZE to store the size of the matrix

    // Prompt the user to enter the size of the matrix
    cout << "Enter the size of the square matrix (e.g., 4 for a 4x4 matrix): ";
    cin >> SIZE;

    int matrix[SIZE][SIZE]; // Declare a square matrix of the given size
    int primaryDiagonalSum = 0; // Variable to store the sum of the primary diagonal
    int secondaryDiagonalSum = 0; // Variable to store the sum of the secondary diagonal

    // Input values for the matrix
    cout << "Enter the elements of the " << SIZE << "x" << SIZE << " matrix (row by row):" << endl;
    for (int row = 0; row < SIZE; row++) { // Loop through each row
        for (int col = 0; col < SIZE; col++) { // Loop through each column
            cin >> matrix[row][col]; // Read the matrix element
        }
        cout<<endl;
    }

    for (int row = 0; row < SIZE; row++) { // Loop through each row
        for (int col = 0; col < SIZE; col++) { // Loop through each column
            cout << matrix[row][col]; // Read the matrix element
        }
        cout<<endl;
    }

    // Calculate the sums of the diagonals
    for (int i = 0; i < SIZE; i++) {
        primaryDiagonalSum += matrix[i][i]; // Add the primary diagonal element
        secondaryDiagonalSum += matrix[i][SIZE - 1 - i]; // Add the secondary diagonal element
    }

    // Display the results
    cout << "Primary diagonal sum: " << primaryDiagonalSum << endl;
    cout << "Secondary diagonal sum: " << secondaryDiagonalSum << endl;

    return 0; // End of the program
}