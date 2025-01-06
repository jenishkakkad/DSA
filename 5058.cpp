#include<iostream>

using namespace std;

class A
{
    public:
    void x()
    {
        cout<<"I am derived for a class"<<endl;
    }
};

class B
{
    public:
    void y()
    {
        cout<<"I am derived for b class"<<endl;
    }
};

class C
{
    public:
    void z()
    {
        cout<<"I am derived for c class"<<endl;
    }
};

int main()

{
    A s1;
    s1.x();
    s1.y();
    s1.z();
}