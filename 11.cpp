// A[3][3]=
// {
//     {1,2,3},
//     {4,5,6},
//     {7,8,9}
// };
// A[3][3]=
// {
//     {7,4,1},
//     {8,5,2},
//     {9,6,3}
// };

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