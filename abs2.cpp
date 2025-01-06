#include<iostream>

using namespace std;

class Ekta
{
   public:
   virtual void papakiekta() = 0;
   virtual void mummykiekta() = 0;
};

class girl : public Ekta
{
  public:
  void papakiekta()
  {
    cout<<"Mein Papa ki Ekta hoon"<<endl;
  }
};

class chokri : public girl
{
  public:
  void mummykiekta()
  {
    cout<<"Mein mummy ki Ekta hoon"<<endl;
  }
};

int main()

{
   chokri s4;
   s4.papakiekta();
   s4.mummykiekta();
}