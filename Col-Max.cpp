#include<iostream>

using namespace std;

int main()

{
    int JR[3][2]={{1,2},{3,4},{5,6}};

    cout<<"Display 3x2 Matrice is:"<<endl;

    for ( int i = 0; i < 3; i++)
    {
        for ( int j = 0; j < 2; j++)
        {
            cout<<JR[i][j]<<"";
        }

        cout<<endl;
        
    }

    for ( int i= 0; i < 2; i++)
    {
        int max=0;
        for ( int j = 0; j < 3; j++)
        {
            if (max<JR[j][i])
            {
                max=JR[j][i];
            }
            
        }
        cout<<"Col "<<i<<" "<<"max:"<<max<<endl;
        
    }
    
    
}
// cout<<"Maximum number in "<<i<<" "<<"column is "<<max<<endl;