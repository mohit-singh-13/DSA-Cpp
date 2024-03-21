#include<iostream>
#include<queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    cout << endl;
    cout << "Elements are : " << endl;
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            cout << endl;

            // queue still has some child Nodes
            if (!q.empty()) {
                q.push(NULL);
            }
        }
        else {
            cout << temp->data << " ";

            if (temp->left) {
                q.push(temp->left);
            }

            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
}

Node* insertIntoBst(Node* root, int data) {
    // base case
    if (root == NULL) {
        root = new Node(data);
        return root;
    }

    if (root->data < data) {
        // insert at right part
        root->right = insertIntoBst(root->right, data);
    }
    else {
        // insert at left part
        root->left = insertIntoBst(root->left, data);
    }

    return root;
}

void takeInput(Node* &root) {
    int data;
    cin >> data;

    while (data != -1) {
        root = insertIntoBst(root, data);
        cin >> data;
    }
}

int main() {
    Node* root = NULL;

    cout << "Enter data to create BST : " << endl;
    takeInput(root);

    levelOrderTraversal(root);

    return 0;
}