#include <iostream>
#include <cstring>
using namespace std;

class daku {
public:
    char name[100];
    int age;
    char hathiyar[100];

    void setter(char name[], int age, char hathiyar[]) {
        strcpy(this->name, name);
        this->age = age;
        strcpy(this->hathiyar, hathiyar);
    }

    daku* getter() {
        cout << "Daku's name: " << name << endl;
        cout << "Daku's age: " << age << endl;
        cout << "Daku's weapon: " << hathiyar << endl;
        return this;
    }
};

int main() {
    daku mangalsingh, gabbarsingh;
    daku* mukembo;

    // Set and get values for mangalsingh
    mangalsingh.setter("Mangalsingh", 35, "Sword");
    mukembo = mangalsingh.getter();

    // Set and get values for gabbarsingh
    gabbarsingh.setter("Gabbarsingh", 40, "Knife");
    gabbarsingh.getter();

    // Mukembo still points to mangalsingh
    mukembo->getter();

    return 0;
}
