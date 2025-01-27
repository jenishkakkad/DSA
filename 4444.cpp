#include<iostream>
using namespace std;

class animal
{
    public:
    // Function to sum two floats
    float sum(float x, float y)
    {
        return x + y;
    }

    // Function to subtract a float from an int
    float sum(int x, float y)
    {
        return x - y;
    }
};

int main()
{
    animal obj1;

    // Call the first overloaded sum function
    cout << obj1.sum(5.8f, 4.9f) << endl; // Passing floats explicitly

    // Call the second overloaded sum function
    cout << obj1.sum(5, 5.8f) << endl;    // Passing int and float explicitly

    return 0;
}
