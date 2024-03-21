#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    // destructor
    ~Node() {
        int value = this->data;
        cout << "Memory is free for node with data " << value << endl;
    }
};

// traversing the linked list
void print(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


// gives length of the linked list
int getLength(Node* head) {
    int length = 0;

    while (head != NULL) {
        length++;
        head = head->next;
    }

    return length;
}

void insertAtHead(Node* &head, Node* &tail, int data) {
    Node* temp = new Node(data);

    // empty list
    if (head == NULL) {
        head = temp;
        tail = temp;
    }
    else {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }

}

void insertAtTail(Node* &tail, int data) {
    Node* temp = new Node(data);

    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int data) {
    // insert at start
    if (position == 1) {
        insertAtHead(head, tail, data);
        return;
    }

    Node* temp = head;
    int count = 1;

    while (count < position-1) {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL) {
        insertAtTail(tail, data);
        return;
    }

    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    nodeToInsert->prev = temp;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
}

void deleteNode(Node* &head, Node* &tail, int position) {
    // deleting from start
    if (position == 1) {
        Node* temp = head;
        head = head->next;

        head->prev = NULL;
        temp->next = NULL;

        delete temp;
    }
    else {
        Node* current = head;
        // Node* previous = NULL;

        int count = 1;
        while (count < position) {
            current = current->next;
            count++;
        }

        current->prev->next = current->next;
        if (current->next == NULL) {
            tail = current->prev;
        }
        else {
            current->next->prev = current->prev;
        }

        current->prev = NULL;
        current->next = NULL;
        delete current;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    cout << "Length : " << getLength(head) << endl;

    insertAtHead(head, tail, 20);
    print(head);
    cout << "Length : " << getLength(head) << endl;

    insertAtHead(head, tail, 30);
    print(head);
    cout << "Length : " << getLength(head) << endl;

    insertAtHead(head, tail, 40);
    print(head);
    cout << "Length : " << getLength(head) << endl;
    cout << endl;

    insertAtTail(tail, 50);
    print(head);
    cout << "Length : " << getLength(head) << endl;
    cout << endl;

    insertAtPosition(head, tail, 3, 100);
    print(head);
    cout << "Length : " << getLength(head) << endl;

    insertAtPosition(head, tail, 1, 101);
    print(head);
    cout << "Length : " << getLength(head) << endl;

    insertAtPosition(head, tail, 7, 102);
    print(head);
    cout << "Length : " << getLength(head) << endl;
    cout << endl;

    deleteNode(head, tail, 4);
    print(head);
    cout << "Length : " << getLength(head) << endl;

    deleteNode(head, tail, 1);
    print(head);
    cout << "Length : " << getLength(head) << endl;

    deleteNode(head, tail, 5);
    print(head);
    cout << "Length : " << getLength(head) << endl;
    cout << endl;

    cout << "head : " << head->data << endl;
    cout << "tail : " << tail->data << endl;

    return 0;
}