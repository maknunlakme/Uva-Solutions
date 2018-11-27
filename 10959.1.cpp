#include<iostream>
#include<vector>
#include<cstring>
#include<queue>
#define X 1100
using namespace std;

vector<int>mat[X];
bool visit[X];
int dis[X];

void bfs()
{
    queue<int>q;
    memset(dis,0,sizeof  dis);
    memset(visit,0,sizeof visit);
    q.push(0);
    dis[0]=0;
    visit[0]=1;
    int i,u,v,length;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        length=mat[u].size();
        for(i=0;i<length;i++)
        {
            v=mat[u][i];
            if(visit[v]==0)
            {
                q.push(v);
                dis[v]=dis[u]+1;
                visit[v]=1;
                //cerr<<u<<" "<<v<<" "<<dis[v]<<endl;
            }
        }
    }
}



int main()
{
    int test,n,m,i,a,b;
    cin>>test;
    while(test--)
    {
        cin>>n>>m;
        for(i=0;i<=n;i++) mat[i].clear();
        for(i=0;i<m;i++)
        {
            cin>>a>>b;
            mat[a].push_back(b);
            mat[b].push_back(a);
        }
        bfs();
        for(i=1;i<n;i++)
        {
            cout<<dis[i]<<endl;
        }
        if(test>0) cout<<endl;
    }
    return 0;
}
