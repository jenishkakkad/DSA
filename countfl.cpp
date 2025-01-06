// w.a.p. to input a number and print the sum of first and last digit of the given a number.

#include <iostream>
using namespace std;

int main()
{
    int num, lastDigit, firstDigit;

    // Using while loop

    cout << "Enter a number: ";
    cin >> num;

    lastDigit = num % 10;

    firstDigit = num;

    while (firstDigit >= 10)
    {
        firstDigit = firstDigit / 10;
    }

    int sum = firstDigit + lastDigit;
    cout << "The sum of the first and last digit is using while loop: " << sum << endl;

    // Using for loop

    cout << "Enter a number: ";
    cin >> num;

    lastDigit = num % 10;

    for (firstDigit = num; firstDigit >= 10; firstDigit = firstDigit / 10)
    {
    }

    sum = firstDigit+lastDigit;

    cout << "The sum of the first and last digit is using for loop: " << sum << endl;

    // Using do-while loop

    cout << "Enter a number: ";
    cin >> num;

    firstDigit = num;

    lastDigit = num % 10;

    
    
    do
    {
        firstDigit = firstDigit / 10;
    } 
    while (firstDigit >= 10);

    sum = firstDigit+lastDigit;

    cout << "The sum of the first and last digit is using do-while loop: " << sum << endl;
}