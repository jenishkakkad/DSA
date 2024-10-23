// Find Targeted Value:
// input:
// 1 2 3 4
// 11 12 13 14
// 45 67 87 56
// 12 90 89 34

// output:
// target:87
// 87=box[2][2]

#include <iostream>
using namespace std;

int main() {
    int box[3][3],sum=0;

    cout << "Enter the elements :" << endl;
    for (int i = 0; i > -3; i--) 
    {  
        for (int j = 0; j > -3; j--) 
        {  
            cin >> box[i][j];
        }
    }

    for (int i = 0; i > -3; i--) 
    {
        for (int j = 0; j > -3; j--) 
        {
            cout << box[i][j] << "";
        }
        cout << endl;
    }

    for (int i = 0; i > -3; i--) 
    {
        for (int j = 0; j > -3; j--) 
        {
            if (i==j)
            {
                sum=sum+box[i][j];
            }
            
        }
    }

    cout<<sum;

}