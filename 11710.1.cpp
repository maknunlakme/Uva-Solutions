#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#define X 100000
using namespace std;

map<string,int>mark;
int parent[X+10];
int cc;

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

vector<node>arr;

class compare
{
public:
    bool operator() (const node& a, const node& b)
    {
        return a.w<b.w;
    }
};

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
    for(i=0;i<=n+5;i++) parent[i]=i;
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
    //cerr<<"MM "<<cc<<" "<<answer<<endl;
    cc=counter;
    return answer;
}

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    string line,a,b;
    int n,m,c,i,answer;
    while(1)
    {
        scanf("%d%d",&n,&m);
        arr.clear();
        mark.clear();
        if(n==0 and m==0) break;
        for(i=1;i<=n;i++)
        {
            cin>>line;
            mark[line]=i;
        }
        for(i=0;i<m;i++)
        {
            cin>>a>>b>>c;
            arr.push_back(node(mark[a],mark[b],c));
        }
        cin>>line;
        sort(arr.begin(),arr.end(),compare());
        answer=mst(n-1);
        //cerr<<"CC "<<cc<<" "<<answer<<endl;
        if(cc==n-1) printf("%d\n",answer);
        else printf("Impossible\n");
    }
    return 0;
}
