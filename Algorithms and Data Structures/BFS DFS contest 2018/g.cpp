#include <bits/stdc++.h>
using namespace std;

bool used[110];
vector<int> g[110];
int dist[110];
queue<int> q;

void bfs(int v)
{
	q.push(v);
	used[v] = true;
	while (!q.empty())
	{
		int top = q.front();
		q.pop();
		for (int i = 0; i < g[top].size(); i++)
		{
			int to = g[top][i];
			if (!used[to])
			{
				used[to] = true;
				q.push(to);
				dist[to] = dist[top] + 1;
			}
		}
	}
}


int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int u, k, v;
		cin >> u >> k;
		for (int j = 0; j < k; j++)
		{
			cin >> v;
			g[u].push_back(v);
		}
	}

	bfs(1);

	for (int i = 1; i <= n; i++)
	{
		cout << i << " ";
		if (i != 1 && dist[i] == 0) cout << -1 << endl;
		else cout << dist[i] << endl;
	}
	return 0;
}