//SATELLITE, FIND LONGEST DISTANCE THEN COUT 2ND MAX

#include <bits/stdc++.h>
using namespace std;

#define pb push_back 
#define mp make_pair
#define s second 
#define f first 

vector<pair<int, pair<int, int> > > g;

vector<pair<int, int> > point;

int r[550];
int p[550];

double Dist_Between_Two_Points(pair<int, int> x, pair<int, int> y)
{
	int x1 = x.f, x2 = y.f;
	int y1 = x.s, y2 = y.s;

	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

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
	else if (r[y] < r[x]) p[y] = x;
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
		int k, n;
		cin >> k >> n;
		for (int i = 0; i < n; i++)
		{
			int x, y;
			cin >> x >> y;
			point.pb(mp(x, y));
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				g.pb(mp(Dist_Between_Two_Points(point[i], point[j]), mp(i, j));
			}
		}

		int mn = 0;
		vector<pair<int,int> > result;
		vector<double> dist;

		sort(g.begin(), g.end());
		for (int i = 0; i < 550; i++)
		{
			p[i] = i;
		}

		for (int i = 0; i < g.size(); i++)
		{
			int cost = g[i].f;
			int x = g[i].s.f;
			int y = g[i].s.s;

			x = get_boss(x);
			y = get_boss(y);

			if (x != y) 
			{
				mn += cost;
				result.pb(g[i].s);
				merge(x, y);
			}
		}

		for (int i = 0; i < result.size(); i++)
		{
			dist.pb(Dist_Between_Two_Points(point[result[i].f], point[result[i].s]));
		}

		sort(dist.begin(), dist.end());
		reverse(dist.begin(), dist.end());

		cout << fixed << setprecision(2) << dist[k - 1] << endl;

		for (int i = 0; i < 550; i++)
		{
			p[i] = 0;
			r[i] = 0;
		}

		g.clear();
		point.clear();
	}
	return 0;
}