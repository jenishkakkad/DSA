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

class B : public A
{
    public:
    void y()
    {
        cout<<"I am derived for b class"<<endl;
    }
};

class C : public B
{
    public:
    void z()
    {
        cout<<"I am derived for c class"<<endl;
    }
};

// class C
// {
//     public:
//     void z()
//     {
//         cout<<"I am derived for c class"<<endl;
//     }
// };

int main()

{
    // A s1;
    // B s2;
    // C s3;
    // s1.x();
    // s2.y();
    // s3.z();
    // B s1;

    // s1.x();
    // s1.y();
    // s1.z();

    C s3;

    s3.x();
    s3.y();
    s3.z();

}