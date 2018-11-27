#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<map>
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

vector<node>arr;
map<string,int>mark;
int parent[X+20];

class compare
{
public:
    bool operator() (const  node& a,const node& b)
    {
        return a.w<b.w;
    }
};

int find_union(int x)
{
    if(parent[x]==x) return x;
    else return parent[x]=find_union(parent[x]);
}

int mst(int n,int cc)
{
    int length=arr.size();
    int answer=0;
    int counter=0;
    int i,u,v;
    for(i=0;i<cc+10;i++) parent[i]=i;
    for(i=0;i<length;i++)
    {
        u=find_union(arr[i].u);
        v=find_union(arr[i].v);
        if(u!=v)
        {
            parent[u]=v;
            answer+=arr[i].w;
            counter++;
            //cerr<<"RR "<<counter<<" "<<n<<" "<<arr[i].w<<endl;
            if(counter==n) break;
        }
    }
    return answer;
}

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int test,n,m,i,c,counter;
    string a,b;
    cin>>test;
    while(test--)
    {
        arr.clear();
        mark.clear();
        counter=1;
        cin>>n>>m;
        for(i=0;i<m;i++)
        {
            cin>>a>>b>>c;
            if(!mark[a]) mark[a]=counter++;
            if(!mark[b]) mark[b]=counter++;
            arr.push_back(node(mark[a],mark[b],c));
        }
        sort(arr.begin(),arr.end(),compare());
        cout<<mst(n-1,counter)<<endl;
        if(test!=0) cout<<endl;
    }
    return 0;
}
