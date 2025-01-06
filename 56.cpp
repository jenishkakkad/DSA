// passing by value
// #include<iostream>

// using namespace std;

// void addition(int a,int b)
// {
//     cout<<"Addition is"<<a+b;
// }

// int main()

// {
//     addition(5,3);
// }

// passing by variable

// #include<iostream>

// using namespace std;

// void addition(int a,int b)
// {
//     cout<<"Addition is"<<a+b;
// }

// int main()

// {
//     int x=5;
//     int y=3;
//     addition(x,y);
// }

#include<iostream>

using namespace std;

void addition(int &a)
{
    // int x=5;
    // int y=3;

    

     a = a+10;
     cout<<a<<endl;

}

int main()

{
    int x=5;
    // int y=3;
    cout<<x<<endl;
     addition(x);

    cout<<x<<endl;
    // cout<<x<<endl;
    // cout<<a<<endl;
    // cout<<x<<"and"<<y;
}

// #include<iostream>

// using namespace std;

// void addition(int n)
// {
//   n=n+10;
// }

// int main()

// {
//     int a=5;
//     cout<<a<<endl;
//     addition(a);
//     cout<<a<<endl;
// }

// constant
// crud
// continue
// goto
// break
// pattern
// sathiyo
// jalebi

// passing a pointer

// #include<iostream>

// using namespace std;

// void addition(int a,int b)
// {
//     cout<<"Addition is"<<a+b;
// }

// int main()

// {
//     int x=5;
//     int y=3;
//     addition(x,y);
// }