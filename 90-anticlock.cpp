#include<iostream>

using namespace std;

int main()

{
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

    // step 3: Rotate Matrix by 90 degrees:

    cout << "Rotate Matrix by 90 degrees:" << endl;
    for (int  i = 0; i < rows; i++)
    {
        for ( int j = cols-1; j >= 0; j--)
        {
            cout << array[i][j] << "\t";
        }
        cout << endl;
        
    }
    
}