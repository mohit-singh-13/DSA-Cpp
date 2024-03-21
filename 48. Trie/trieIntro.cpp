#include<iostream>
using namespace std;

class TrieNode {
public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch) {
        data = ch;

        for (int i=0 ; i<26 ; i++) {
            children[i] = NULL;
        }

        isTerminal = false;
    }
};

class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode('\0');
    }
    
    void insertUtil(TrieNode* root, string word) {
        // base casE
        if (word.length() == 0) {
            root->isTerminal = true;
            return;
        }

        // Assumption : word will be in CAPS
        int index = word[0] - 'A';
        TrieNode* child;

        // present
        if (root->children[index] != NULL) {
            child = root->children[index];
        }
        // absent
        else {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // RECURSION
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word) {
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode* root, string word) {
        // base case
        if (word.length() == 0) {
            return root->isTerminal;
        }

        int index = word[0] - 'A';
        TrieNode* child;

        if (root->children[index] != NULL) {
            child = root->children[index];
        }
        else {
            return false;
        }

        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word) {
        return searchUtil(root, word);
    }

    void deleteUtil(TrieNode* root, string word) {
        // base case
        if (word.length() == 0) {
            root->isTerminal = false;
            return;
        }

        int index = word[0] - 'A';
        TrieNode* child;

        child = root->children[index];

        deleteUtil(child, word.substr(1));
    }

    void deleteWord(string word) {
        deleteUtil(root, word);
    }
};

int main() {
    Trie* t = new Trie();

    t->insertWord("MOHIT");
    
    cout << "Present of NOT : " << t->searchWord("MOHIT") << endl;

    t->insertWord("TIME");
    t->insertWord("MAHI");
    t->insertWord("TIM");
    cout << "Present of NOT : " << t->searchWord("TIME") << endl;
    cout << "Present of NOT : " << t->searchWord("MAHII") << endl;

    t->deleteWord("TIME");
    cout << "Present of NOT : " << t->searchWord("TIME") << endl;

    t->deleteWord("MAHI");
    cout << "Present of NOT : " << t->searchWord("MAHI") << endl;

    return 0;
}