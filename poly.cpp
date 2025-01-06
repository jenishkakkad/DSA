#include<iostream>

using namespace std;

class daku
{
  public:
  void chaku()
  {
    cout<<"hu khooni chu"<<endl;
  }

//   void chaku(int n)
//   {
//     cout<<"hu khooni chu"<< n<<endl;
//   }


};

class bavo : public daku
{
  public:
  void chaku()
  {
    cout<<"hu khooni chu...khai jays"<<endl;
    daku s6;
    s6.::daku;
  }

//   void chaku(int n)
//   {
//     cout<<"hu khooni chu"<< n<<endl;
//   }
};

int main()

{
   bavo s4;
   s6.daku()
   s4.chaku();
}