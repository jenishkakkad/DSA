#include <iostream>
using namespace std;

int main() {
    int matrix[4][4]; // Declare a 4x4 matrix
    int primaryDiagonalSum = 0; // Variable to store the sum of the primary diagonal
    int secondaryDiagonalSum = 0; // Variable to store the sum of the secondary diagonal

    // Input values for the matrix
    cout << "Enter the elements of the 4x4 matrix (row by row):" << endl;
    for (int row = 0; row < 4; row++) { // Loop through each row
        for (int col = 0; col < 4; col++) { // Loop through each column
            cin >> matrix[row][col]; // Read the matrix element
        }
        cout<<endl;
    }

    for (int row = 0; row < 4; row++) { // Loop through each row
        for (int col = 0; col < 4; col++) { // Loop through each column
            cout << matrix[row][col]; // Read the matrix element
        }
        cout<<endl;
    }

    // Calculate the sums of the diagonals
    for (int i = 0; i < 4; i++) {
        primaryDiagonalSum += matrix[i][i]; // Add the primary diagonal element
        secondaryDiagonalSum += matrix[i][3 - i]; // Add the secondary diagonal element
    }

    // Display the results
    cout << "Primary diagonal sum: " << primaryDiagonalSum << endl;
    cout << "Secondary diagonal sum: " << secondaryDiagonalSum << endl;

    return 0; // End of the program
}