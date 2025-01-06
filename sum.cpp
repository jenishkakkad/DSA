#include <iostream>
using namespace std;

int sum(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n + sum(n - 1);
    }
}

int sum2(int n)
{
    if (n<=1)
    {
        return 1;
    }

    else
    {
        return n+sum(n-1);
    }
    
}

int main() {
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    cout << "Sum of numbers from " << n << " to 1 is: " << sum(n) << endl;
    


// 2 ji rit





   int N;
   cout<<"Enter the Number:";
   cin>>N;

   cout<<""<<sum2(N);

   return 0;


}