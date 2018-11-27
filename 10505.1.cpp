#include<iostream>
#include<vector>
#include<cstdio>
#include<cstring>
#define X 210
using namespace std;

int white,black;
int color[X];
vector<int>mat[X];
int n;
bool bi;

void dfs(int u,int use)
{
    color[u]=use;
    if(use==1)
        black++;
    else
        white++;
    int i,v;
    for(i=0; i<mat[u].size(); i++)
    {
        v=mat[u][i];
        if(color[v]==-1)
        {
            dfs(v,use^1);
        }
        //cerr<<"U :"<<u<<" "<<v<<" "<<color[u]<<" "<<color[v]<<endl;
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
    int test,ans,temp,i,j,k;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        ans=0;
        memset(color,-1,sizeof color);
        memset(mat,0,sizeof mat);
        for(i=1; i<=n; i++)
        {
            scanf("%d",&k);
            for(j=0; j<k; j++)
            {
                scanf("%d",&temp);
                if(temp<=n)
                {
                    mat[i].push_back(temp);
                    mat[temp].push_back(i);
                }
            }
        }

        for(i=1; i<=n; i++)
        {
            if(color[i]==-1)
            {
                white=0;
                black=0;
                bi=true;
                dfs(i,1);
                //cerr<<"DDDD "<<bi<<endl;
                if(bi==true)
                {
                    ans+=max(white,black);
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
