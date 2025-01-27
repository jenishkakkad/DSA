#include<iostream>
using namespace std;

class daku
{
  public:
  void chaku()
  {
    cout << "Hu khooni chu" << endl;
  }

  void chakuDetail()
  {
    cout << "Hu khooni chu..and hu khai jays" << endl;
  }
};

int main()
{
   daku s1;
   s1.chaku();         // Calls the first method
   s1.chakuDetail();   // Calls the second method
}
