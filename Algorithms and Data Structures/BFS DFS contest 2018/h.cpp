//Build Minimum spanning tree and output its total weight
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define pb push_back 
#define mp make_pair 
#define snd second 
#define fst first 
const int N = 120;
int parent[N];
vector<pair<int, pair<int, int> > > g;

int get_boss(int v){
	if(v == parent[v])
		return v;
	return parent[v] = get_boss(parent[v]);
}

void merge(int a, int b){
	int x = get_boss(a);
	int y = get_boss(b);
	if(x != y){
		parent[y] = x;
	}
}

int main(){

	int n;
	cin >> n;

		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				int x;
				cin >> x;
				if(x != 0){
					g.pb(mp(x, mp(i, j)));
				}
			}

			for(int j = 0; j < n; j++)
				parent[j] = j;
			sort(g.begin(), g.end());
			int ans = 0;
			for(int j = 0; j < g.size(); j++){
				int a = g[j].snd.fst;
				int b = g[j].snd.snd;
				if(get_boss(a) != get_boss(b)){
					merge(a, b);
					ans += g[j].fst;
				}
			}
			cout << ans << endl;
		}


	return 0;
}