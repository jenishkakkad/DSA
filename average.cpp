#include <iostream>
using namespace std;

// Function to calculate the average of two numbers
float calculateAverage(float num1, float num2) {
    return (num1 + num2) / 2.0;
}

float calculateAverage2(float N1, float N2) {
    return (N1 + N2) / 2.0;
}

int main() {
    cout << calculateAverage(10.0, 20.0) << endl; // Output: 15
    cout << calculateAverage(5.5, 7.5) << endl;   // Output: 6.5
    
    float N1,N2;

    cout << "Enter the first number: ";
    cin >> N1;  // Read the first number from the user

    // Prompt the user to enter the second number
    cout << "Enter the second number: ";
    cin >> N2;  // Read the second number from the user

    // Calculate the average and display it
    cout << "The average is: " << calculateAverage2(N1, N2) << endl;

    return 0;  // End of the program
}