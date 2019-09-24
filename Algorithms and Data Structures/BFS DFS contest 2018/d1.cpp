#include <bits/stdc++.h>
using namespace std;

const int N = 1100;
vector<int>g[N];
bool used[N];
map<int, int> cnt;

void DFS(int v){
	used[v] = true;
	cnt[v]++;
	for(int i = 0; i < g[v].size(); i++){
		int to = g[v][i];
		if(!used[to]){
			DFS(to);
		}
	}
}

int main(){
	
	int T;
	cin >> T;
	for(int i = 1; i <= T; i++){

		for(int j = 0; j < N; j++){
			used[i] = false;
			g[j].clear();
		}

	cnt.clear();

	int k, n, m;
	cin >> k >> n >> m;
	int people[k];

	for(int j = 0; j < k; j++)
		cin >> people[j];
	for(int j = 0; j < m; j++){
		int x, y;
		cin >> x >> y;
		g[x].push_back(y);
	}
	for(int j = 0; j < k; j++){
		for(int d = 0; d < N; d++){
			used[d] = false;
		}
		DFS(people[j]);
	}
	int ans = 0;

	for(int j = 1; j <= n; j++)
		if(cnt[j] == k)
			ans++;

	cout << "Case " << i << ": " << ans << endl;	
}

	return 0;
}