#include <iostream>
using namespace std;

int main() {
    int SIZE = 4; // Declare SIZE as a regular integer
    int matrix[SIZE][SIZE]; // 4x4 matrix declaration
    int primaryDiagonalSum = 0; // Primary diagonal sum
    int secondaryDiagonalSum = 0; // Secondary diagonal sum

    // Input values for the matrix
    cout << "Enter the elements of the 4x4 matrix (row by row):" << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> matrix[i][j]; // Read each element of the matrix
        }
        cout<<endl;
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << matrix[i][j]; // Read each element of the matrix
        }
        cout<<endl;
    }

    // Calculate the sums of the diagonals
    for (int i = 0; i < SIZE; i++) {
        primaryDiagonalSum += matrix[i][i]; // Element of the primary diagonal
        secondaryDiagonalSum += matrix[i][SIZE - 1 - i]; // Element of the secondary diagonal
    }

    // Display the results
    cout << "Primary diagonal sum: " << primaryDiagonalSum << endl;
    cout << "Secondary diagonal sum: " << secondaryDiagonalSum << endl;

    return 0; // End of the program
}