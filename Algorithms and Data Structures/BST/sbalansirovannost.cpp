#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int mx1, mx2;
struct node
{
	int key;
	node * left;
	node * right;

	node(int k) {
		key = k;
		left = right = NULL;
	}
};

struct BST
{
	node * root;
	int height;
	int cnt;

	BST() {
		cnt = 0;
		height = 0;
		root = NULL;
	}

	node * add(node * root, int x, int h) {

		this->height = max(this->height, h);
		
		if(root == NULL)
		{
			node * n = new node(x);
			root = n;
			cnt++;
		}
		else if(x < root->key)
		{
			root->left = add(root->left, x, h+1);
		}
		else if(x > root->key)
		{
			root->right = add(root->right, x, h+1);
		}
		return root;
	}

	void zhapyrak(node *x){
		if (x != NULL){
			zhapyrak(x -> left);
			if(abs((x->root-> left-> height) - (x ->root -> right ->height)) <= 1){
				cout << "YES\n";
			}
			zhapyrak(x -> right);
		}
	}
};

int main(){

	BST MyTree;
	int x, cnt = 0;
	while(cin >> x && x != 0){
		MyTree.root = MyTree.add(MyTree.root, x, 1);
	}
	MyTree.zhapyrak(MyTree.root);


	return 0;
}