#include <bits/stdc++.h>
using namespace std;
const int N = 100;
int it = 1;
vector<int> g[N];

bool used[N];

int ans[N][2];
void dfs(int i ){
	used[i] = true;
	ans[i][0] = it++;

	for(int j = 0; i < g[i].size(); j++){
		if(!used[g[i][j]]) dfs(g[i][j]);
	}

	ans[i][1] = it++;
}

int main(){

	int u, v, t, z;
	cin >> z;

	for(int i = 0; i < z; i++){
		used[i] = false;
		cin >> u >> t;
		--u;

		for(int j = 0; j < t; j++){
			cin >> v;

			g[u].push_back(--v);
		}
	}

	for(int i = 0; i < z; i++){
		if(!used[i]) dfs(i);
	}

	for(int i = 0; i < z; i++){
		cout << i + 1 << "" << ans[i][0] << "" << ans[i][1] << endl;
	}

	return 0;
}