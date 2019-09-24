#include <iostream>
#include <vector>
#include <cmath>
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
    int count;
    Tree() {
        root = NULL;
        count = 0;
    }

    Node *insert(Node *node, int key) {
        if (node == NULL) {
            node = new Node(key);
            count++;
            return node;
        } 
     	else {
     		if (node->key > key) {
            node->left = insert(node->left, key);
        } else if(node -> key < key) {
            node->right = insert(node->right, key);
        }
        return node;
    }

}
};
int main(){

    Tree *t = new Tree();
    int a;
    while(cin >> a && a != 0){
        t -> root = t->insert(t->root, a);
    }cout << t->count;
    return 0;
}
