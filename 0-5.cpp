#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int array[rows][cols];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> array[i][j];
        }
    }

    // Traverse matrix to zero rows and columns immediately when zero is found
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (array[i][j] == 0) {
                // Set entire row to zero
                for (int k = 0; k < cols; k++)
                {
                    cout<<array[i][k]=0;
                }
                
                // Set entire column to zero
                for (int k = 0; k < rows; k++)
                {
                    cout<<array[k][j]=0;
                }
            }

            else
            {
                cout<<array[i][j];
            }
        }
        cout<<endl;
    }

    return 0;
}