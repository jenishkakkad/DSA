#include<iostream>
using namespace std;
#include<string.h>

class daku
{
  public:
  char name[100];
  int age;
  char hathiyar[100];

 ~daku()  
 {
    this->age=20;
    cout<<age<<endl;
 } 

//  ~daku()
//  {
//      cout<<"Kunj Sir";
//  }

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

   daku s1;
   daku s2;
}