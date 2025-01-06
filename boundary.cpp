#include<iostream>

using namespace std;

int main()

{
    int rows, cols,sum = 0,sum2=0;

    // Get the dimensions of the 2D array from the user
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int array[rows][cols];
    // int array2 = array[rows][cols];

    // Step 1: Take input for the 2D array
    cout << "Enter the elements of the " << rows << "x" << cols << " matrix :" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> array[i][j];
        }
        cout << endl;
    }

    //   step 2: Display all elements of matrix

    cout << "Display elements of the " << rows << "x" << cols << " matrix :" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    cout<<endl;

    for ( int i = 0; i < rows; i++)
    {
        for ( int j = 0; j < cols; j++)
        {
            if (i==0 || j==0 || i==rows-1 || j==cols-1)
            {
                cout<<array[i][j]<<" ";
                sum2=sum2+array[i][j];
            }

            else
            {
                    cout<<"  ";
            }
        }

        cout<<endl;
    }

    cout<<"Sum of Boundary is: "<<sum2<<endl;
}