#include<iostream>
#include<map>
#include<vector>
#include<cstdio>
#include<string>
#define X 1000000
using namespace std;

map<string,int>mark;
int arr[X+10],parent[X+10],elements[X+10];
vector<int>a,b;

int find_union(int x)
{
    if(parent[x]==x) return x;
    else return parent[x]=find_union(parent[x]);
}

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int test,counter,u,v,i,n;
    char p[50],q[50];
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        counter=1;
        for(i=0;i<n;i++)
        {
            scanf("%s %s",p,q);
            if(!mark[p]) mark[p]=counter++;
            if(!mark[q]) mark[q]=counter++;
            a.push_back(mark[p]);
            b.push_back(mark[q]);
        }
        for(i=1;i<counter;i++)
        {
            arr[i]=0;
            parent[i]=i;
            elements[i]=1;
        }
        for(i=0;i<n;i++)
        {
            u=find_union(a[i]);
            v=find_union(b[i]);
            //cerr<<a[i]<<" "<<b[i]<<" "<<u<<" "<<v<<endl;
            if(u!=v)
            {
                parent[u]=v;
                elements[v]+=elements[u];
            }
            cout<<elements[v]<<endl;
        }
        mark.clear();
        a.clear();
        b.clear();
    }
    return 0;
}
