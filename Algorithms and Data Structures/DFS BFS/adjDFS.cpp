#include <bits/stdc++.h>
using namespace std;

void dfs(int v, vector< vector<int> > adj, vector<bool> was, int cnt){
	if(!was[v]){
		was[v] = true;
		cnt++;
		for(int i = 0; i < adj[v].size(); i++){
			dfs(adj[v][i], adj, was, cnt);
		}
	}
}

int getCnt(int start, vector< vector<int> > adj){
	vector<bool> was(adj.size(), false);
	int cnt = 0;
	dfs(start, adj, was, cnt);
	return cnt;
}

int main(){
	
	int n, start;
	cin >> n >> start;
	start--;

	vector< vector<int> > adj(n, vector<int>());
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			int temp;
			cin >> temp;
			if(temp == 1){
				adj[i].push_back(j);
			}
		}
	}

cout << getCnt(start, adj);
	
	return 0;
}