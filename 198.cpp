#include<iostream>
using namespace std;
#include<string.h>

class daku
{
  public:
  char name[100];
  int age;
  char hathiyar[100];

  void setter(char name[],int age,char hathiyar[])
  {
    strcpy(this->name,name);
    this->age = age;
    strcpy(this->hathiyar,hathiyar);
  }

  void getter()
  {
    cout<<"apdo pelo daku: "<<name<<endl;
    cout<<"pela daku ni age: "<<age<<endl;
    cout<<"pela daku nu specific hathiyar: "<<hathiyar<<endl;
  }

  daku * back()
  {
     return this;
  }
};

int main()

{
    daku mangalsingh,gabbarsingh;
    daku *mukembo;
    mukembo = mangalsingh.back();
    mangalsingh.setter("Jenish",19,"JR");
    mangalsingh.getter();
    gabbarsingh.setter("gabbarsingh",40,"chaku");
    gabbarsingh.getter();
    mukembo->getter();
}