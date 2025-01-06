#include<iostream>

using namespace std;

template <typename T>


T add(T x,T y)
{
   return x + y;
//    cout<<add();
}

int main()
{
  float result =  add<float>(5,3.5);
  cout<<result;

    
}