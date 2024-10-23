// A[3][3]=
// {
//     {1,3,10},
//     {12,15,20},
//     {56,73,21}
// };

// Max value=73
// po=A[2][1]

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