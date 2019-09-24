#include <bits/stdc++.h>

using namespace std;


int n; // число вершин
vector<int> g[100001]; // граф
bool used[100001];
vector<int> ans;
 
void dfs (int v) {
	used[v] = true;
	for (size_t i=0; i<g[v].size(); ++i) {
		int to = g[v][i];
		if (!used[to])
			dfs (to);
	}
	ans.push_back (v);
}
 
void topological_sort() {
	for (int i=0; i<n; ++i)
		used[i] = false;
	ans.clear();
	for (int i=0; i<n; ++i)
		if (!used[i])
			dfs (i);
	reverse (ans.begin(), ans.end());
}

int main(){

	int n, m;
	cin >> n >> m;
	int x, y;

	for(int i = 0; i < m; i++){
		cin >> x >> y;
		g[x].push_back(y);
	}

vector<int> :: iterator it;

	for(it = g[x].begin(); it != g[x].end(); it++){
		int k = *it;
		if(!used[k]){
			dfs(k);
		}
	}

topological_sort();

	for(it = ans.begin(); it != ans.end(); it++){
		cout << *it << " ";
	}

return 0;
}