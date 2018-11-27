#include<iostream>
#include<vector>
#include<cstring>
#define X 310
using namespace std;

vector<int>mat[X];
int color[X];
bool bi;

void dfs(int u,int use)
{
    color[u]=use;
    int i,v;
    for(i=0;i<mat[u].size();i++)
    {
        v=mat[u][i];
        if(color[v]==-1)
        {
            dfs(v,use^1);
        }
        //cerr<<"AA "<<u<<" "<<v<<" "<<color[u]<<" "<<color[v]<<endl;
        if(color[u]==color[v])
        {
            bi=false;
        }
    }
}



int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
        freopen("tempout.txt","w",stdout);
    #endif // maknun
    int n,m,u,v,i,j;
    while(1)
    {
        cin>>n;
        if(n==0) break;
        cin>>m;
        memset(mat,0,sizeof mat);
        memset(color,-1,sizeof color);
        for(i=0;i<m;i++)
        {
            cin>>u>>v;
            mat[u].push_back(v);
            mat[v].push_back(u);
        }
        bi=true;
        for(i=0;i<n;i++)
        {
            if(color[i]==-1)
            {
                dfs(i,1);
            }
        }
        if(bi==true)
        {
            cout<<"BICOLORABLE."<<endl;
        }
        else
        {
            cout<<"NOT BICOLORABLE."<<endl;
        }
    }
    return 0;
}

