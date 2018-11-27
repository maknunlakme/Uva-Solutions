#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
#define X 3000
using namespace std;

int maxiboom,boomday,maxiday;
int bfs(int node,int source,vector<int>mat[])
{
    char visited[X];
    int distances[X];
    queue<int>bfsq;

    int i,u,v,counter,length;
    memset(visited,0,sizeof visited);
    memset(distances,-1,sizeof distances);
    visited[source]=1;
    distances[source]=0;
    bfsq.push(source);
    counter=0;
    maxiboom=0;
    boomday=0;
    while(!bfsq.empty())
    {
        u=bfsq.front();
        bfsq.pop();
        length=mat[u].size();
        for(i=0;i<length;i++)
        {
            v=mat[u][i];
            if(!visited[v])
            {
                visited[v]=1;
                distances[v]=distances[u]+1;
                if(distances[v]>boomday)
                {
                    boomday=distances[v];
                    counter=0;
                }
                if(distances[v]==boomday)
                {
                    counter++;
                }
                if(counter>maxiboom)
                {
                    maxiboom=counter;
                    maxiday=boomday;
                }
                bfsq.push(v);
            }
        }
    }
}
int main()
{
    int node,boom,query,i,j,temp;
    vector<int>mat[X];
    cin>>node;
    for(i=0;i<node;i++)
    {
        cin>>boom;
        for(j=0;j<boom;j++)
        {
            cin>>temp;
            mat[i].push_back(temp);
        }
    }
    cin>>query;
    for(i=0;i<query;i++)
    {
        cin>>temp;
        bfs(node,temp,mat);
        cout<<maxiboom;
        if(maxiboom>0)
        {
            cout<<" "<<maxiday<<endl;
        }
        else
        {
            cout<<endl;
        }
    }
    return 0;
}
