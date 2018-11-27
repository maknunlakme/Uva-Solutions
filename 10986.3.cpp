#include <iostream>
#include <queue>
#include <vector>
#include<cstdio>
#include<cstring>
#include <climits>
#define X 20001
#define INF INT_MAX
using namespace std;
vector<pair<int,int> > mat[X];
int dis[X];
bool vis[X]={0};

void Dijkstra(int source)
{
    for(int i=0;i<X;i++)
    {
        dis[i]=INF;
    }
    class prioritize
    {
        public:
            bool operator ()(pair<int, int>&p1 ,pair<int, int>&p2)
            {
                return p1.second>p2.second;
            }
    };
    priority_queue<pair<int,int> ,vector<pair<int,int> >, prioritize> pq;
    pair<int,int>u;
    int x,y,length;
    dis[source]=0;
    pq.push(make_pair(source,dis[source]));
    while(!pq.empty())
    {
        u=pq.top();
        pq.pop();
        x=u.first;
        y=u.second;
        if(!vis[x])
        {
            vis[x]=true;
            length=mat[x].size();
            for(int i=0;i<length;i++)
            {
                if(!vis[mat[x][i].first] && mat[x][i].second+y<dis[mat[x][i].first])
                {
                    pq.push(make_pair(mat[x][i].first,(dis[mat[x][i].first]=mat[x][i].second+y)));
                }
            }
        }
    }
}

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int test,n,m,s,t,i,j,x,y,temp;
    cin>>test;
    for(i=0; i<test; i++)
    {
        memset(mat,0,sizeof mat);
        memset(vis,0,sizeof vis);
        cin>>n>>m>>s>>t;
        for(j=0; j<m; j++)
        {
            cin>>x>>y>>temp;
            mat[x].push_back(make_pair(y,temp));
            mat[y].push_back(make_pair(x,temp));
        }
        Dijkstra(s);
        if(dis[t]==INF)
        {
            cout<<"Case #"<<i+1<<": unreachable"<<endl;
        }
        else
        {
            cout<<"Case #"<<i+1<<": "<<dis[t]<<endl;
        }
    }
    return 0;
}
