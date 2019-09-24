#include <iostream>
#include <vector>

using namespace std;

int used[100001];
vector<int> g[100001];
vector<int> result;
int n, m, i , j;

void dfs(int v){
    used[v] = true;
    for (int i = 0; i < g[v].size(); i++)
        if (!used[g[v][i]])
            dfs(g[v][i]);
    result.push_back(v);
}
int main() {

    while(cin >> n >> m){
        if(n == 0 && m == 0) break;
        g[n].push_back(m);
        for(int i = 0; i < m; i++){
            cin >> i >> j;
            g[i]
        }

    }

    for(int i = 0; i < n; i++){
        cout << result[i] << " ";
    }
    return 0;

}