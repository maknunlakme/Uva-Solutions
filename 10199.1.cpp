#include<iostream>
#include<vector>
#include<cstring>
#include<map>
#include<algorithm>
#define X 110
using namespace std;

int parent[X],low[X],d[X];
bool visit[X],art[X];
vector<int>mat[X];
map<string,int>mark;
map<int,string>unmark;
vector<string>blah;
int timee,counter;

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
    int n,m,i,case_counter=0;
    string line,a,b;
    while(cin>>n)
    {
        if(n==0) break;
        case_counter++;
        counter=0;
        timee=0;
        memset(parent,-1,sizeof parent);
        memset(art,0,sizeof art);
        memset(d,0,sizeof d);
        memset(low,0,sizeof low);
        memset(mat,0,sizeof mat);
        memset(visit,0,sizeof visit);
        mark.clear();
        unmark.clear();
        blah.clear();
        for(i=1;i<=n;i++)
        {
            cin>>line;
            mark[line]=i;
            unmark[i]=line;
        }
        cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>a>>b;
            mat[mark[a]].push_back(mark[b]);
            mat[mark[b]].push_back(mark[a]);
        }
        for(i=1;i<=n;i++)
        {
            if(!visit[i])
            {
                find_art(i);
            }
        }
        for(i=1;i<=n;i++)
        {
            if(art[i])
            {
                blah.push_back(unmark[i]);
            }
        }
        sort(blah.begin(),blah.end());
        if(case_counter>1) cout<<endl;
        cout<<"City map #"<<case_counter<<": "<<blah.size()<<" camera(s) found"<<endl;
        for(i=0;i<blah.size();i++)
        {
            cout<<blah[i]<<endl;
        }
    }
    return 0;
}
