#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<vector>
#include<climits>
#define X 1100
using namespace std;

int s,cc;

class node
{
public:
    int u,v;
    double w;

    node(int u,int v,double w)
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
vector<pair<int,int> >brr;
int parent[X+10];

int find_union(int x)
{
    if(parent[x]==x) return x;
    else return parent[x]=find_union(parent[x]);
}

double mst(int r,int n)
{
    int length=arr.size();
    double answer=0;
    int counter=cc;
    int i,u,v;
    if(counter==0)
    {
        for(i=0;i<=n+5;i++) parent[i]=i;
    }
    for(i=s;i<length and arr[i].w<=r;i++)
    {
        //cerr<<"QQQ " <<arr[i].u<<" "<<arr[i].v<<" "<<arr[i].w<<endl;
        u=find_union(arr[i].u);
        v=find_union(arr[i].v);
        if(u!=v)
        {
            parent[u]=v;
            //cerr<<"WWW "<<u<<" "<<parent[u]<<" "<<v<<endl;
            answer+=arr[i].w;
            counter++;
            if(counter==n) break;
        }
    }
    s=i;
    cc=counter;
    return answer;
}

double dis(pair<int,int> a,pair<int,int> b)
{
    double x1=a.first;
    double y1=a.second;
    double x2=b.first;
    double y2=b.second;
    //cerr<<"AA "<<x1<<" "<<x2<<" "<<y1<<" "<<y2<<endl;
    double dis=sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    return dis;
}

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int test,t,i,j,n,r,x,y,a,b,c,counter;
    double temp;
    scanf("%d",&test);
    for(t=1;t<=test;t++)
    {
        arr.clear();
        brr.clear();
        scanf("%d%d",&n,&r);
        for(i=0;i<n;i++)
        {
            scanf("%d%d",&x,&y);
            brr.push_back({x,y});
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                temp=dis(brr[i],brr[j]);
                //cerr<<"TT "<<temp<<" "<<i<<" "<<j<<endl;
                arr.push_back(node(i+1,j+1,temp));
            }
        }
        sort(arr.begin(),arr.end(),compare());
        s=0;
        cc=0;
        b=round(mst(r,n-1));
        counter=0;
        for(i=1;i<=n;i++)
        {
            if(parent[i]==i) counter++;
        }
        a=counter;
        //cerr<<"CC "<<counter<<endl;
        if(cc!=n-1) c=round(mst(INT_MAX,n-1));
        else c=0;
        printf("Case #%d: %d %d %d\n",t,a,b,c);
    }
    return 0;
}
