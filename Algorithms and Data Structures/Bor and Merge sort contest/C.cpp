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
			char ch=s[i];
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

	int n;
	cin >> n;
	int q;
	string s;
	vector<string>v;
	vector<int> ans;
		for(int i = 0; i < n; i++){
			cin >> q;
			Trie *trie = new Trie();
			int sum = 0;
			for(int j = 0; j < q; j++){
				cin >> s;
				trie->insert(s);
				v.push_back(s);
			}
			for(int i = 0; i < q; i++){
				ans.push_back(trie->check(v[i]));
			}
			for(int i = 0; i < ans.size(); i++){
				 sum += ans[i];
			}
			if(sum == 0 ) cout << "YES";
			else cout << "NO";
		}
 

	return 0;
}