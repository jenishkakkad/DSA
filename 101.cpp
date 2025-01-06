#include<iostream>

using namespace std;

int main()

{
    int N=5;
    int array[]={4,1,5,2,3};

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

    for ( int i= 0; i < N; i++)
    {
        cout<<array[i]<<"";
    }
    
    
}