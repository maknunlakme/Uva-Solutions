#include<iostream>
#include<vector>
#include<set>
#include<cstring>
#define X 1010
using namespace std;

vector<int>mat[X];

int parent[X],low[X],d[X];
bool visit[X],road[X][X];
int timee;

void find_art(int u)
{
    timee++;
    low[u]=d[u]=timee;
    visit[u]=1;
    int i,v;
    for(i=0;i<mat[u].size();i++)
    {
        v=mat[u][i];
        if(v==parent[u])
        {
            continue;
        }
        else if(visit[v])
        {
            low[u]=min(low[u],d[v]);
            if(!road[v][u])
            {
                road[u][v]=1;
            }
        }
        else if(!visit[v])
        {
            parent[v]=u;
            find_art(v);
            low[u]=min(low[u],low[v]);
            if(d[u]<low[v])
            {
                road[u][v]=road[v][u]=1;
            }
            else if(!road[v][u])
            {
                road[u][v]=1;
            }
        }
    }
    return;
}

int main()
{
    #ifdef maknun
        //freopen("tempin.txt","r",stdin);
        //freopen("tempout.txt","w",stdout);
    #endif // maknun
    int n,m,i,j,u,v,counter=0;
    while(cin>>n>>m, n|m)
    {
        counter++;
        timee=0;
        memset(parent,-1,sizeof parent);
        memset(low,0,sizeof low);
        memset(d,0,sizeof d);
        memset(mat,0,sizeof mat);
        memset(visit,0,sizeof visit);
        memset(road,0,sizeof road);
        for(i=0;i<m;i++)
        {
            cin>>u>>v;
            mat[u].push_back(v);
            mat[v].push_back(u);
        }
        for(i=1;i<=n;i++)
        {
            if(!visit[i]) find_art(i);
        }
        cout<<counter<<endl<<endl;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(road[i][j])
                {
                    cout<<i<<" "<<j<<endl;
                }
            }
        }
        cout<<"#"<<endl;
    }
    return 0;
}
