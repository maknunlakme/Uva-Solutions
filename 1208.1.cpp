#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#define X 11000000
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

vector<node>arr,brr;
int parent[X+10];

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
    for(i=0;i<=n+10;i++) parent[i]=i;
    for(i=0;i<length;i++)
    {
        u=find_union(arr[i].u);
        v=find_union(arr[i].v);
        if(u!=v)
        {
            parent[u]=v;
            counter++;
            brr.push_back(arr[i]);
            if(counter==n) break;
        }
    }
}

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    string temp;
    int test,t,n,i,j,k,num;
    scanf("%d",&test);
    for(t=1;t<=test;t++)
    {
        scanf("%d",&n);
        arr.clear();
        brr.clear();;
        //cerr<<"RR "<<test<<" "<<n<<endl;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>temp;
                num=0;
                for(k=0;k<temp.size();k++)
                {
                    if(temp[k]>='0' and temp[k]<='9')
                    {
                        num=num*10+(temp[k]-'0');
                    }
                }
                //cerr<<"RR "<<i<<" "<<j<<" "<<num<<endl;
                if(num!=0 and i<j) arr.push_back(node(i,j,num));
            }
        }
        sort(arr.begin(),arr.end(),compare());
        mst(n-1);
        printf("Case %d:\n",t);
        for(i=0;i<n-1;i++)
        {
            //cerr<<"RR "<<brr[i].u<<" "<<brr[i].v<<" "<<brr[i].w<<endl;
            printf("%c-%c %d\n",'A'+brr[i].u,'A'+brr[i].v,brr[i].w);
        }
    }
    return 0;
}
