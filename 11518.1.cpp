#include<iostream>
#include<queue>
#include<cstring>
#include<vector>
#include<cstdio>
#define X 10100
using namespace std;

char visited[X];

int bfs(int source,int node,vector<int>mat[])
{
    queue<int>q;
    int counter=0,u,v,i,length;
    q.push(source);
    if(visited[source]==0)
    {
        visited[source]=1;
        counter++;
    }
   // cout<<"source "<<source<<endl;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        length=mat[u].size();
        for(i=0;i<length;i++)
        {
            v=mat[u][i];
            if(!visited[v])
            {
                visited[v]=1;
                counter++;
                q.push(v);
            }
        }
    }
    //cout<<"count "<<counter<<endl;
    return counter;
}
int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int test,n,m,l,i,a,b,counter;
    cin>>test;
    while(test--)
    {
        cin>>n>>m>>l;
        vector<int>mat[X];
        for(i=0;i<m;i++)
        {
            cin>>a>>b;
            mat[a].push_back(b);
        }
        counter=0;
        memset(visited,0,sizeof visited);
        for(i=0;i<l;i++)
        {
            cin>>a;
            counter+=bfs(a,n,mat);
        }
        cout<<counter<<endl;
    }
    return 0;
}
