#include<iostream>
#include<vector>
#include<climits>
#include<cstdio>
#include<cstring>
#include<queue>
#define X 110
using namespace std;

int mat[X][X];
bool vis[X]={0};
int dis[X][X];

int fx[]={+0,+0,+1,-1};
int fy[]={+1,-1,+0,+0};

class prioritize
{
public:
    bool operator()(pair<int,int>&p1,pair<int,int>&p2)
    {
        return p1.second>p2.second;
    }
};

int dijkstra(int source)
{
    int i,x,y,length;
    for(i=0;i<X;i++)
    {
        dis[i]=INT_MAX;
    }
    priority_queue<pair<int,int>,vector<pair<int,int> >,prioritize>pq;
    pair<int,int> u;
    dis[source]=0;
    pq.push(make_pair(source,dis[source]));
    while(!pq.empty())
    {
        u=pq.top();
        pq.pop();
        x=u.first;
        y=u.second;
        length=mat[x].size();
        for(i=0;i<length;i++)
        {
            if(!vis[mat[x][i].first]&&mat[x][i].second+y<dis[mat[x][i].first])
            {
                dis[mat[x][i].first]=mat[x][i].second+y;
                pq.push(make_pair(mat[x][i].first,dis[mat[x][i].first]));
            }
        }
    }
}

int main()
{
    int test,i,j,temp,row,column;
    cin>>test;
    while(test--)
    {
        cin>>row>>column;
        for(i=0;i<row;i++)
        {
            for(j=0;j<column;j++)
            {
                cin>>temp;
                mat[i].push_back(make_pair(j,temp));
                mat[j].push_back(make_pair(i,temp));
            }
        }
        dijkstra(0);
        cout<<"ans "<<dis[dis[row]]<<endl;
    }
    return 0;
}

