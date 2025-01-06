#include <iostream>
using namespace std;

int main() {
    int num, firstDigit, lastDigit; 
    
    cout << "Enter a number: ";
    cin >> num;

    // Initialize last digit
    lastDigit = num % 10;

    // Initialize first digit same as num
    // firstDigit = num;

    // For loop to find first digit
    for (firstDigit=num; firstDigit >= 10; firstDigit = firstDigit / 10) {
        // Loop continues dividing until firstDigit is less than 10
    }

    // Sum of first and last digit
    int sum = firstDigit + lastDigit;
    cout << "The sum of the first and last digit is: " << sum << endl;

    return 0;
}
