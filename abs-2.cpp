#include<iostream>

using namespace std;

class Ekta
{
   public:
   virtual void papakiekta() = 0;
};

class chokri : public Ekta
{
    public:
    void papakiekta()
    {
        cout<<"Mein Papa ki ekta hoon";
    }
};

int main()

{
   chokri s4;
   s4.papakiekta();
}