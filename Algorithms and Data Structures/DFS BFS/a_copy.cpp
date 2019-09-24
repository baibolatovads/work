#include<bits/stdc++.h>

using namespace std;

int g[210][210];
int c[210],topo[210];
int n,m,t;

bool dfs(int u)
{
    c[u]=-1;
    for(int v=1;v<=n;v++)
    {
        if(grid[u][v])
        {
            if(c[v]<0) return false;
            else if(!c[v]&&!dfs(v)) return false;
        }
    }
    c[u]=1;
    topo[--t]=u;
    return true;
}

bool toposort()
{
    t=n;
    for(int u=1;u<=n;u++)
    {
        if(!c[u])
        {
            if(!dfs(u)) return false;
        }
    }
    return true;
}

int main()
{
    while(cin>>n>>m&&(n!=0||m!=0))
    {
        memset(grid,0,sizeof(grid));
        memset(c,0,sizeof(c));
        memset(topo,0,sizeof(topo));
        int x,y;
        while(m--)
        {
            cin>>x>>y;
            grid[x][y]=1;
        }
        toposort();
        cout<<topo[0];
        for(int i=1;i<n;i++)
            cout<<" "<<topo[i];
        cout<<endl;
    }
    return 0;
}