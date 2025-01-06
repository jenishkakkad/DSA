#include <iostream>

using namespace std;

int main()

{
    int rows, cols, Diagonal = 0, Antdiagonal = 0, sum = 0;

    // Get the dimensions of the 2D array from the user
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int array[rows][cols];
    // int array2 = array[rows][cols];

    // Step 1: Take input for the 2D array
    cout << "Enter the elements of the " << rows << "x" << cols << " matrix :" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> array[i][j];
        }
        cout << endl;
    }

    //   step 2: Display all elements of matrix

    cout << "Display elements of the " << rows << "x" << cols << " matrix :" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Display elements of the " << rows << "x" << cols << " matrix are column vise :" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << array[j][i] << "\t";
        }
        cout << endl;
    }

    // step 3: Rotate Matrix by 90 degrees:

    int JK;

    cout << "Reverse element of the matrix for the each row are :" << endl;
    for (int pkl = 0; pkl < rows; pkl++)
    {
        for (int ipl = rows - 1; ipl >= 0; ipl--)
        {
            JK = array[pkl][ipl];
            cout << JK << "\t";
        }
        cout << endl;
    }

    // cout<<array[rows][cols];

    cout << endl;

    // for (int  i = 0; i < rows; i++)
    // {
    //     for ( int j = rows-1; j >= 0; j--)
    //     {
    //         // JK =  array[i][j];
    //         cout<<array[i][j]<<"\t";

    //     }
    //     cout << endl;

    // }

    // cout<<JK;

   
        // for (int j = rows-1; j >= 0; j--)
        // {

        //     for (int ipl = 0; ipl < cols; ipl++)
        //     {
        //         // ipl=j;
        //         JK = array[j][ipl];
        //         cout << JK << "\t";
        //         // if (i == ipl)
        //         // {
        //         //     Antdiagonal = Antdiagonal + array[i][ipl];
        //         // }
        //     }
        //     cout << endl;
        // }
        // cout << endl;

        for ( int i = rows-1; i >= 0; i--)
        {
            for ( int j = 0; j < cols; j++)
            {
                // if (i==j)
                // {
                //     cout<<a
                // }
                cout<<array[i][j]<<"\t";
                
            }
            cout<<endl;
            
        }
        
    

    cout << endl;

    for ( int i = rows-1; i >= 0; i--)
        {
            for ( int j = 0; j < cols; j++)
            {
                if (i==j)
                {
                    Antdiagonal=Antdiagonal+array[i][j];
                }
                // cout<<array[i][j];
                
            }
            // cout<<endl;
            
        }

        cout<<array[1][0];

        cout<<endl;

    cout << "Sum of Antidiagonal elements in this matrix are: " << Antdiagonal;

    cout << endl;

    cout << "Rotate matrix by 90 degree are:" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = rows - 1; j >= 0; j--)
        {
            cout << array[j][i] << "\t";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Flip of this array are:" << endl;

    for (int i = rows - 1; i >= 0; i--)
    {
        for (int j = cols - 1; j >= 0; j--)
        {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == j)
            {
                Diagonal = Diagonal + array[i][j];
            }
        }
    }

    cout << "Sum of Diagonal elements in this matrix are: " << Diagonal;

    // cout<<sum;

    cout << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            // if (i==j)
            // {
            //     sum=sum+array[i][j];
            // }
            sum = sum + array[i][j];
        }
    }

    cout << "Sum of all elements are the matrix are :" << sum << endl;

    // for (int  i = 0; i < rows; i++)
    // {
    //     for ( int j = 0; j < cols; j++)
    //     {
    //         if (i+j<2 && i+j>0)
    //         {
    //             Antdiagonal=Antdiagonal+array[i][j];
    //         }

    //     }
    // }

    // for (int  i = 0; i < rows; i++)
    // {
    //     for ( int j = rows-1; j >= 0; j--)
    //     {
    //         // if (i==j)
    //         // {
    //         //     Antdiagonal=Antdiagonal+JK;
    //         // }
    //         // cout<<array[i][j];
    //         // if (i==j)
    //         // {
    //         //     Antdiagonal=Antdiagonal+array[i][j];
    //         // }
    //         cout<<array2[i][j];

    //     }
    //     cout<<endl;
    // }

    for (int i = 0; i < rows; i++)
    {
        for (int j = cols; j < cols; j++)
        {
            // if (i==j)
            // {
            //     Antdiagonal=Antdiagonal+JK;
            // }
            // cout<<array[i][j];
            // if (i==j)
            // {
            //     Antdiagonal=Antdiagonal+array[i][j];
            // }
            // cout<<JK;
        }
        cout << endl;
    }

    // cout << "Sum of Antidiagonal elements in this matrix are: " << Antdiagonal;

    cout << endl;

    for (int i = 0; i < rows; i++)
    {
        int maxJR = array[i][0];
        for (int j = 1; j < cols; j++)
        {
            if (array[i][j] > maxJR)
            {
                maxJR = array[i][j];
            }
        }
        // cout<<endl;
        cout << "Row" << i + 1 << "max:" << maxJR << endl;
    }

    cout << endl;

    for (int j = 0; j < cols; j++)
    {
        int maxJR = array[0][j];
        for (int i = 1; i < rows; i++)
        {
            if (array[i][j] > maxJR)
            {
                maxJR = array[i][j];
            }
        }
        // cout<<endl;
        cout << "Column" << j + 1 << "max:" << maxJR << endl;
    }

    // cout<<endl;

    // int i,j;

    // for ( int i = 0; i < rows; i++)
    // {
    //     int maxJR=array[i][0];
    //     for ( int j = 1; j < cols; j++)
    //     {
    //         if (array[i][j]>maxJR)
    //         {
    //             maxJR=array[j][i];
    //         }

    //     }
    //     // cout<<endl;
    //     cout<<"Column"<<i+1<<"max:"<<maxJR<<endl;

    // }
    // for ( int i = 0; i < rows; i++)
    // {
    //     for ( int j = 0; j < cols; j++)
    //     {
    //         cout<<JK;
    //     }
    //     cout<<endl;

    // }

    // for (int  i = 0; i < rows; i++)
    // {
    //     for ( int j = rows-1; j >= 0; j--)
    //     {
    //         // JK =  array[i][j];
    //         // cout<<array[i][j]<<"\t";
    //         cout<<JK;

    //     }
    //     cout << endl;

    // }

    cout<<endl;

    
    
    for ( int i = 0; i < rows; i++)
    {
        for ( int j= 0; i < cols; i++)
        {
            if (array[i][j]==0)
            {
                for ( int k = 0; k < rows; k++)
                {
                    cout<<array[i][k]=0;
                // for ( int k = 0; k < rows; k++)array[k][j]=0;
            }
            
        }
        
    }

    for ( int i = 0; i < rows; i++)
    {
        for ( int j= 0; i < cols; i++)
        {
            cout<<array[i][j]; 
        }
    }
}