#include <iostream>
#include <vector>
// #include <algorithm> // For std::reverse
using namespace std;

int main() {
    // Step 1: Initialize the vector
    vector<int> numbers = {10, 20, 30, 40, 50};

    // Step 2: Display the original vector
    cout << "Original vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Step 3: Reverse the vector using std::reverse
    reverse(numbers.begin(), numbers.end());

    // Step 4: Display the reversed vector
    cout << "Reversed vector using std::reverse: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Step 5: Reverse the vector manually
    int n = numbers.size();
    for (int i = 0; i < n / 2; i++) {
        swap(numbers[i], numbers[n - i - 1]);
    }

    // Step 6: Display the manually reversed vector
    cout << "Reversed vector manually: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
