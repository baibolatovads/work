#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define snd second
#define fst first
vector<pair<int, pair<int,int> > > g;
int r[110];
int p[110];

int get_boss(int v)
{
	if (p[v] == v) return v;
	return p[v] = get_boss(p[v]);
}

void merge(int x, int y)
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
	int n;

	while (cin >> n)
	{
		g.clear();

		for (int i = 0; i < 110; i++)
		{
			p[i] = 0;
			r[i] = 0;
		}

		int weight;
		int m = 0;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{	
				cin >> weight;
				if (j > i)
				{
					g.push_back(make_pair(weight, make_pair(i, j)));	
					m++;
				}		
			}
		}

		int mn = 0;
		sort(g.begin(), g.end());

		for (int i = 1; i <= n; i++)
			p[i] = i;

		for (int i = 0; i < m; i++)
		{
			weight = g[i].fst;
			int x = g[i].snd.fst;
			int y = g[i].snd.snd;

			x = get_boss(x);
			y = get_boss(y);

			if (x != y)
			{
				mn += weight;
				merge(x, y);
			}
		}

		cout << mn << endl;

	}
	return 0;
}