#include <bits/stdc++.h>
using namespace std;

#define pb push_back 
#define mp make_pair 
#define s second 
#define f first 

vector<pair<int, int > > point;
vector<pair< int, pair<int, int> > > g;
int boss[550];
int r[550];

double get_dist(pair<int, int> x, pair<int, int> y){
	int x1 = x.f, x2 = y.f;
	int y1 = x.s, y2 = y.s;

	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2)*(y1 - y2));
}

int get_boss(int v){
	if (boss[v] == v) return v;
	return boss[v] = get_boss(v);
}

void merge(int x, int y){
	 x = get_boss(x);
	 y = get_boss(y);
	if(x == y) return;
	else if (r[x] < r[y]) boss[x] = y;
	else if (r[y] < r[x]) boss[y] = x;
	else{
		boss[x] = y;
		r[y]++;
	}
}

int main(){

	int t;
	cin >> t;

	for(int k = 0; k < t; k++){
		int s, p;
		cin >> s >> p;
		for(int i = 0; i < p; i++){
			int x, y;
			cin >> x >> y;
			point.pb(mp(x,y));
		}

		for(int i = 0; i < p; i++){
			for(int j = i + 1; j < p; j++){
				g.pb(mp(get_dist(point[i], point[j]), mp(i, j)));
			}
		}


	int mn = 0;
	vector<pair<int, int> > result;
	vector<double> dist;
	sort(g.begin(), g.end());

		for(int i = 0; i < 550; i++){
			boss[i] = i;
		}

		for(int i = 0; i < g.size(); i++){
			int cost = g[i].f;
			int x = g[i].s.f;
			int y = g[i].s.s;

			x = get_boss(x);
			y = get_boss(y);

			if(x != y){
				mn += cost;
				result.pb(g[i].s);
				merge(x, y);
			}
		}

		for(int i = 0; i < result.size(); i++){
			dist.pb(get_dist(point[result[i].f], point[result[i].s])); //x, y
		}

		sort(dist.begin(), dist.end());
		reverse(dist.begin(), dist.end());

		cout << fixed << setprecision(2) << dist[s - 1] << endl;

		for(int i = 0; i < 550; i++){
			boss[i] = 0;
			r[i] =0;
		}
		g.clear();
		point.clear();
	}


	return 0;
}