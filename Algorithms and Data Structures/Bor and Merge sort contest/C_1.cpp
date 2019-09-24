#include<bits/stdc++.h>
using namespace std;
bool ok;
class Node{
	public:
		char ch;
		Node *a[26];
		int val;
		bool end;
		Node(char ch){
			end=false;
			
			this->ch=ch;
			for (int i=0;i<26;++i)
			a[i]=NULL;
		}
};
class Trie{
	public:
		Node *root;
		Trie(){
			root=new Node('+');
		}
		public: 
			
			void insert(string s){
			Node *node=root;
			for (int i=0;i<s.size();++i){
				int pos=s[i]-'0';	
				if (i==s.size()-1 && node->a[pos]!=NULL ){
					ok=false;
				}
				
				if (node->a[pos]!=NULL ){
					node=node->a[pos];
				if (i==s.size()-1)
				node->end=true;
				}
				else{
					Node *temp=new Node(s[i]);
					node->a[pos]=temp;
					node=node->a[pos];
					
				if (i==s.size()-1)
				node->end=true;
				}
			}
		}
		bool check(string s){
			Node *node=root;

			for (int i=0;i<s.size();++i){
				int pos=s[i]-'0';
				
				if (node->a[pos]==NULL )
				return true;
				node=node->a[pos];
				
				if (node->end==true){
					return false;
				}
			}
			return true;
		}
};
int main(){
	
	string s;
	vector<int> v;
	int n,k;
	cin>>n;

	for (int i=1;i<=n;++i){

		 ok=true;
	     cin>>k;

	Trie *trie=new Trie();
	
	for (int j=1;j<=k;++j){
		cin>>s;
		if (trie->check(s)==false)
			ok=false;
		else trie->insert(s);
    }
    if (ok==false)
    v.push_back(0);
    else
    v.push_back(1);
    
	}
	for (int i=0;i<v.size();++i)
	{
		if (v[i]==0)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
	
}