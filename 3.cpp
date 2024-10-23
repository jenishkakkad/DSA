// create a 2d array and find the sum of all elements for a given 2d array
#include <iostream>
using namespace std;

int main() {
    int box[5][5];
    float sum=0,Ans;
    
    cout << "Enter the elements :" << endl;
    for (int i = 0; i < 5; i++) 
    {  
        for (int j = 0; j < 5; j++) 
        {  
            cin >> box[i][j];
        }
        cout<<endl;
    }

    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            cout << box[i][j] << "";
        }
        cout << endl;
    }

    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            sum=sum+box[i][j];
        }
    }

    cout << "sum is:"<<sum << endl;

}