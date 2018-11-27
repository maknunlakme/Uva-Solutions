#include<iostream>
#define X 11000
using namespace std;

int element[X+10],parent[X+10];

int find_union(int x)
{
    if(parent[x]==x) return x;
    else return parent[x]=find_union(parent[x]);
}

int main()
{
    int test,n,m,i,u,v;
    bool impossible;
    cin>>test;
    while(test--)
    {
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            cin>>element[i];
            parent[i]=i;
        }
        for(i=0;i<m;i++)
        {
            cin>>u>>v;
            u=find_union(u);
            v=find_union(v);
            if(u!=v)
            {
                parent[u]=v;
                element[v]+=element[u];
            }
        }
        impossible=false;
        for(i=0;i<n;i++)
        {
            u=find_union(i);
            if(element[u]!=0)
            {
                impossible=true;
            }
        }
        if(impossible==true) cout<<"IMPOSSIBLE"<<endl;
        else cout<<"POSSIBLE"<<endl;
    }
    return 0;
}
