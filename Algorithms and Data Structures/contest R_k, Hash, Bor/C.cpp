#include <iostream>
#include <vector>
using namespace std;

struct Node{
public:
	char ch;
	int cnt;
	bool isend;
	Node *child[26];	
	Node(char vertex){
		ch = vertex;
		isend = true;
		cnt = 1;
		for(int i = 0; i < 26; i++){
			child[i] = NULL;
		}
	}
};

class Trie{
	public:
	Node *root;
	Trie(){
		root = new Node('+');
	}	

	void insert(string s){
		Node *node = root;
		for(int i = 0; i < s.size(); i++){
			int pos=s[i]-'a';
			if(node->child[pos] != NULL){
				node = node->child[pos];
				node->cnt++; 
			}
			else {
				Node *temp = new Node(s[i]);
				node->child[pos] = temp;
				node = node->child[pos]; //
			}
		}
	}

	int check(string s){
 
		Node *node = root;
		for(int i = 0; i < s.size(); i++){
		int pos = s[i] - 'a';
		if(node-> child[pos] == NULL){
			return 0;
		}
		node = node -> child[pos];
		}
		return node-> cnt;
	}
};

int main(){
	
	freopen("input.txt", "r", stdin);
	int n;
	string g, f;
	vector <int> v;
	Trie *trie=new Trie();
	vector<string> s;

		while(cin >> n && n != 0){
			for(int i = 0; i < n; i++){
				cin >> f;
				s.push_back(f);
			}
			cin >> g;
			trie->insert(g);
			for(int i = 0; i < s.size(); i++){
				v.push_back(trie->check(s[i]));
			}
		}

	for(int i = 0; i < v.size(); ++i){
	cout <<v[i] << endl;
	}

	return 0;
} 