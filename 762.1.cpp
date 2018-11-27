#include<iostream>
#include<queue>
#include<string>
#include<stack>
#include<vector>
#include<map>
#define X 2000
using namespace std;
struct nodes
{
    int color;
    int dis;
    int parent;
};
queue<int>bfsq;
map<string,int>mark;
map<int,string>route;
void bfs(int node,int start,int ends,vector<int>mat[])
{
    struct nodes G[X];
    int i,u,v,length;
    stack<string>road;
    string line;
    for(i=0; i<node; i++)
    {
        G[i].color=0;
        G[i].dis=0;
        G[i].parent=0;
    }
    G[start].color=1;
    G[start].parent=-1;
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
        G[u].color=2;
    }
    if(G[ends].parent>0)
    {
        road.push(route[ends]);
        while(G[ends].parent>0)
        {
            //cout<<"g p "<<G[ends].parent<<" "<<ends<<endl;
            line=route[G[ends].parent];
            road.push(line);
            ends=G[ends].parent;
            //cout<<"g p "<<G[ends].parent<<" "<<ends<<endl;
        }
        line=road.top();
        road.pop();
        while(!road.empty())
        {
            cout<<line<<" ";
            line=road.top();
            road.pop();
            cout<<line<<endl;
        }
    }
    else
    {
        cout<<"No route"<<endl;
    }
}
int main()
{
    int test,counter,i,testcount=0;
    string a,b;
    while(cin>>test)
    {
        if(testcount>0)
        {
            cout<<endl;
        }
        counter=1;
        testcount++;
        vector<int>mat[X];
        for(i=0; i<test; i++)
        {
            cin>>a>>b;
            if(!mark[a])
            {
                mark[a]=counter;
                route[counter]=a;
                counter++;
            }
            if(!mark[b])
            {
                mark[b]=counter;
                route[counter]=b;
                counter++;
            }
            mat[mark[a]].push_back(mark[b]);
            mat[mark[b]].push_back(mark[a]);
        }
        cin>>a>>b;
        if(a==b)
        {
            cout<<a<<" "<<b<<endl;
        }
        else
        {
            bfs(counter,mark[a],mark[b],mat);
        }
        mark.clear();
        route.clear();
    }
    return 0;
}
