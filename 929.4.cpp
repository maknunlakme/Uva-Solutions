#include<iostream>
#include<cstring>
#include<climits>
#include<queue>
#include<vector>
#define X 1100
#define Y 1000000
using namespace std;

int arr[X][X],brr[X][X],mark[X][X];
vector<pair<int,int> >mat[Y];
int dis[Y];
bool vis[Y];
int counter;
void Dijkstra(int source)
{
    for(int i=0; i<=counter; i++)
    {
        dis[i]=INT_MAX;
        vis[i]=0;
    }
    class prioritize
    {
    public:
        bool operator ()(pair<int, int>&p1 ,pair<int, int>&p2)
        {
            return p1.second>p2.second;
        }
    };
    priority_queue<pair<int,int> ,vector<pair<int,int> >, prioritize> pq;
    pair<int,int>u;
    int x,y,length;
    dis[source]=arr[0][0];
    pq.push(make_pair(source,dis[source]));
    while(!pq.empty())
    {
        u=pq.top();
        pq.pop();
        x=u.first;
        y=u.second;
        if(!vis[x])
        {
            vis[x]=true;
            length=mat[x].size();
            for(int i=0; i<length; i++)
            {
                if(!vis[mat[x][i].first] && mat[x][i].second+y<dis[mat[x][i].first])
                {
                    dis[mat[x][i].first]=mat[x][i].second+y;
                    //cerr<<"PP "<<x<<" "<<mat[x][i].first<<" "<<dis[mat[x][i].first]<<endl;
                    pq.push(make_pair(mat[x][i].first,dis[mat[x][i].first]));
                }
            }
        }
    }
}

int main()
{
    int test,n,m,i,j;
    cin>>test;
    while(test--)
    {
        cin>>n>>m;
        counter=0;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                mat[counter].clear();
                cin>>arr[i][j];
                mark[i][j]=counter++;
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(i-1>=0) mat[mark[i][j]].push_back(make_pair(mark[i-1][j],arr[i-1][j]));
                if(j-1>=0) mat[mark[i][j]].push_back(make_pair(mark[i][j-1],arr[i][j-1]));
                if(i+1<n)  mat[mark[i][j]].push_back(make_pair(mark[i+1][j],arr[i+1][j]));
                if(j+1<m)  mat[mark[i][j]].push_back(make_pair(mark[i][j+1],arr[i][j+1]));
            }
        }
        Dijkstra(0);
        cout<<dis[counter-1]<<endl;
    }
    return 0;
}
