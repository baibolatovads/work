#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int g[100][100];
int n, m;
int used[100];
vector <int> result;

void dfs(int v){
	used[v] = 1;
	for(int i = 0; i < m; i++)
		if(used[g[v][i]] == 0) dfs(g[v][i]);
	result.push_back(v);	
}

void sort(){
	for(int i = 0; i < n; i++){
		if(used[i] = 0) dfs(i);
	}
}

int main(){
	
	while(cin >> n >> m){
		if(n == 0 && m == 0) break;
		memset(g,0,sizeof(g));
        memset(used,0,sizeof(used));
        int x, y;
        //
        while(m!=0){
        	m--;
        	cin >> x >> y;
        	x--;
        	y--;
        	g[x][y] = 1;
        }
        sort();
        for(int i = 0; i < n; i++){
        	cout << result[i] << " ";
        }
    }
	return 0;
}