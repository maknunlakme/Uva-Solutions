#include<iostream>
#define X 20100
#define INF 999999999
#include<queue>
using namespace std;
struct graph
{
    int color;
    int dis;
    int parent;
} g[X];
queue<int>Q;
void INITIALIZE_SINGLE_SOURCE(int s,int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        g[i].color=0;
        g[i].dis=INF;
        g[i].parent=0;
    }
    g[s].dis=0;
}
void RELAX(int u, int v,vector<int>mat[])
{
    if(g[v].dis>g[u].dis+mat[u][v])
    {
        g[v].color=1;
        g[v].dis=g[u].dis+mat[u][v];
        g[v].parent=u;
        //cout<<v<<" "<<g[u].dis<<" "<<mat[u][v]<<" "<<g[v].dis<<endl;
    }
}
void DIJKSTRA(int s,int t,int n,vector<int>mat[])
{
    INITIALIZE_SINGLE_SOURCE(s,n);
    int u,i,length;
    Q.push(s);
    while(!Q.empty())
    {
        u=Q.front();
        //cout<<"U "<<u<<endl;
        Q.pop();
        length=mat[u].size();
        for(i=0; i<length; i++)
        {
            //cout<<"PRO "<<u<<" "<<i<<endl;
            if(g[i].color==0)
            {
                Q.push(i);
            }
            RELAX(u,i,mat);

        }
        g[u].color=2;
    }

}
int main()
{
    int test,n,m,s,t,i,j,x,y,temp;
    cin>>test;
    for(i=0; i<test; i++)
    {
        int mat[X][X];
        memset(mat,0,sizeof mat);
        cin>>n>>m>>s>>t;
        for(j=0; j<m; j++)
        {
            cin>>x>>y>>temp;
            mat[x][y]=temp;
        }
        DIJKSTRA(s,t,n,mat);
        cout<<"Dis "<<g[t].dis<<endl;
    }
    return 0;
}
