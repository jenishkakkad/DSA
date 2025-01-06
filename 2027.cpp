#include <iostream>
#include <string> // For strcpy

using namespace std;

class Daru {
  public:
    char name[100];
    int price;

    void display( char naam[100], int money) {
    
        strcpy(name, naam);
        price = money;

       
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Daru JK;

  
    JK.display("Whiskey", 5000);

  
}
