#include<iostream>
using namespace std;
#include<string.h>

class daku
{
  public:
//   char name[100];
static char Name[100];

static void gh()
{
  cout<<"Name: "<<Name<<endl;
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


 char daku::Name[] = "kunj";

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
    cout<<daku::Name<<endl;
    daku::gh();
}