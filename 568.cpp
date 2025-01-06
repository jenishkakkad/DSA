#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    Node *HEAD = nullptr; // Head pointer to point to the start of the linked list

    // Create the first node
    HEAD = new Node();
    HEAD->data = 10;
    HEAD->next = nullptr;

    // Pointer to traverse and add new nodes
    Node *current = HEAD;

    // Adding subsequent nodes
    for (int i = 20; i <= 50; i += 10)
    {
        Node *newNode = new Node();
        newNode->data = i;
        newNode->next = nullptr;

        current->next = newNode; // Link the new node to the list
        current = newNode;       // Move the current pointer to the new node
    }

    // Print the entire linked list
    cout << "Linked List Data:" << endl;
    current = HEAD;

    while (current != nullptr)
    {
        cout << "Node Data: " << current->data << ", Node Address: " << current << ", Next Node Address: " << current->next << endl;
        current = current->next; 
    }

    return 0;
}
