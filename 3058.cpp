#include<iostream>
using namespace std;
#include<string.h>

class daku
{
  public:
  char name[100];
  int age;
  

 daku(int age,char name[])  
 {
     this->age=age;
     strcpy(this->name,name);
     cout<<"daku ni age: "<<age<<endl;
     cout<<"daku nu naam: "<<name<<endl;
 } 


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

   daku s1(5,"hello");
   daku s2 = s1;
}