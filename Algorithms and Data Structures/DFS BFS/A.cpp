#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> g[100];
int used[100];
vector<int> result;
int n, m;

void dfs(int v){
	used[v] = 1;
	for(int i = 0; i < g[v].size(); i++){
		if(used[g[v][i]] == 0)
			dfs(g[v][i]);
	result.push_back(v);
		}	
}
int main(){
	
	while(cin >> n >> m && (n!= 0 && m != 0)){
		memset(g, 0, sizeof(g));
		memset(used, 0, sizeof(used));
		int x, y;
		while(m--;){
			cin >> x >> y;
			x--;
			y--;
			g[x].push_back(y);
		}
		for(int i = 0; i < n; i++){
			if(used[i] == 0) {
				dfs(i);
			}
		}

		for(int i = 0; i < n; i++){
			cout << result[i] << " ";
		}
	}


	return 0;
}