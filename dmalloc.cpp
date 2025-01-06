#include<iostream>

using namespace std;

class Myclass
{
    public:
    Myclass(int size)
    {
        arr = new int[size];
        this->size = size;
    }

    ~Myclass()
    {
        delete[] arr;
    }

    private:
    int* arr;
    int size;
};

int main()

{
//     int size;
//   cout<<"Enter size: ";
//   cin>>size;

// Myclass s4(5);


}