#include <bits/stdc++.h>
using namespace std;

vector<int> g[250];
int n, m;
int color[250];

bool dfs(int i, int clr){
	if(clr == 1) color[i] = 2;
	else color[i] = 1;

	for(int j = 0; j < g[i].size(); j++){
		if(color[g[i][j]] == color[i]){
			return false;
		}
		else if(color[g[i][j]] == 0){
			dfs(g[i][j], color[i]);
		}	
	}

	return true;
}

int main(){
	
	while(cin >> n){
		if(n == 0) break;

		for(int i = 0; i < 250; i++){
			g[i].clear();
			color[i] = 0;
		}
		cin >> m;
		for(int i = 0; i < m; i++){
			int u, v;
			cin  >> u >> v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		if(dfs(0, 1)) cout << "BICOLORABLE.\n";
		else cout << "NOT BICOLORABLE.\n";
	}

	return 0;
}