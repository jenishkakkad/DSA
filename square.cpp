#include <iostream>
using namespace std;

// Global variable
int number = 4; // Example value to be squared
int N;

// Function to return the square of the global variable
int getSquare() {
    return number * number; // Calculate square
}

int getSquare2() {
    return N * N; // Calculate and return the square
}

int main() {
    cout << "Square of " << number << " is: " << getSquare() << endl; // Output the result
    
    cout << "Enter a number: ";
    cin >> N; // Take input from the user

    cout << "Square of " << N << " is: " << getSquare2() << endl; // Output the result
    return 0;
}