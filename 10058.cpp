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

class C : public A
{
    public:
    void z()
    {
        cout<<"I am derived for c class"<<endl;
    }
};

class D : public A
{
    public:
    void p()
    {
        cout<<"I am derived for D class"<<endl;
    }
};

class E : public A
{
    public:
    void q()
    {
        cout<<"I am derived for E class"<<endl;
    }
};

class F : public A
{
    public:
    void r()
    {
        cout<<"I am derived for F class"<<endl;
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

    F s3;
    E s4;
    B s5;
    C s6;
    D s7;
   
    s3.x();
    // s3.y();
    // s3.z();
    // s3.p();
    // s3.q();
    s5.y();
    s6.z();
    s7.p();
    s4.q();
    s3.r();

    // s4.x();
    // s4.y();
    // s4.z();
    // s4.p();
    // s4.q();
    // s4.r();
}