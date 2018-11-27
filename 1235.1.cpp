#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<climits>
#define X 1000
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

    bool operator < (const node& a) const
    {
        return w<a.w;
    }
};

int parent[X+10];
vector<string>arr;
vector<node>brr;

int find_union(int x)
{
    if(parent[x]==x)
        return x;
    else
        return parent[x]=find_union(parent[x]);
}

int mst(int n)
{
    int length=brr.size();
    int answer=0;
    int i,u,v;
    for(i=0; i<n+10; i++)
        parent[i]=i;
    for(i=0; i<length; i++)
    {
        u=find_union(brr[i].u);
        v=find_union(brr[i].v);
        if(u!=v)
        {
            //cerr<<"DD "<<brr[i].u<<" "<<brr[i].v<<" "<<brr[i].w<<endl;
            parent[u]=v;
            answer+=brr[i].w;
        }
    }
    return answer;
}

int sum(string a,string b)
{
    int k,total=0;
    for(k=0; k<4; k++)
    {
        total+=min(abs(a[k]-b[k]),(10-abs(a[k]-b[k])));
    }
    return total;
}

int main()
{
    int test,t,i,j,k,n,length,total,answer;
    string temp;
    cin>>test;
    for(t=1; t<=test; t++)
    {
        cin>>n;
        arr.clear();
        brr.clear();
        answer=INT_MAX;
        //arr.push_back("0000");
        for(i=0; i<n; i++)
        {
            cin>>temp;
            answer=min(answer,sum("0000",temp));
            arr.push_back(temp);
        }
        length=arr.size();
        for(i=0; i<length; i++)
        {
            for(j=i+1; j<length; j++)
            {
                total=sum(arr[i],arr[j]);
                brr.push_back(node(i,j,total));
                //cerr<<"RR "<<arr[i]<<" "<<arr[j]<<" "<<total<<endl;
            }
        }
        sort(brr.begin(),brr.end());
        answer+=mst(n);
        cout<<answer<<endl;
    }
    return 0;
}
