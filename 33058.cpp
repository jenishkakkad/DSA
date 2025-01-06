#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Step 1: Declare and initialize a vector
    vector<int> numbers = {10, 20, 30, 40, 50};

    // Step 2: Display the original size of the vector
    cout << "Original size of the vector: " << numbers.size() << endl;

    // Step 3: Add an element to the vector
    numbers.push_back(60);
    cout << "Size of the vector after adding an element: " << numbers.size() << endl;

    // Step 4: Remove an element from the vector
    numbers.pop_back();
    cout << "Size of the vector after removing an element: " << numbers.size() << endl;

    return 0;
}
