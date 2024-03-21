#include<iostream>
#include<stack>
using namespace std;

class Stack {
    // properties
    public:
    int *arr;
    int top;
    int size;

    // behaviours
    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element) {
        if (top < size-1  /*size - top > 1*/) {
            top++;
            arr[top] = element;
        }
        else {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop() {
        if (top >= 0) {
            top--;
        }
        else {
            cout << "Stack Underflow" << endl;
        }
    }

    int peek() {
        if (top >= 0) {
            return arr[top];
        }
        else {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty() {
        if (top == -1) {
            return true;
        }
        else {
            return false;
        }
    }
};

class Stack2 {
    // properties
    public:
    int data;
    Stack2* next;

    // behaviours
    Stack2(int data) {
        this->data = data;
        this->next = NULL;
    }

    ~Stack2() {
        next = NULL;
        cout << "Deleting " << data << endl;
        delete next;
    }
};

void push(Stack2* &head, Stack2* &tail, int data) {
    Stack2* temp = new Stack2(data);
    
    if (head == NULL) {
        head = temp;
        tail = temp;
    }
    else {
        tail->next = temp;
        tail = temp;
    }
}

void pop(Stack2* &head, Stack2* &tail) {
    if (head == NULL) {
        cout << "Stack Underflow" << endl;
    }
    else {
        Stack2* temp = head;

        while (temp->next != tail) {
            temp = temp->next;
        }

        tail = temp;
        temp = tail->next;
        tail->next = NULL;
        
        // temp->next = NULL;
        delete temp;
    }
}

int peek(Stack2* tail) {
    if (tail != NULL) {
        return tail->data;
    }
    else {
        cout << "Stack is empty" << endl;
        return -1;
    }
}

bool empty(Stack2* tail) {
    if (tail == NULL) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    /*
    // creation of stack
    stack<int> myStack;

    // push operation
    myStack.push(2);
    myStack.push(3);
    cout << "Printing top element : " << myStack.top() << endl;

    // pop operation
    myStack.pop();
    cout << "Printing top element : " << myStack.top() << endl;

    if (myStack.empty()) {
        cout << "Stack is empty" << endl;
    }
    else {
        cout << "Stack is not empty" << endl;
    }

    cout << "Size of stack is " << myStack.size() << endl;
    */

    cout << "Using ARRAY" << endl;
    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);

    cout << "Top : " << st.peek() << endl;

    st.pop();
    cout << "Top : " << st.peek() << endl;

    st.pop();
    cout << "Top : " << st.peek() << endl;

    st.pop();
    cout << "Top : " << st.peek() << endl;

    if (st.isEmpty()) {
        cout << "Stack is empty" << endl;
    }
    else {
        cout << "Stack is not empty" << endl;
    }
    cout << endl;


    cout << "Using LINKED LIST" << endl;
    Stack2* head = NULL;
    Stack2* tail = NULL;

    if (empty(tail)) {
        cout << "Stack is empty" << endl;
    }
    else {
        cout << "Stack is not empty" << endl;
    }

    push(head, tail, 4);
    push(head, tail, 5);
    
    cout << "Top : " << peek(tail) << endl;
    
    pop(head, tail);
    cout << "Top : " << peek(tail) << endl;
    
    if (empty(tail)) {
        cout << "Stack is empty" << endl;
    }
    else {
        cout << "Stack is not empty" << endl;
    }

    return 0;
}