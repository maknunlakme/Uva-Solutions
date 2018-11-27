#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#define X 10010
using namespace std;

int art[X],low[X],d[X],parent[X];
bool visit[X];
vector<int>mat[X];
vector<pair<int,int> >arr;
int timee;

void find_art(int u)
{
    d[u]=low[u]=++timee;
    visit[u]=1;
    int i,v,child=0;
    for(i=0;i<mat[u].size();i++)
    {
        v=mat[u][i];
        if(!visit[v])
        {
            parent[v]=u;
            find_art(v);
            low[u]=min(low[u],low[v]);
            if(d[u]<=low[v] and parent[u]!=-1)
            {
                art[u]++;
            }
            child++;
        }
        else if(v!=parent[u])
        {
            low[u]=min(low[u],d[v]);
        }
    }
    if(child>1 and parent[u]==-1)
    {
        art[u]=child-1;
    }
    return;
}


int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
        freopen("tempout.txt","w",stdout);
    #endif // maknun
    int n,m,i,u,v,add;
    while(1)
    {
        cin>>n>>m;
        timee=0;
        if(n==0 and m==0) break;
        memset(art,0,sizeof art);
        memset(low,0,sizeof low);
        memset(d,0,sizeof d);
        memset(mat,0,sizeof mat);
        memset(visit,0,sizeof visit);
        memset(parent,-1,sizeof parent);
        arr.clear();
        while(1)
        {
            cin>>u>>v;
            if(u==-1 and v==-1) break;
            mat[u].push_back(v);
            mat[v].push_back(u);
        }
        add=0;
        for(i=0;i<n;i++)
        {
            if(!visit[i])
            {
                find_art(i);
                add++;
            }
        }
        for(i=0;i<n;i++)
        {
            arr.push_back({art[i]+add,i*(-1)});
        }
        sort(arr.begin(),arr.end(),greater<pair<int,int> >());
        for(i=0;i<m;i++)
        {
            cout<<arr[i].second*(-1)<<" "<<arr[i].first<<endl;
        }
        cout<<endl;
    }
    return 0;
}
