#include<iostream>

using namespace std;

class animal
{
    public:
    float sum(float x,float y)
    {
        cout<<x+y<<endl;
    }

    int sum(int x,float y)
    {
        cout<<x-y<<endl;
    }
    
};

int main()
{
    animal obj1;
    obj1.sum(5.8f,4.9);
    obj1.sum(5,5.8);

}