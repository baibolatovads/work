#include <bits/stdc++.h>
using namespace std;

vector<int> g[110];
vector<int> ans;
bool used[110];

void dfs(int v)
{
	used[v] = true;

	for (int i = 0; i < g[v].size(); i++)
	{
		int to = g[v][i];
		if (!used[to])
		{
			dfs(to);
		}
	}

	ans.push_back(v);
}

void topologicalSort(int n)
{
	for (int i = 1; i <= n; i++)
		used[i] = false;
	
	ans.clear();

	for (int i = 1; i <= n; i++)
	{
		if (!used[i])
		{
			dfs(i);
		}
	}

	reverse(ans.begin(), ans.end());

	for (int i = 0; i < ans.size(); i++)
	{
		if (i) cout << " ";
		cout << ans[i];
	}
	cout << endl;
}


int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		if (n == 0 and m == 0) break;
		for (int i = 0; i < m; i++)
		{
			int u, v;
			cin >> u >> v;
			g[u].push_back(v);
		}

		topologicalSort(n);
	}
	return 0;
}
