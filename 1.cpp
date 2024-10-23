// CRUD OPERATION
#include <iostream>

using namespace std;

int main()

{
    int N;

    cout << "Enter the size of array: ";
    cin >> N;

    int a[N];

    for (int i = 0; i < N; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    int user;
    do
    {
        cout << "Enter a number..." << endl;
        cout << "Option 1: Insert" << endl;
        cout << "Option 2: Update" << endl;
        cout << "Option 3: View" << endl;
        cout << "Option 4: Delete" << endl;
        cout << "Option 0: Exit" << endl;
        cin >> user;

        switch (user)
        {
        case 1:
        {
            int p,v;

            cout<<"Enter the Position:";
            cin>>p;
            cout<<"Enter the Value:";
            cin>>v;
            for (int i = N + 1; i > N; i--)
            {
                a[i] = a[i - 1];
            }
            a[p] = v;
            break;
        }

        case 2:
        {
            int poz,up;

            cout<<"Enter the position:";
            cin>>poz;
            cout<<"Enter the Update value:";
            cin>>up;

            for (int i = poz; i < N; i++)
            {
                a[poz] = up;
            }
            break;
        }

        case 3:
        {
            cout << "Array contents: ";
            for (int e : a)
            {
                cout << e << " ";
            }
            cout << endl;
            break;
        }
        
        case 4:
        {
            break;
        }
    
    default:
        cout << "Exiting program." << endl;
    }

    }

while (user != 0);

}