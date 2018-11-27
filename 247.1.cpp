#include<iostream>
#include<cstdio>
#include<stack>
#include<cstring>
#include<vector>
#include<map>
#define X 30
using namespace std;

vector<int>mat[X],rmat[X],scc[X];
map<string,int>mark;
map<int,string>unmark;
stack<int>st;
bool visit[X];
int n,m;

void clearing()
{
    stack<int>t;
    swap(st,t);
}

void dfs1(int u)
{
    visit[u]=1;
    int i,v;
    for(i=0; i<mat[u].size(); i++)
    {
        v=mat[u][i];
        if(!visit[v])
        {
            dfs1(v);
        }
    }
    st.push(u);
}

void dfs2(int u,int marker)
{
    //cerr<<"AAA "<<marker<<" "<<u<<" "<<unmark[u]<<endl;
    scc[marker].push_back(u);
    visit[u]=1;
    int i,v;
    for(i=0; i<rmat[u].size(); i++)
    {
        v=rmat[u][i];
        if(!visit[v])
        {
            dfs2(v,marker);
        }
    }
}

int find_scc()
{
    int i,marker=0,u;
    memset(visit,0,sizeof visit);
    clearing();
    for(i=1; i<=n; i++)
    {
        if(!visit[i])
        {
            dfs1(i);
        }
    }
    memset(visit,0,sizeof visit);
    while(!st.empty())
    {
        u=st.top();
        st.pop();
        if(!visit[u])
        {
            marker++;
            dfs2(u,marker);
        }
    }
    return marker;
}


int main()
{
    string a,b;
    int counter,t=0,i,j;
    while(1)
    {
        memset(mat,0,sizeof mat);
        memset(rmat,0,sizeof rmat);
        memset(scc,0,sizeof scc);
        mark.clear();
        unmark.clear();
        cin>>n>>m;
        t++;
        if(n==0 and m==0)
            break;
        counter=1;
        for(i=0; i<m; i++)
        {
            cin>>a>>b;
            if(!mark[a])
            {
                mark[a]=counter;
                unmark[counter]=a;
                counter++;
            }
            if(!mark[b])
            {
                mark[b]=counter;
                unmark[counter]=b;
                counter++;
            }
            mat[mark[a]].push_back(mark[b]);
            rmat[mark[b]].push_back(mark[a]);
        }
        counter=find_scc();
        cout<<"Calling circles for data set "<<t<<":"<<endl;
        for(i=1; i<=counter; i++)
        {
            cout<<unmark[scc[i][0]];
            for(j=1; j<scc[i].size(); j++)
            {
                cout<<", "<<unmark[scc[i][j]];
            }
            cout<<endl;
        }
    }
    return 0;
}
