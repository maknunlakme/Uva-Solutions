#include<iostream>
#define X 1000000
using namespace std;

int arr[X+10],parent[X+10];

int find_union(int x)
{
    if(parent[x]==x) return x;
    else return parent[x]=find_union(parent[x]);
}

int main()
{
    int test,i,maxi,u,v,n,m;
    cin>>test;
    while(test--)
    {
        cin>>n>>m;
        maxi=0;
        for(i=1;i<=n;i++)
        {
            arr[i]=0;
            parent[i]=i;
        }
        while(m--)
        {
            cin>>u>>v;
            u=find_union(u);
            v=find_union(v);
            if(u!=v) parent[u]=v;
        }
        for(i=1;i<=n;i++)
        {
            u=find_union(i);
            arr[u]++;
            maxi=max(maxi,arr[u]);
        }
        cout<<maxi<<endl;
    }
    return 0;
}
