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
    Tree() {
        root = NULL;
    }

    Node *insert(Node *node, int key) {
        if (node == NULL) {
            node = new Node(key);
        } 
     	else if (node->key > key) {
            node->left = insert(node->left, key);
        	} else if(node -> key < key) {
            node->right = insert(node->right, key);
           }

        if (node -> left != NULL)
        	node -> h = max(node -> left -> h + 1, node -> h);
        if (node -> right != NULL)
        	node -> h = max(node -> right -> h + 1, node -> h);
        return node; 
    }
};  

int main(){

Tree *t = new Tree();
int a;

while(cin >> a){
	if (a == 0){
		break;
	}
	t -> root = t->insert(t->root, a);

}
				
cout << t -> root -> h;


	return 0;
}