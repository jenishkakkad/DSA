#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, cols;

    // Get the dimensions of the 2D array from the user
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int array[rows][cols];
    vector<int> zeroRows(rows, 0); // To keep track of rows to be zeroed
    vector<int> zeroCols(cols, 0); // To keep track of columns to be zeroed

    // Step 1: Take input for the 2D array
    cout << "Enter the elements of the " << rows << "x" << cols << " matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> array[i][j];
            // Record rows and columns that contain zeroes
            if (array[i][j] == 0) {
                zeroRows[i] = 1;
                zeroCols[j] = 1;
            }
        }
    }

    // Step 2: Set entire row and column to zero based on recorded zero positions
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (zeroRows[i] == 1 || zeroCols[j] == 1) {
                array[i][j] = 0;
            }
        }
    }

    // Step 3: Display the modified matrix
    cout << "Modified matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}