#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    // constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node() {
        int value = this->data;
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertNode(Node* &tail, int element, int data) {
    Node* temp = new Node(data);

    // empty list
    if (tail == NULL) {
        tail = temp;
        tail->next = tail;
        return;
    }

    Node* current = tail;

    while (current->data != element) {
        current = current->next;
    }

    temp->next = current->next;
    current->next = temp;
}

void print(Node* tail) {
    Node* temp = tail;

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
       
    cout << endl;
}

void deleteNode(Node* &tail, int element) {
    // empty list
    if (tail == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    Node* previous = tail;
    
    Node* current = previous->next;

    while (current->data != element) {
        previous = current;
        current = current->next;
    }

    previous->next = current->next;

    // only 1 node is present
    if (current == previous) {
        tail = NULL;
    }
    
    // 2 or more nodes
    if (tail == current) {
        tail = previous;
    }

    current->next = NULL;

    delete current;
}

int main() {
    Node* tail = NULL;

    insertNode(tail, 3, 10);
    print(tail);

    insertNode(tail, 10, 20);
    print(tail);

    insertNode(tail, 20, 30);
    print(tail);

    insertNode(tail, 10, 100);
    print(tail);

    insertNode(tail, 30, 101);
    print(tail);

    deleteNode(tail, 100);
    print(tail);

    return 0;
}