#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Step 1: Declare and initialize a vector
    vector<int> numbers = {10, 20, 30, 40, 50};

    // Step 2: Display the original vector
    cout << "Original vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Step 3: Insert an element at the beginning using begin()
    numbers.insert(numbers.begin(), 5);
    cout << "After inserting 5 at the beginning: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Step 4: Insert an element at the end using end()
    numbers.insert(numbers.end(), 60);
    cout << "After inserting 60 at the end: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Step 5: Display the size of the vector
    cout << "Final size of the vector: " << numbers.size() << endl;

    return 0;
}
