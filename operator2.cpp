#include <iostream>
using namespace std;

class Daku {
private:
    int power;

public:
    Daku(int p) : power(p) {}

    // Overloading the == operator
    bool operator==(const Daku &other) {
        return this->power == other.power;
    }
};

int main() {
    Daku d1(50), d2(50), d3(30);

    if (d1 == d2) {
        cout << "Daku d1 and d2 have the same power!" << endl;
    } else {
        cout << "Daku d1 and d2 have different powers!" << endl;
    }

    if (d1 == d3) {
        cout << "Daku d1 and d3 have the same power!" << endl;
    } else {
        cout << "Daku d1 and d3 have different powers!" << endl;
    }

    return 0;
}
