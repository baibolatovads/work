#include <bits/stdc++.h> 
using namespace std; 
  
const int ALPHABET_SIZE = 26; 
  
// trie node 
struct TrieNode 
{ 
    struct TrieNode *children[ALPHABET_SIZE]; 
    bool isEndOfWord; 
    int cnt = 0;
}; 
  
// Returns new trie node (initialized to NULLs) 
struct TrieNode *getNode(void) 
{ 
    struct TrieNode *pNode =  new TrieNode; 
  
    pNode->isEndOfWord = false; 
  
    for (int i = 0; i < ALPHABET_SIZE; i++) 
        pNode->children[i] = NULL; 
  
    return pNode; 
} 
  
// If not present, inserts key into trie 
// If the key is prefix of trie node, just 
// marks leaf node 
void insert(struct TrieNode *root, string key) 
{ 
    struct TrieNode *pCrawl = root; 
  
    for (int i = 0; i < key.length(); i++) 
    { 
        int index = key[i] - 'a'; 
        if (!pCrawl->children[index]) 
            pCrawl->children[index] = getNode(); 
  
        pCrawl = pCrawl->children[index]; 
    } 
  
    // mark last node as leaf 
    pCrawl->isEndOfWord = true; 
} 
  
// Returns true if key presents in trie, else 
// false 
int search(struct TrieNode *root, string key) 
{ 
    struct TrieNode *pCrawl = root; 
  
    for (int i = 0; i < key.length(); i++) 
    { 
        int index = key[i] - 'a'; 
        pCrawl = pCrawl->children[index]; 
    } 
  
    if (pCrawl != NULL && pCrawl->isEndOfWord) pCrawl->cnt ++; 
    return pCrawl->cnt;
} 
  
// Driver 
int main() 
{ 
    
    int n, q;
    cin >> n >> q;
    string todo[n];
    string find[q];

    for(int i = 0; i < n; i++){
        cin >> todo[i];
    }

    for(int i = 0; i < q; i++){
        cin >> find[i];
    }

    struct TrieNode *root = getNode();
     for (int i = 0; i < n; i++) 
        insert(root, todo[i]);

        for(int j = 0; j < q; j++){
            cout << search(root, find[j]);
            cout << endl;
        }

    return 0; 
} 