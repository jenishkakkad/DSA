#include<iostream>
using namespace std;
#include<string.h>

class daku
{
  public:
//   char name[100];
static int age;

static void gh()
{
  cout<<"Static age: "<<age<<endl;
}
  // static void gh()
  // {
  //   int age=20;
  // }
//   char hathiyar[100];

//   void setter(char name[],int age,char hathiyar[])
//   {
//     strcpy(this->name,name);
//     this->age = age;
//     strcpy(this->hathiyar,hathiyar);
//   }

//   void getter()
//   {
//     cout<<"apdo pelo daku: "<<name<<endl;
//     cout<<"pela daku ni age: "<<age<<endl;
//     cout<<"pela daku nu specific hathiyar: "<<hathiyar<<endl;
//   }

//   daku * back()
//   {
//      return this;
//   }
};


int daku::age=20;

int main()

{
    // daku mangalsingh,gabbarsingh;
    // daku *mukembo;
    // mukembo = mangalsingh.back();
    // mangalsingh.setter("Jenish",19,"JR");
    // mangalsingh.getter();
    // gabbarsingh.setter("gabbarsingh",40,"chaku");
    // gabbarsingh.getter();
    // mukembo->getter();
    cout<<daku::age<<endl;
    daku::gh();
}