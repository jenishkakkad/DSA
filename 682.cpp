#include <iostream>
using namespace std;

class Stack
{
private:
    int capacity; // Size of the stack
    int top;      // Keeps track of the top element
    int *arr;     // Dynamic array to store stack elements

public:
    // Constructor to initialize the stack
    Stack(int size)
    {
        capacity = size; // Set stack size
        top = -1;        // Empty stack has top at -1
        arr = new int[capacity];
    }

    // Function to push an element onto the stack
    void push(int value)
    {
        if (top == capacity - 1)
        {
            cout << "Stack Overflow! Cannot push " << value << endl;
        }
        else
        {
            top++;
            arr[top] = value;
            cout << value << " pushed into the stack.\n";
        }
    }

    // Function to pop an element from the stack
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow! Cannot pop an element.\n";
        }
        else
        {
            cout << arr[top] << " popped from the stack.\n";
            top--;
        }
    }

    // Function to display the elements of the stack
    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty.\n";
        }
        else
        {
            cout << "Stack elements are: ";
            for (int i = 0; i <= top; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    // Destructor to free up dynamically allocated memory
    ~Stack()
    {
        delete[] arr;
    }
};

int main()
{
    int size;
    cout << "Enter the size of the stack: ";
    cin >> size;

    Stack s(size);

    s.push(10);
    s.push(20);
    s.display(); // Display elements of the stack
    s.pop();
    s.display();
    s.pop();
    s.pop(); // Testing stack underflow
    return 0;
}