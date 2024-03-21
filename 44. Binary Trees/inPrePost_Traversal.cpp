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

void inorder(node* root) {
    // base case
    if (root == NULL) {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node* root) {
    // base case
    if (root == NULL) {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root) {
    // base case
    if (root == NULL) {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    node* root = NULL;

    // create a Tree
    root = buildTree(root);

    // inorder traversal
    cout << "Inorder Traversal : ";
    inorder(root);
    cout << endl;

    // preorder traversal
    cout << "Preorder Traversal : ";
    preorder(root);
    cout << endl;

    // postorder traversal
    cout << "Postorder Traversal : ";
    postorder(root);
    cout << endl;

    return 0;
}

// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 