#include <iostream>
using namespace std;

class Example
{
private:
    int privateData;

public:
    void setPrivateData(int value)
    {
        this->privateData = value;
    }

    Example *getPrivateData()
    {
        cout << privateData << endl;
        return this; 
    }
};

int main()
{
    Example obj,kl;
    obj.setPrivateData(10);
    Example *hj = obj.getPrivateData();

    // hj->getPrivateData();

    
    // hj->setPrivateData(20);
    // hj->getPrivateData();

    // obj.setPrivateData(50);
    // obj.getPrivateData();



   
}