#include <iostream>

using namespace std;

int h = 0, hmax = 0;

class TreeNode {
	int x;
	TreeNode *L, *R;
	TreeNode(int x){
		this.x = x;
		L = NULL;
		R = NULL;
	}

void add (TreeNode* &t, int n){
	h++;
	if (t == NULL){
		t = new TreeNode(n);
		return;
	}
	if (t->x == n) return;
	if(t->x > n) add(t->L, n);
	else add(t->R, n);
}
};



int main(){
	
	


	return 0;
}