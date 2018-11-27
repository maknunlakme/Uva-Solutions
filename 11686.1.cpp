#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#define X 1100000
using namespace std;

int discovery[X],finish[X],color[X];
vector<int>mat[X];
vector<pair<int,int> >topsort;
int ttime;
int white=0;
int grey=1;
int black=2;
bool cycle;

void dfs(int u)
{
    int length,i,v;
    ttime++;
    discovery[u]=ttime;
    color[u]=grey;
    length=mat[u].size();
    for(i=0; i<length; i++)
    {
        v=mat[u][i];
        if(color[v]==white) dfs(v);
        else if(color[v]==grey) cycle=true;
    }
    color[u]=black;
    ttime++;
    finish[u]=ttime;
    return;
}


int main()
{
    int n,m,i,u,v;
    while(1)
    {
        cin>>n>>m;
        if(n==0 and m==0) break;
        memset(color,0,sizeof color);
        memset(discovery,0,sizeof discovery);
        memset(finish,0,sizeof finish);
        for(i=0; i<=n; i++) mat[i].clear();
        topsort.clear();
        ttime=0;
        cycle=false;
        for(i=0; i<m; i++)
        {
            cin>>u>>v;
            mat[u].push_back(v);
        }
        for(i=1; i<=n; i++)
        {
            if(color[i]==white) dfs(i);
        }
        for(i=1; i<=n; i++)
        {
            topsort.push_back(make_pair(finish[i],i));
        }
        sort(topsort.begin(),topsort.end(),greater<pair<int,int > >());
        if(cycle==true)
        {
            cout<<"IMPOSSIBLE"<<endl;
        }
        else
        {
            for(i=0; i<n; i++)
            {
                cout<<topsort[i].second<<endl;
            }
        }
    }
    return 0;
}
