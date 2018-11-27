#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
#define X 110
using namespace std;

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

class temp
{
public:
    double u,v;
    int w;

    temp(double u,double v,int w)
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

vector<node>brr;
vector<temp>arr;

int parent[X+10];

int find_union(int x)
{
    if(parent[x]==x) return x;
    else return parent[x]=find_union(parent[x]);
}

double mst(vector<node> a,int n)
{
    int length=a.size();
    double answer=0;
    int counter=0;
    int i,u,v;
    for(i=0;i<=n;i++)
    {
        parent[i]=i;
    }
    for(i=0;i<length;i++)
    {
        u=find_union(a[i].u);
        v=find_union(a[i].v);
        if(u!=v)
        {
            parent[u]=v;
            answer+=a[i].w;
            counter++;
            if(counter==n) break;
        }
    }
    return answer;
}

int main()
{
    int test,i,j,n,marker;
    double dis,x,y;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        marker=1;
        arr.clear();
        brr.clear();
        for(i=0;i<n;i++)
        {
            scanf("%lf%lf",&x,&y);
            arr.push_back(temp(x,y,marker++));
        }
        //cerr<<"AAA "<<n<<" "<<arr.size()<<endl;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                //cerr<<"II "<<i<<" "<<arr[i].u<<" "<<arr[i].v<<" "<<arr[i].w<<endl;
                //cerr<<"JJ "<<j<<" "<<arr[j].u<<" "<<arr[j].v<<" "<<arr[j].w<<endl;
                dis=sqrt((arr[i].u-arr[j].u)*(arr[i].u-arr[j].u) + (arr[i].v-arr[j].v)*(arr[i].v-arr[j].v));
                //cerr<<"DD "<<dis<<" "<<arr[i].w<<" "<<arr[j].w<<endl;
                brr.push_back(node(arr[i].w,arr[j].w,dis));
                //cerr<<"OOO "<<i<<" "<<j<<endl;
            }
        }
        sort(brr.begin(),brr.end(),compare());
        //cerr<<"MMM "<<mst(brr,n)<<endl;
        printf("%.2lf\n",mst(brr,n));
        if(test!=0) printf("\n");
    }
    return 0;
}
