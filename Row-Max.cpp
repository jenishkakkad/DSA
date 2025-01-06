#include<iostream>

using namespace std;

int main()

{
    int JR[5][5];

    cout<<"Enter the 5 Elements:"<<endl;

    for ( int i = 0; i < 5; i++)
    {
        for ( int j = 0; j < 5; j++)
        {
            cin>>JR[i][j];
        }
        cout<<endl;
    }

    for ( int i = 0; i < 5; i++)
    {
        for ( int j = 0; j < 5; j++)
        {
            cout<<JR[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<endl;

    for ( int i = 0; i < 5; i++)
    {
        int maxJR=JR[i][0];
        for ( int j = 1; j < 5; j++)
        {
            if (JR[i][j]>maxJR)
            {
                maxJR=JR[i][j];
            }
            
        }
        // cout<<endl;
        cout<<"Row"<<i+1<<"max:"<<maxJR<<endl;
        
    }

    cout<<endl;

    for ( int j = 0; j < 5; j++)
    {
        int maxJR=JR[0][j];
        for ( int i = 1; i < 5; i++)
        {
            if (JR[i][j]>maxJR)
            {
                maxJR=JR[i][j];
            }
            
        }
        // cout<<endl;
        cout<<"Column"<<j+1<<"max:"<<maxJR<<endl;
        
    }
}