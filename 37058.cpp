#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Step 1: Declare and initialize a vector
    vector<int> numbers = {10, 20, 30, 40, 50};

    // Step 2: Access elements using the at() method
    cout << "Element at index 0: " << numbers.at(0) << endl;
    cout << "Element at index 2: " << numbers.at(2) << endl;

    // Step 3: Modify an element using at()
    numbers.at(1) = 25; // Change the element at index 1
    cout << "After modification, element at index 1: " << numbers.at(1) << endl;

    // Step 4: Attempt to access an out-of-bounds index
    try {
        cout << "Accessing an out-of-bounds index: " << numbers.at(5) << endl;
    } catch (const out_of_range& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
