#include<iostream>
#define X 510
using namespace std;

int mat[X][X];
int n,m;
void bfs()
{
    queue<int>q;
    q.push(1);
    visit[1]=1;
    dis1[1]=0;
    dis2[1]=0;
    int u,v,i,maxi=0,index;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(i=1;i<=n;i++)
        {
            v=mat[u][i];
            if(mat[u][i]!=0 and visit[i]==0)
            {
                q.push(i);
                visit[i]=1;
                dis1[i]=dis[u]+1;
                if(maxi<dis1[i])
                {
                    maxi=dis1[i];
                    index=i;
                }
                dis2[i]=dis2[u]+v;
            }
        }
    }
}


int main()
{
    int i;
    while(1)
    {
        cin>>n>>m;
        for(i=0;i<m;i++)
        {
            cin>>a>>b>>c;
            mat[a][b]=c;
            mat[b][a]=c;
        }
    }
    return 0;
}
