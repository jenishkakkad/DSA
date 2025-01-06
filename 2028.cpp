#include <iostream>
#include <string.h> 

using namespace std;

class Daru {
  public:
    char name[100];
    int price;

    void display(char name[100], int money) {
        name = naam;
        price = money;

        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Daru JK;

    JK.display("Whiskey", 5000);

    return 0;
}