#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, pair<int, int> > > G1;

vector<int> G2[110];

vector<pair<int,int> > fstMST;

int boss[110];
int r[110];

bool used[110];

void dfs(int v)
{
	used[v] = true;

	for (int i = 0; i < G2[v].size(); i++)
	{
		int node = G2[v][i];
		if (!used[node])
		{
			used[node] = true;
			dfs(node);
		}
	}
}

int get_boss(int v)
{
	if (boss[v] == v) return v;
	return boss[v] = get_boss(boss[v]);
}

void connect(int x, int y)
{
	x = get_boss(x);
	y = get_boss(y);
	if (x == y) return;
	else if (r[x] < r[y]) boss[x] = y;
	else if (r[x] > r[y]) boss[y] = x;
	else
	{
		boss[x] = y;
		r[y]++;
	}
}


int main()
{
	int t;
	cin >> t;

	for (int it = 0; it < t; it++)
	{
		int n, m;
		cin >> n >> m;

		for (int i = 0; i < m; i++)
		{
			int u, v, cost;
			cin >> u >> v >> cost;

			G1.push_back(make_pair(cost, make_pair(u, v)));
		}

		long long mn = 0;

		sort(G1.begin(), G1.end());

		for (int i = 1; i < 110; i++)
		{
			boss[i] = i;
			r[i] = 0;
		}

		for (int i = 0; i < m; i++)
		{
			int cost = G1[i].first;
			int x = G1[i].second.first;
			int y = G1[i].second.second;

			x = get_boss(x);
			y = get_boss(y);

			if (x != y) 
			{
				mn += cost;
					fstMST.push_back(G1[i].second);
				connect(x, y);
			}
		}

		bool ok = false;

		for (int k = 0; k < fstMST.size(); k++)
		{
			for (int i = 1; i < 110; i++)
			{
				boss[i] = i;
				r[i] = 0;
				used[i] = false;
				G2[i].clear();
			}

			long long c = 0;

			for (int i = 0; i < m; i++)
			{
				int cost = G1[i].first;
				int x1 = G1[i].second.first;
				int y1 = G1[i].second.second;

				if (x1 == fstMST[k].first && y1 == fstMST[k].second) continue;

				int x = get_boss(x1);
				int y = get_boss(y1);

				if (x != y) 
				{
					c += cost;
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
					c = mn - 1;
					break;
				}
			}
 
			if (mn == c) 
			{
				cout << "Not Unique!" <<  endl;
				ok = true;
				break;
			}

		}

		if (ok == false) cout << mn << endl;

		G1.clear();
		fstMST.clear();
	}
	return 0;
}