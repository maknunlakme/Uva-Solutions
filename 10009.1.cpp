#include<iostream>
#include<queue>
#include<map>
#include<vector>
#include<stack>
#define X 10000
using namespace std;

map<char,int>road;
map<int,char>city;
struct nodes
{
    int color;
    int dis;
    int parent;
};

void bfs(int node,int start,int ends,vector<int>mat[])
{
    struct nodes G[X];
    int i,u,v,length;
    queue<int>bfsq;
    stack<char>name;
    for(i=0; i<node; i++)
    {
        G[i].color=0;
        G[i].dis=0;
        G[i].parent=-1;
    }
    G[start].color=1;
    bfsq.push(start);
    while(!bfsq.empty())
    {
        u=bfsq.front();
        bfsq.pop();
        length=mat[u].size();
        for(i=0; i<length; i++)
        {
            v=mat[u][i];
            if(G[v].color==0)
            {
                G[v].color=1;
                G[v].dis=G[u].dis+1;
                G[v].parent=u;
                bfsq.push(v);
            }
        }
        G[v].color=2;
    }
    name.push(city[ends]);
    while(G[ends].parent>0)
    {
        name.push(city[G[ends].parent]);
        ends=G[ends].parent;
    }
    while(!name.empty())
    {
        cout<<name.top();
        name.pop();
    }
    cout<<endl;
    return;
}

int main()
{
    int test,m,n,counter,i;
    string a,b;
    cin>>test;
    while(test--)
    {
        vector<int>mat[X];
        cin>>m>>n;
        counter=1;
        for(i=0; i<m; i++)
        {
            cin>>a>>b;
            if(!road[a[0]])
            {
                road[a[0]]=counter;
                city[counter]=a[0];
                counter++;
            }
            if(!road[b[0]])
            {
                road[b[0]]=counter;
                city[counter]=b[0];
                counter++;
            }
            mat[road[a[0]]].push_back(road[b[0]]);
            mat[road[b[0]]].push_back(road[a[0]]);
        }
        for(i=0; i<n; i++)
        {
            cin>>a>>b;
            bfs(counter,road[a[0]],road[b[0]],mat);
        }
        if(test>0)
        {
            cout<<endl;
        }
        road.clear();
        city.clear();
    }
    return 0;
}
