// Make a two 2d array and sum of them stored in another 2d array.
#include <iostream>
using namespace std;

int main() {
    int Row, Col;

    cout << "Enter the Rows: ";
    cin >> Row;
    cout << "Enter the Cols: ";
    cin >> Col;

    int array[Row][Col];
    int array2[Row][Col];
    int sumarray[Row][Col];

    cout << "Enter elements of the first array: "<<endl;
    for (int i = 0; i < Row; i++) 
    {
        for (int j = 0; j < Col; j++) 
        {
            cin >> array[i][j];
        }
        cout<<endl;
    }

    cout << "Display the elements of a first array:"<<endl;

    for (int i = 0; i < Row; i++) 
    {
        for (int j = 0; j < Col; j++) 
        {
            cout<< array[i][j];
        }
        cout<<endl;
    }

    // cout<<endl;

    cout << "Enter elements of the second array: "<<endl;
    for (int i = 0; i < Row; i++) 
    {
        for (int j = 0; j < Col; j++) 
        {
            cin >> array2[i][j];
        }
        cout<<endl;
    }


    cout << "Display the elements of a second array:"<<endl;

    for (int i = 0; i < Row; i++) 
    {
        for (int j = 0; j < Col; j++) 
        {
            cout<< array2[i][j];
        }
        cout<<endl;
    }

    // cout<<endl;

    for (int i = 0; i < Row; i++) 
    {
        for (int j = 0; j < Col; j++) 
        {
            sumarray[i][j] = array[i][j] + array2[i][j];
        }
    }

    cout << "Sum of the two array"<<endl;
    for (int i = 0; i < Row; i++) {
        for (int j = 0; j < Col; j++) {
            cout << sumarray[i][j] << " ";
        }
        cout << endl;
    }


}