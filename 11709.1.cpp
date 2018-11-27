#include<iostream>
#include<vector>
#include<stack>
#include<cstring>
#include<map>
#define X 1005
using namespace std;

vector<int>mat[X],rmat[X];
map<string,int>mark;
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
    for(i=0;i<mat[u].size();i++)
    {
        v=mat[u][i];
        if(!visit[v])
        {
            dfs1(v);
        }
    }
    st.push(u);
}

void dfs2(int u)
{
    visit[u]=1;
    int i,v;
    for(i=0;i<rmat[u].size();i++)
    {
        v=rmat[u][i];
        if(!visit[v])
        {
            dfs2(v);
        }
    }
}

int find_scc()
{
    int i,counter=0,u;
    memset(visit,0,sizeof visit);
    clearing();
    for(i=1;i<=n;i++)
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
            counter++;
            dfs2(u);
        }
    }
    return counter;
}


int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
        freopen("tempout.txt","w",stdout);
    #endif // maknun
    string line,a,b;
    int i;
    while(1)
    {
        cin>>n>>m;
        if(n==0 and m==0) break;
        memset(mat,0,sizeof mat);
        memset(rmat,0,sizeof rmat);
        getchar();
        for(i=1;i<=n;i++)
        {
            getline(cin,line);
            mark[line]=i;
        }
        for(i=0;i<m;i++)
        {
            getline(cin,a);
            getline(cin,b);
            mat[mark[a]].push_back(mark[b]);
            rmat[mark[b]].push_back(mark[a]);
        }
        cout<<find_scc()<<endl;
    }
    return 0;
}
