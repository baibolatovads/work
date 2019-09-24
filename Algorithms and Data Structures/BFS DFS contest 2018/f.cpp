//DFS 

#include <bits/stdc++.h>
using namespace std;

bool used[110];
vector<int> g[110];
int cnt = 1;
int discTime[110];
int finTime[110];


void dfs(int v)
{
	for (int i = 0; i < g[v].size(); i++)
	{
		if (!used[g[v][i]])
		{
			used[g[v][i]] = true;
			discTime[g[v][i]] = cnt++;
			dfs(g[v][i]);
			finTime[g[v][i]] = cnt++;
		}
	}
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int u, m, v;
		cin >> u >> m;
		for (int j = 0; j < m; j++)
		{
			cin >> v;
			g[u].push_back(v);
		}
		sort(g[u].begin(), g[u].end());
	}

	for (int i = 1; i <= n; i++)
	{
		if (!used[i])
		{
			used[i] = true;
			discTime[i] = cnt++;
			dfs(i);
			finTime[i] = cnt++;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		cout << i << " " << discTime[i] << " " << finTime[i] << endl;
	}
	return 0;
}