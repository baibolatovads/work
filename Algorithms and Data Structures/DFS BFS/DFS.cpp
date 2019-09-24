#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector < vector<int> > g; //graph
int n; //num of vertices

vector<int> color; //state of the vertex(0, 1 or 2)
vector<int> time_in, time_out;
int dfs_timer;

	void doDFS(int v){
		time_in[v] = dfs_timer++;
		color[v] = 1;
		for(int i = 0; i < g[v].size(); i++)
			if(color[i] == 0)
				doDFS(i);
			
		color[v] = 2;
		time_out[v] = dfs_timer++;
	}

int main(){
	
	int n, m;
	cin >> n >> m;
	int x, y;
	for(int i = 0; i < m; i++){
		cin >> x >> y;
		x--;
		y--;
		g[x].push_back(y);
	}

	for(int i = 0; i < n; i++){
		if(color[i] == 0)
			doDFS(i);
	}

	for(int i = 0; i < g[x].size(); i++){
		cout << g[x][i] << " ";
	}
	return 0;
}