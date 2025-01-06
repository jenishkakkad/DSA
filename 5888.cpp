#include<iostream>

using namespace std;

template <typename T1,typename T2>


T2 add(T1 x,T2 y)
{
   return x + y;
//    cout<<add();
}

int main()
{
  float result =  add<int,float>(5,3.5);
  cout<<result;

    
}