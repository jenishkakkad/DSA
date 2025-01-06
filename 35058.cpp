#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Step 1: Declare a vector
    vector<int> numbers;

    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Step 2: Check if the vector is empty
    if (numbers.empty()) {
        cout << "The vector is empty." << endl;
    }

    

    // Step 3: Add elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);

    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Step 4: Check if the vector is empty again
    if (!numbers.empty()) {
        cout << "The vector is not empty." << endl;
    }

    // Step 5: Clear the vector
    numbers.clear();

    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Step 6: Check if the vector is empty after clearing
    if (numbers.empty()) {
        cout << "The vector is empty after clearing." << endl;
    }

    return 0;
}
