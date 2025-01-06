#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Get the dimensions of the 2D array from the user
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int array[rows][cols];

    // Step 1: Take input for the 2D array
    cout << "Enter the elements of the " << rows << "x" << cols << " matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> array[i][j];
        }
        cout<<endl;
    }

    //   step 2: Display all elements of matrix

    cout <<"Display elements of the " << rows <<"x" << cols << " matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout<< array[i][j]<<"\t";
        }
        cout<<endl;
    }

    // Step 3: Sort each row using bubble sort
    for (int i = 0; i < rows; i++) {  // Loop through each row
        for (int j = 0; j < cols - 1; j++) {  // Loop through each element in the row
            for (int k = 0; k < cols - j - 1; k++) {  // Perform bubble sort within the row
                if (array[i][k] > array[i][k + 1]) {
                    // Swap if the current element is greater than the next
                    int temp = array[i][k];
                    array[i][k] = array[i][k + 1];
                    array[i][k + 1] = temp;
                }
            }
        }
    }

    // Step 4: Display the sorted 2D array
    cout << "\nSorted matrix with each row in ascending order:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}