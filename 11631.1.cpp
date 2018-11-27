#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#define X 210000
using namespace std;

int parent[X+10];

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
    bool operator () (const node& a,const node& b)
    {
        return a.w<b.w;
    }
};

vector<node>arr;

int find_union(int x)
{
    if(parent[x]==x) return x;
    else return parent[x]=find_union(parent[x]);
}

int mst(int n)
{
    int length=arr.size();
    int answer=0;
    int counter=0;
    int i,u,v;
    for(i=0;i<=n;i++) parent[i]=i;
    for(i=0;i<length;i++)
    {
        u=find_union(arr[i].u);
        v=find_union(arr[i].v);
        if(u!=v)
        {
            parent[u]=v;
            answer+=arr[i].w;
            counter++;
            if(counter==n) break;
        }
    }
    return answer;
}

int main()
{
    int n,m,i,u,v,w,total;
    while(1)
    {
        scanf("%d%d",&n,&m);
        arr.clear();
        total=0;
        if(n==0 and m==0) break;
        for(i=0;i<m;i++)
        {
            scanf("%d%d%d",&u,&v,&w);
            arr.push_back(node(u,v,w));
            total+=w;
        }
        sort(arr.begin(),arr.end(),compare());
        //cerr<<"RR "<<total<<" "<<mst(n)<<endl;
        printf("%d\n",total-mst(n));
    }
    return 0;
}
