#include <iostream>
using namespace std;

int main() {
    int N;

    // Step 1: Take input for the size of the matrix
    cout << "Enter the size of the matrix (N): ";
    cin >> N;

    // Step 2: Declare a 2D array
    int matrix[N][N];

    // Step 3: Input values for the matrix
    cout << "Enter elements of the matrix row by row:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    // Step 4: Display the matrix
    cout << "The " << N << " x " << N << " matrix is:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl; // Move to the next row
    }

    return 0;
}
