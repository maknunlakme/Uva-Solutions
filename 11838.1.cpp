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

int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
        freopen("tempout.txt","w",stdout);
    #endif // maknun
    int i,x,y,z;
    while(1)
    {
        scanf("%d%d",&n,&m);
        if(n==0 and m==0) break;
        memset(mat,0,sizeof mat);
        memset(rmat,0,sizeof rmat);
        for(i=0;i<m;i++)
        {
            scanf("%d%d%d",&x,&y,&z);
            if(z==2)
            {
                mat[y].push_back(x);
                rmat[x].push_back(y);
            }
            mat[x].push_back(y);
            rmat[y].push_back(x);
        }
        if(find_scc()==1)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}

