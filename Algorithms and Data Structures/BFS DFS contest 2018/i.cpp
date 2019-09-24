#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, pair<int, int> > > g;

vector<int> G2[110];

vector<pair<int,int> > fstMST;

int p[110];
int r[110];

bool used[110];

void dfs(int v)
{
	used[v] = true;

	for (int i = 0; i < G2[v].size(); i++)
	{
		int u = G2[v][i];
		if (!used[u])
		{
			used[u] = true;
			dfs(u);
		}
	}
}

int get_boss(int v)
{
	if (p[v] == v) return v;
	return p[v] = get_boss(p[v]);
}

void connect(int x, int y)
{
	x = get_boss(x);
	y = get_boss(y);
	if (x == y) return;
	else if (r[x] < r[y]) p[x] = y;
	else if (r[x] > r[y]) p[y] = x;
	else
	{
		p[x] = y;
		r[y]++;
	}
}


int main()
{
	int t;
	cin >> t;

	for (int d = 0; d < t; d++)
	{
		int n, m;
		cin >> n >> m;

		for (int i = 0; i < m; i++)
		{
			int u, v, weight;
			cin >> u >> v >> weight;

			g.push_back(make_pair(weight, make_pair(u, v)));
		}

		long long totalWeightofMST1 = 0;

		sort(g.begin(), g.end());

		for (int i = 1; i < 110; i++)
		{
			p[i] = i;
			r[i] = 0;
		}

		for (int i = 0; i < m; i++)
		{
			int weight = g[i].first;
			int x = g[i].second.first;
			int y = g[i].second.second;

			x = get_boss(x);
			y = get_boss(y);

			if (x != y) 
			{
				totalWeightofMST1 += weight;
					fstMST.push_back(g[i].second);
				connect(x, y);
			}
		}

		bool notUnique = false;

		for (int k = 0; k < fstMST.size(); k++)
		{
			for (int i = 1; i < 110; i++)
			{
				p[i] = i;
				r[i] = 0;
				used[i] = false;
				G2[i].clear();
			}

			long long totalWeightofMST2 = 0;

			for (int i = 0; i < m; i++)
			{
				int weight = g[i].first;
				int x1 = g[i].second.first;
				int y1 = g[i].second.second;

				if (x1 == fstMST[k].first && y1 == fstMST[k].second) continue;

				int x = get_boss(x1);
				int y = get_boss(y1);

				if (x != y) 
				{
					totalWeightofMST2 += weight;
					connect(x, y);
					G2[x1].push_back(y1);
					G2[y1].push_back(x1);
				}
			}

			dfs(1);

			for (int i = 1; i <= n; i++)
			{
				if (!used[i])
				{
					totalWeightofMST2 = totalWeightofMST1 - 1;
					break;
				}
			}
 
			if (totalWeightofMST1 == totalWeightofMST2) 
			{
				cout << "Not Unique!" <<  endl;
				notUnique = true;
				break;
			}

		}

		if (notUnique == true) cout << totalWeightofMST1 << endl;

		g.clear();
		fstMST.clear();
	}
	return 0;
}