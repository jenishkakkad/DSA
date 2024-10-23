// set 0:
// input:
// 1 2 4
// 3 0 4
// 3 4 5

// output:
// 1 0 4
// 0 0 0
// 3 0 5

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