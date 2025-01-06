#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Step 1: Declare and initialize a vector
    vector<int> numbers = {10, 20, 30, 40, 50};

    // Step 2: Display the vector's contents
    cout << "Original vector: ";
    for (int num : numbers) 
    {
        cout << num << " ";
    }

    cout << endl;

    // Step 3: Clear the vector
    numbers.clear();

    // Step 4: Check the size of the vector after clearing
    cout << "Size of vector after clear(): " << numbers.size() << endl;

    // Step 5: Display the vector's contents after clearing
    if (numbers.empty()) 
    {
        cout << "The vector is now empty." << endl;
    }

    return 0;
}
