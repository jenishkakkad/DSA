#include <iostream>
#include <algorithm> // For the sort function
using namespace std;

int main() {
    int matrix[4][4];

    // Step 1: User input for the 4x4 matrix
    cout << "Enter the elements of a 4x4 matrix:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matrix[i][j];
        }
        cout<<endl;
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout<< matrix[i][j];
        }
        cout<<endl;
    }

    // Step 2: Sort each row in ascending order
    for (int i = 0; i < 4; i++) {
        sort(matrix[i], matrix[i] + 4); // Sorting each row
    }

    // Step 3: Display the sorted matrix
    cout << "\nMatrix with each row sorted:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

}