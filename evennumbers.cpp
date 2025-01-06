#include <iostream>
using namespace std;

// Function to display even numbers from the array
void displayEvenNumbers(int arr[], int size) {
    cout << "Even numbers in the array: ";
    for (int i = 0; i < size; i++) {
        // Check if the number is even
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " "; // Print the even number
        }
    }
    cout << endl; // Move to the next line after displaying all even numbers
}

void displayEvenNumbers2(int arr[], int size) {
    cout << "Even numbers in the array: ";
    for (int i = 0; i < size; i++) {
        // Check if the number is even
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " "; // Print the even number
        }
    }
    cout << endl; // Move to the next line after displaying all even numbers
}

int main() {
    // Example 1
    int arr1[] = {1, 2, 3, 4, 5};
    displayEvenNumbers(arr1, 5); // Output: 2 4

    // Example 2
    int arr2[] = {10, 15, 20, 25};
    displayEvenNumbers(arr2, 4); // Output: 10 20

    int size; // Variable to store the size of the array

    // Take size of the array as input from the user
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr3[size]; // Declare the array with the given size

    // Take array elements as input from the user
    cout << "Enter " << size << " elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr3[i]; // Input each element of the array
    }

    // Call the function to display even numbers
    displayEvenNumbers(arr3, size); 

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr4[size];

    cout << "Enter " << size << " elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr4[i]; // Input each element of the array
    }

    // Call the function to display even numbers
    displayEvenNumbers(arr4, size);

    return 0; // End of the program
}