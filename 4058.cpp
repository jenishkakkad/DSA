#include <iostream>
using namespace std;
#include <string.h>

class daku
{
public:
    char name[100];
    int age;

     daku()
     {
         cout<<"Age: ";
         cin>>this->age;
         cout<<"Daku ni Age = "<<this->age;
         cout<<"Name: ";
         cin>>this->name;
         cout<<"Daku nu Naam = "<<this->name;
        //  strcpy(this->name,name);
        //  cout<<"daku ni age: "<<age<<endl;
        //  cout<<"daku nu naam: "<<name<<endl;
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

    //    daku s1(5,"hello");
    //    daku s2(10,"hello");
    //    daku s3(15,"hello");

    daku s1;

    int N;
    cout << "Enter the array of size: ";
    cin >> N;

    daku s1[N];
}