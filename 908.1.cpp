#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<map>
#define X 1000010
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
    bool operator () (const node& a,const node& b)
    {
        return a.w<b.w;
    }
};

vector<node>arr;
int parent[X+10];

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
    int n,m,k,i,u,v,w,total,test=0;
    while(cin>>n)
    {
        arr.clear();
        if(test!=0) printf("\n");
        test++;
        total=0;
        for(i=0; i<n-1; i++)
        {
            scanf("%d%d%d",&u,&v,&w);
            total+=w;
        }
        scanf("%d",&k);
        for(i=0; i<k; i++)
        {
            scanf("%d%d%d",&u,&v,&w);
            arr.push_back(node(u,v,w));
        }
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            scanf("%d%d%d",&u,&v,&w);
            arr.push_back(node(u,v,w));
        }
        sort(arr.begin(),arr.end(),compare());
        printf("%d\n",total);
        printf("%d\n",mst(n));
    }
    return 0;
}

