// Create a 2d array
#include <iostream>
using namespace std;

int main() {
    int box[3][4];

    cout << "Enter the elements :" << endl;
    for (int i = 0; i < 3; i++) 
    { 
        for (int j = 0; j < 4; j++) 
        {  
            cin >> box[i][j];
        }
        cout<<endl;
    }

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 4; j++) 
        
        {
            cout << box[i][j] << " ";
        }
        cout << endl;
    }

}