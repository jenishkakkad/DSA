#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Step 1: Create a vector and initialize it with some values
    vector<int> numbers = {10, 20, 30, 40, 50};

    // Step 2: Display the original vector
    cout << "Original vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Step 3: Erase the element at index 2 (third element, 30)
    numbers.erase(numbers.begin() + 2);

    // Step 4: Display the updated vector
    cout << "Vector after erasing the element at index 2: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
