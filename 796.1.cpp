#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#define X 100010
using namespace std;

vector<int>mat[X];
int timee;
int d[X],low[X],parent[X];
bool visit[X];
vector<pair<int,int> >edge;

void find_art_point(int u)
{
    timee++;
    low[u]=d[u]=timee;
    visit[u]=1;
    int child=0,i,v;
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
        }
        else if(!visit[v])
        {
            parent[v]=u;
            find_art_point(v);
            low[u]=min(low[u],low[v]);
            if(d[u]<low[v])
            {
                if(u<v) edge.push_back({u,v});
                else edge.push_back({v,u});
            }
            child++;
        }
    }
    return;
}

int main()
{
    int n,m,i,j,temp,node;
    while(cin>>n)
    {
        memset(mat,0,sizeof mat);
        edge.clear();
        timee=0;
        for(i=0;i<n;i++)
        {
            scanf("%d (%d)",&node,&m);
            for(j=0;j<m;j++)
            {
                cin>>temp;
                mat[node].push_back(temp);
            }
        }
        memset(low,62,sizeof low);
        memset(visit,0,sizeof visit);
        memset(d,62,sizeof d);
        memset(parent,-1,sizeof parent);
        for(i=0;i<n;i++)
        {
            if(!visit[i]) find_art_point(i);
        }
        sort(edge.begin(),edge.end());
        cout<<edge.size()<<" critical links"<<endl;
        for(i=0;i<edge.size();i++)
        {
            cout<<edge[i].first<<" - "<<edge[i].second<<endl;
        }
        cout<<endl;
    }
    return 0;
}
