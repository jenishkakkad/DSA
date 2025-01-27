#include<iostream>

using namespace std;

class daku
{
  public:
  void chaku()
  {
    cout<<"hu khooni chu"<<endl;
  }

  void chaku(int n)
  {
    cout<<"hu khooni chu..and hu khai jays"<< n<<endl;
  }
};

int main()

{
   daku s1;
   s1.chaku();
//    s1.chaku(1);
s1.chaku(5);
}