#include<iostream>
#include<cstdio>
#include<map>
#define X 10000
using namespace std;

map<string,int>mark;

int element[X+10],parent[X+10];

int find_union(int x)
{
    if(parent[x]==x) return x;
    else return parent[x]=find_union(parent[x]);
}


int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int n,m,maxi,i,u,v;
    string a,b;
    while(1)
    {
        cin>>n>>m;
        maxi=1;
        if(n==0 and m==0)
        {
            break;
        }
        for(i=1;i<=n;i++)
        {
            element[i]=1;
            parent[i]=i;
        }
        for(i=0;i<n;i++)
        {
            cin>>a;
            mark[a]=i+1;
        }
        for(i=0;i<m;i++)
        {
            cin>>a>>b;
            u=find_union(mark[a]);
            v=find_union(mark[b]);
            if(u!=v)
            {
                parent[u]=v;
                element[v]+=element[u];
                maxi=max(maxi,element[v]);
            }
        }
        cout<<maxi<<endl;
        mark.clear();
    }
    return 0;
}
