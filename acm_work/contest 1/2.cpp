#include <iostream>
#include <vector>

using namespace std;

int used[100001];
vector<int> g[100001];
int n, m;
vector<int> result;
bool ok=true;
void dfs(int v){
	used[v] = 1;
	for(int i = 0; i < g[v].size(); i++){
		if (used[g[v][i]]==1)
			ok=false;
		if(used[g[v][i]]==0){
			dfs(g[v][i]);
		}
		
	}
	result.push_back(v);
	used[v]=2;
}

int main(){

//freopen("topsort.in", "r", stdin);
//freopen("topsort.out", "w", stdout);

int n, m;
cin >> n >> m;

	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		//x--;
		//y--;
		g[x].push_back(y);
	}

	for(int i = 1; i <= n; i++){
		if(used[i]==0){
		 dfs(i);
		}
	}
	if (ok==false){
		cout<<-1;
		return 0;
	}
	for (int i=result.size()-1;i>=0;--i)
		cout<<result[i]<<" ";


}