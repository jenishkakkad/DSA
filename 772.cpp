#include <iostream>
using namespace std;

class Node {
public:
    int data;  
    Node *next;  

   
};

int main() {
    Node *HEAD = nullptr;  

    
    HEAD = new Node(); 
    HEAD->data=10;
    HEAD->next=NULL;

    // cout<<"1 st node Data:"<<HEAD->data<<endl;
    // cout<<"2 d node Address:"<<HEAD->next<<endl;
    // cout<<"-------------------------------"<<endl;

    Node *Newnode = new Node();
    Newnode->data = 20;
    HEAD->next = Newnode;

    // cout<<"1 st node Data:"<<HEAD->data<<endl;
    // cout<<"2 d node Address:"<<HEAD->next<<endl;
    // cout<<"-------------------------------"<<endl;

    // cout<<"1 st node Data:"<<Newnode->data<<endl;
    // cout<<"3 d node Address:"<<HEAD->next<<endl;
    // cout<<"-------------------------------"<<endl;

    Newnode = new Node();
    Newnode->data = 30;
    HEAD->next->next = Newnode;
    // cout<<"2 d node Data:"<<Newnode->data<<endl;
    // cout<<"3 d node Address:"<<HEAD->next->next<<endl;
    // cout<<"-------------------------------"<<endl;
    

    Newnode = new Node();
    Newnode->data = 40;
    HEAD->next->next->next = Newnode;
    // cout<<"3 d node Data:"<<Newnode->data<<endl;
    // cout<<"4 th node Address:"<<HEAD->next->next->next<<endl;
    // cout<<"-------------------------------"<<endl;

    Newnode = new Node();
    Newnode->data = 50;
    HEAD->next->next->next->next = NULL;
    // cout<<"4 th node Data:"<<Newnode->data<<endl;
    // cout<<"5 th node Address:"<<HEAD->next->next->next->next<<endl;
    // cout<<"-------------------------------"<<endl;

    cout<<"1 st node Data:"<<HEAD->data<<endl;
    cout<<"2 d node Address:"<<HEAD->next<<endl;
    cout<<"-------------------------------"<<endl;


    cout<<"2 nd node Data:"<<Newnode->data<<endl;
    cout<<"3 d node Address:"<<HEAD->next<<endl;
    cout<<"-------------------------------"<<endl;

    cout<<"3 d node Data:"<<Newnode->data<<endl;
    cout<<"4 th node Address:"<<HEAD->next->next->next<<endl;
    cout<<"-------------------------------"<<endl;


    cout<<"4 th node Data:"<<Newnode->data<<endl;
    cout<<"5 th node Address:"<<HEAD->next->next->next->next<<endl;
    cout<<"-------------------------------"<<endl;



    

    
}