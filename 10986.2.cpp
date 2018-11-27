#include<iostream>
#define X 500
#include<cstring>
#include<cstdio>
#include<algorithm>
#define INF 999999999
#include<queue>
using namespace std;

struct graph
{
    bool color;
    int dis;
};
queue<int>Q;
void INITIALIZE_SINGLE_SOURCE(int s,graph g[])
{
    int i;
    for(i=0;i<X;i++)
    {
        g[i].color=false;
        g[i].dis=INF;
    }
    g[s].dis=0;
}
void RELAX(int u, int v,graph g[],int mat[][X])
{
    if(g[v].dis>g[u].dis+mat[u][v])
    {
        g[v].color=true;
        g[v].dis=g[u].dis+mat[u][v];
        //cout<<"cling "<<v<<" "<<g[u].dis<<" "<<mat[u][v]<<" "<<g[v].dis<<endl;
    }
}
void DIJKSTRA(int s,int t,int n,int mat[][X],graph g[])
{
    INITIALIZE_SINGLE_SOURCE(s,g);
    int u,i;
    Q.push(s);
    while(!Q.empty())
    {
        u=Q.front();
        //cout<<"U "<<u<<endl;
        Q.pop();
        for(i=0;i<X;i++)
        {
            if(mat[u][i]!=0)
            {
                //cout<<"PRO "<<u<<" "<<i<<" "<<mat[u][i]<<endl;
                if(g[i].color==false)
                {
                    Q.push(i);
                }
                RELAX(u,i,g,mat);
            }
        }
    }

}
int main()
{
    //freopen("tempin.txt","r",stdin);
   // freopen("tempout.txt","w",stdout);
    int test,n,m,s,t,i,j,x,y,temp;
    cin>>test;
    for(i=0; i<test; i++)
    {
        int mat[X][X];
        struct graph g[X];
        memset(mat,0,sizeof mat);
        cin>>n>>m>>s>>t;
        for(j=0; j<m; j++)
        {
            cin>>x>>y>>temp;
            mat[x][y]=temp;
            mat[y][x]=temp;
        }
        DIJKSTRA(s,t,n,mat,g);
        if(g[t].dis==INF)
        {
            cout<<"Case #"<<i+1<<": unreachable"<<endl;
        }
        else
        {
            cout<<"Case #"<<i+1<<": "<<g[t].dis<<endl;
        }
    }
    return 0;
}
