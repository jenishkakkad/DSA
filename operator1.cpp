#include <iostream>
using namespace std;

class Daku {
private:
    int power; // Represents the "power" of the Daku

public:
    // Constructor
    Daku(int p = 0) : power(p) {}

    // Overloading the + operator
    Daku operator+(const Daku &other) {
        Daku temp;
        temp.power = this->power + other.power; // Add the powers
        return temp;
    }

    // Function to display the power of the Daku
    void display() {
        cout << "Daku's power: " << power << endl;
    }
};

int main() {
    Daku d1(10), d2(20); // Two Daku objects with different powers

    Daku d3 = d1 + d2; // Calls the overloaded + operator

    d1.display();
    d2.display();
    d3.display(); // Displays the combined power of d1 and d2

    return 0;
}
