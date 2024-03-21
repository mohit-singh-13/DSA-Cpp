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
        if (this->next != NULL) {
            this->next = NULL;
            delete next;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertAtHead(Node* &head, int data) {
    // creating a new node with the given data
    Node* temp = new Node(data);

    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int data) {
    // creating a new node with the given data
    Node* temp = new Node(data);

    tail->next = temp;
    tail = temp;
}

void insertAtMiddle(Node* &head, Node* &tail, int position, int data) {
    // insertint at beginning
    if (position == 1) {
        insertAtHead(head, data);
        return;
    }

    Node* temp = head;
    int currentPos = 1;

    while (currentPos < position-1) {
        temp = temp->next;
        currentPos++;
    }

    // inserting at ending
    if (temp->next == NULL) {
        insertAtTail(tail, data);
        return;
    }

    // creating a new node for the given data
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void print(Node* &head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteNode(Node* &head, Node* &tail, int position) {
    // deleting first or start node
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        // memory free
        delete temp;
    }
    else {  
        // deleting any middle node or last node
        Node* current = head;
        Node* previous = NULL;

        int count = 1;
        while (count < position) {
            previous = current;
            current = current->next;
            count++;
        }

        previous->next = current->next;

        // maintaining tail
        if (current->next == NULL) {
            tail = previous;
        }
        
        delete current;
    }
}

int main() {
    Node* node1 = new Node(10);

    /*cout << node1->data << endl;
    cout << node1->next << endl;*/

    Node* head = node1;
    Node* tail = node1;

    print(head);

    insertAtHead(head, 20);
    print(head);

    insertAtHead(head, 30);
    print(head);

    insertAtTail(tail, 40);
    print(head);

    insertAtTail(tail, 50);
    print(head);

    insertAtMiddle(head, tail, 6, 99);
    print(head);

    insertAtTail(tail, 100);
    print(head);

    deleteNode(head, tail, 2);
    print(head);

    // cout << "head : " << head->data << endl;
    // cout << "tail : " << tail->data << endl;

    return 0;
}