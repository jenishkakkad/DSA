#include<iostream>
using namespace std;
// #include<string.h>

class daku
{
  public:
  char name[100];
  int age;
  char hathiyar[100];

  void setter()
  {
    // strcpy(this->name,name);
    // this->age = age;
    // strcpy(this->hathiyar,hathiyar);

    cout<<"name: ";
    cin>>name;
    cout<<"age: ";
    cin>>age;
    cout<<"hathiyar: ";
    cin>>hathiyar;
  }

  void getter()
  {
    // cout<<"apdo pelo daku: "<<name<<endl;
    // cout<<"pela daku ni age: "<<age<<endl;
    // cout<<"pela daku nu specific hathiyar: "<<hathiyar<<endl;
    cout<<"Name of the daku: "<<name<<endl;
    cout<<"Name of the age: "<<age<<endl;
    cout<<"Name of the hathiyar: "<<hathiyar<<endl;
  }

//   daku * back()
//   {
//      return this;
//   }
};

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

    int N;
    cout<<"Enter the array of size: ";
    cin>>N;

    daku ekta[N];

    for ( int i = 0; i < N; i++)
    {
         ekta[i].setter();
    }

    for ( int i = 0; i < N; i++)
    {
         ekta[i].getter();
    }
    
}