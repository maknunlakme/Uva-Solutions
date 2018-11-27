#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cstring>
#define X 100000
using namespace std;

class node
{
public:
    int u,v,w;

    node(int u,int v,int w)
    {
        this->u=u;
        this->v=v;
        this->w=w;
    }
};

class compare
{
public:
    bool operator() (const node& a,const node& b)
    {
        return a.w<b.w;
    }
};

vector<node>arr;
int parent[X],mark[X];

int find_union(int x)
{
    if(parent[x]==x) return x;
    else return parent[x]=find_union(parent[x]);
}

void mst(int n)
{
    int length=arr.size();
    int counter=0;
    int i,u,v;
    for(i=0;i<n+10;i++) parent[i]=i;
    memset(mark,0,sizeof mark);
    for(i=0;i<length;i++)
    {
        u=find_union(arr[i].u);
        v=find_union(arr[i].v);
        if(u!=v)
        {
            parent[u]=v;
            counter++;
            mark[i]=1;
            if(counter==n) break;
        }
    }
}

int main()
{
    int n,m,i,a,b,c;
    bool printed;
    while(1)
    {
        scanf("%d%d",&n,&m);
        if(n==0 and m==0) break;
        arr.clear();
        printed=false;
        for(i=0;i<m;i++)
        {
            scanf("%d%d%d",&a,&b,&c);
            arr.push_back(node(a,b,c));
        }
        sort(arr.begin(),arr.end(),compare());
        mst(n-1);
        //cerr<<"AAAA"<<endl;
        for(i=0;i<m;i++)
        {
            if(mark[i]==0 and printed==false)
            {
                printed=true;
                printf("%d",arr[i].w);
            }
            else if(mark[i]==0)
            {
                printf(" %d",arr[i].w);
            }
        }
        if(printed==true) printf("\n");
        else printf("forest\n");
    }
    return 0;
}
