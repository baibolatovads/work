#include <bits/stdc++.h>

using namespace std;
    

class Node {
    public:
    int key;
    int h;

    Node *left, *right, *parent;
    Node(int key) {
        this->key = key;
        left = NULL;
        right = NULL;
        parent = NULL;
        h = 1;
    }
};

class Tree {
    public:
    Node *root;
    int max2;
    Tree() {
        root = NULL;
        
    }

    Node *insert(Node *node, int key, Node *parent = NULL) {
        if (node == NULL) {
            node = new Node(key);
        } else if (node->key > key) {
            node->left = insert(node->left, key, node);
        } else if(node->key < key) {
            node->right = insert(node->right, key, node);
        }
        node->parent = parent;
        return node;
    }

    Node * findRightMost(Node *node){
        if (node->right == NULL) return node;
        return findRightMost(node->right);
    }

    int getSecondMax(Node *node) {
       Node *mostright = findRightMost(node);
       if (mostright->left != NULL) {
            return findRightMost(mostright->left)->key;
       }
       return mostright->parent->key; 
    }
};

int main(){

Tree t = Tree();
int a;             
while(cin >> a && a != 0){
    t.root = t.insert(t.root, a);   
}
    cout << t.getSecondMax(t.root); 

    return 0;
}