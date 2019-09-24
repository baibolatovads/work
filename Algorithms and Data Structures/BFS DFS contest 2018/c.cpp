#include <bits/stdc++.h>
using namespace std;

int n;

vector <int> g[200];
int color[200];
bool used[200];
bool marked[200];
queue<int> q;

void BFS(int v)
{
	q.push(v);
	used[v] = true;
	marked[v] = true;
	color[v] = 1;

	while(!q.empty())
	{
		int uptop = q.front();

		q.pop();

		for (int i = 0; i < g[uptop].size(); i++)
		{
			int to = g[uptop][i];

			if (!used[to])
			{
				used[to] = true;
				q.push(to);
			}

			if (!marked[to])
			{
				color[to] = color[uptop] * (-1);
				marked[to] = true;
			} 

			else if (color[to] == color[uptop])
			{
				cout << "NOT BICOLORABLE." << endl;
				return;
			}
		}
	}

	cout << "BICOLORABLE." << endl;
}

int main()
{
	while (true)
	{
		cin >> n;
		if (n == 0) break;

		for (int i = 0; i < 200; i++){
			g[i].clear();
		}

		for (int i = 0; i < 200; i++){
			color[i] = 0;
		}

		for (int i = 0; i < 200; i++){
			used[i] = false;
		}

		for (int i = 0; i < 200; i++){
			marked[i] = false;
		}

		while (!q.empty()){
			q.pop();
		}

		int l;
		cin >> l;

		for (int i = 0; i < l; i++)
		{
			int u, v;
			cin >> u >> v;

			g[u].push_back(v);
			g[v].push_back(u);
		}

		BFS(0);

	}
	return 0;
} 