#include<iostream>

using namespace std;

int main()

{
    int N;

    cout<<"Enter the size of the array:";
    cin>>N;

    int array[N];

    for ( int i= 0; i < N; i++)
    {
        cin>>array[i];
        cout<<endl;
    }

    for ( int i= 0; i < N; i++)
    {
        cout<<array[i];
        cout<<endl;
    }

    for ( int i = 0; i < N-1; i++)
    {
        for ( int j = 0; j < N-i-1; j++)
        {
            if (array[j]>array[j+1])
            {
                swap(array[j],array[j+1]);
            }
            
        }
        
    }

    cout<<endl;

    for ( int i= 0; i < N; i++)
    {
        cout<<array[i]<<"";
        cout<<endl;
    }
    
    
}