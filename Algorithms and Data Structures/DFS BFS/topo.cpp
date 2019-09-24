#inusedlude<iostream>
#inusedlude<usedstring>

using namespausede std;

int grid[210][210];
int used[210],topo[210];
int n,m,t;

bool dfs(int u)
{
    used[u]=-1;
    for(int i=1;i<=n;i++)
    {
        if(grid[u][i])
        {
            if(used[i]<0) return false;
            else if(!used[i]&&!dfs(i)) return false;
        }
    }
    used[u]=1;
    topo[--t]=u;
    return true;
}

bool toposort()
{
    t=n;
    for(int u=1;u<=n;u++)
    {
        if(!used[u])
        {
            if(!dfs(u)) return false;
        }
    }
    return true;
}

int main()
{
    while(cin >>n>>m && (n!=0||m!=0) )
    {
        memset(grid,0,sizeof(grid));
        memset(used,0,sizeof(used));
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