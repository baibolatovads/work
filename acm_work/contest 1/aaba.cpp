#include <iostream>

using namespace std;

string s;
class Node{
public:
	char ch;
	Node* a[26];

	Node(char ch){
		this -> ch = ch;
		for(int i = 0; i < 26; i++){
			a[i] = NULL;
		}
	}

};

class Trie{
public:
	Node* root;
	Trie(){
		root = new Node('+');
	}

int insert(int k){
	Node *node = root;
	int cnt = 0;
	for(int i = k; i < s.size(); i++){
		int pos = s[i] - 'a';
		if(node -> a[pos] != NULL){
			node = node -> a[pos];
		}
		else {
			Node* temp = new Node(s[i]);
			node -> a[pos] = temp;
			node = node->a[pos];
			cnt++;
		}
	}
return cnt;	
}
}; 

int main(){

freopen("bacon.in", "r", stdin);
freopen("bacon.out", "w", stdout);

Trie* trie = new Trie();

cin >> s;

int cnt = 0;

for(int i = 0; i < s.size(); i++){
	cnt += trie -> insert(i);
}cout << cnt;

return 0;
}