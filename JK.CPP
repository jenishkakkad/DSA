#include <iostream>
using namespace std;

class Node {
public:
    int data;  
    Node *next;  
};

int main() {
    Node *HEAD = nullptr;  

    // Creating the head node
    HEAD = new Node();  
    HEAD->data = 10;  
    HEAD->next = nullptr;

    // Creating the 2nd node
    Node *Newnode = new Node();
    Newnode->data = 20;
    Newnode->next = nullptr;
    HEAD->next = Newnode;

    cout << "1st node Data: " << HEAD->data << endl;
    cout << "2nd node Address: " << HEAD->next << endl;
    cout << "-------------------------------" << endl;

    // Creating the 3rd node
    Newnode = new Node();
    Newnode->data = 30;
    Newnode->next = nullptr;
    HEAD->next->next = Newnode;
    cout << "2nd node Data: " << HEAD->next->data << endl;
    cout << "3rd node Address: " << HEAD->next->next << endl;
    cout << "-------------------------------" << endl;

    // Creating the 4th node
    Newnode = new Node();
    Newnode->data = 40;
    Newnode->next = nullptr;
    HEAD->next->next->next = Newnode;
    cout << "3rd node Data: " << HEAD->next->next->data << endl;
    cout << "4th node Address: " << HEAD->next->next->next << endl;
    cout << "-------------------------------" << endl;

    // Creating the 5th node
    Newnode = new Node();
    Newnode->data = 50;
    Newnode->next = nullptr;
    HEAD->next->next->next->next = Newnode;
    cout << "4th node Data: " << HEAD->next->next->next->data << endl;
    cout << "5th node Address: " << HEAD->next->next->next->next << endl;
    cout << "-------------------------------" << endl;

    return 0;
}
