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
    int n,u,v,i,j;
    while(1)
    {
        cin>>n;
        if(n==0) break;
        memset(mat,0,sizeof mat);
        memset(color,-1,sizeof color);
        while(1)
        {
            cin>>u>>v;
            if(u==0 and v==0) break;
            mat[u].push_back(v);
            mat[v].push_back(u);
        }
        bi=true;
        for(i=1;i<=n;i++)
        {
            if(color[i]==-1)
            {
                dfs(i,1);
            }
        }
        if(bi==true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
