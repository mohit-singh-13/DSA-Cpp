#include<iostream>
#include<queue>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    // constructor
    node (int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root) {
    cout << "Enter the data : ";
    int data;
    cin >> data;

    root = new node(data);

    if (data == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);

    cout << endl;
    while (!q.empty()) {
        node* temp = q.front();
        q.pop();
        
        cout << "Elements are : " << temp->data << " ";

        if (temp->left) {
            q.push(temp->left);
        }

        if (temp->right) {
            q.push(temp->right);
        }
    }
}

int main() {
    node* root = NULL;

    // create a Tree
    root = buildTree(root);

    // BFS/Level Order Traversal
    levelOrderTraversal(root);

    return 0;
}