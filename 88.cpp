#include <iostream>
#include<string.h>

using namespace std;

class bhoot
{
public:
    char name[100];
    int age;
    float Team;
};

int main()

{
    bhoot dayan,ipl;
    // bhoot ipl;
    ipl.Team = 10;
    strcpy(dayan.name,"Manjulika");
    dayan.age = 20;
    strcpy(ipl.name,"2024 IPL");
    cout<<"Manjulika age is a: "<<dayan.age<<endl;
    cout<<"Name is a: "<<dayan.name<<endl;
    cout<<"Current Season IPL Name is a: "<<ipl.name<<endl;
    cout<<"Ipl Team is a: "<<ipl.Team<<endl;
}