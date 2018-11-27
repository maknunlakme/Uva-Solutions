#include<iostream>
#include<vector>
#include<cstring>
#define X 210
using namespace std;

int color[X];
vector<int>mat[X];
int black,white;
bool bi;

int dfs(int u,int use)
{
    color[u]=use;
    if(use==1)
        black++;
    else
        white++;
    int i,v;
    for(i=0;i<mat[u].size();i++)
    {
        v=mat[u][i];
        if(color[v]==-1)
        {
            dfs(v,use^1);
        }
        if(color[u]==color[v])
        {
            bi=false;
        }
    }
}


int main()
{
    int test,n,m,u,v,i,ans;
    cin>>test;
    while(test--)
    {
        cin>>n>>m;
        memset(mat,0,sizeof mat);
        memset(color,-1,sizeof color);
        for(i=0;i<m;i++)
        {
            cin>>u>>v;
            mat[u].push_back(v);
            mat[v].push_back(u);
        }
        bi=true;
        ans=0;
        for(i=0;i<n;i++)
        {
            if(color[i]==-1)
            {
                white=0;
                black=0;
                dfs(i,1);
                if(white==0) white=100000;
                if(black==0) black=100000;
                ans+=min(white,black);
            }
        }
        if(bi==true)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
