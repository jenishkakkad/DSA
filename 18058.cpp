#include<iostream>
#include<vector>

using namespace std;

int main()

{
  vector<int> v{1,2,3,4,5};

  v.pop_back();

  for (int  i = 0; i < v.size(); i++)
  {
    cout<<v[i]<<endl;
  }
  
}