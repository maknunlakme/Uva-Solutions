#include<iostream>
#include<vector>
#include<stack>
#include<cstdio>
#include<cstring>
#define X 100005
using namespace std;

vector<int>mat[X],rmat[X];
bool visit[X],counter[X];
int color[X];
stack<int> st;
int n,m,marker;

void clearing()
{
    stack<int> t;
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

void dfs2(int u,int mark)
{
    visit[u]=1;
    color[u]=mark;
    int i,v;
    for(i=0;i<rmat[u].size();i++)
    {
        v=rmat[u][i];
        if(!visit[v])
        {
            dfs2(v,mark);
        }
    }
}

int find_scc()
{
    int mark=0,i,u;
    clearing();
    memset(visit,0,sizeof visit);
    for(i=1;i<=n;i++)
    {
        if(!visit[i])
        {
            dfs1(i);
        }
    }
    memset(visit,0,sizeof visit);
    memset(color,0,sizeof color);
    while(!st.empty())
    {
        u=st.top();
        st.pop();
        if(!visit[u])
        {
            mark++;
            dfs2(u,mark);
        }
    }
    return mark;
}

int find_knock()
{
    int i,j,v,ans=0;
    memset(counter,0,sizeof counter);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<mat[i].size();j++)
        {
            v=mat[i][j];
            if(color[i]!=color[v])
            {
                counter[color[v]]++;
            }
        }
    }
    for(i=1;i<=marker;i++)
    {
        if(counter[i]==0) ans++;
    }
    return ans;
}


int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
        freopen("tempout.txt","w",stdout);
    #endif // maknun
    int test,i,x,y,t;
    scanf("%d",&test);
    for(t=1;t<=test;t++)
    {
        scanf("%d%d",&n,&m);
        memset(mat,0,sizeof mat);
        memset(rmat,0,sizeof rmat);
        for(i=0;i<m;i++)
        {
            scanf("%d%d",&x,&y);
            mat[x].push_back(y);
            rmat[y].push_back(x);
        }
        marker=find_scc();
        printf("Case %d: %d\n",t,find_knock());
    }
    return 0;
}

