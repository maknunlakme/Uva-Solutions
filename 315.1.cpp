#include<iostream>
#include<string>
#include<vector>
#include<cstring>
#include<sstream>
#define X 110
using namespace std;

string line;
int parent[X],low[X],d[X];
bool visit[X],art[X];
int timee;
vector<int>mat[X];

void find_art(int u)
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
            find_art(v);
            low[u]=min(low[u],low[v]);
            if(d[u]<=low[v] and parent[u]!=-1)
            {
                art[u]=1;
            }
            child++;
        }
    }
    if(child>1 and parent[u]==-1)
    {
        art[u]=1;
    }
    return;
}


int main()
{
    int n,m,temp,counter,i;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        timee=0;
        counter=0;
        memset(mat,0,sizeof mat);
        memset(visit,0,sizeof visit);
        memset(low,0,sizeof low);
        memset(d,0,sizeof d);
        memset(parent,-1,sizeof parent);
        memset(art,0,sizeof art);
        while(1)
        {
            cin>>m;
            if(m==0)
                break;
            getline(cin,line);
            stringstream ll(line);
            while(ll>>temp)
            {
                mat[m].push_back(temp);
                mat[temp].push_back(m);
            }
        }
        for(i=1; i<=n; i++)
        {
            if(!visit[i])
                find_art(i);
        }
        for(i=1; i<=n; i++)
        {
            if(art[i]==1)
                counter++;
        }
        cout<<counter<<endl;
    }
    return 0;
}
