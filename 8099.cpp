#include<iostream>

using namespace std;

int main()

{
  int a=1,b=10;

  JR:

  if (a<=10)
  {
    cout<<a<<" ";
    a++;
    // goto JR;
  }

  cout<<endl;

  cout<<"----------------------------------------"<<endl;

  if (b>=1)
  {
    cout<<b<<" ";
    b--;
    // goto JR;
  }
  

}