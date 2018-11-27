#include<iostream>
#define X 100000
using namespace std;

int arr[X+10],parent[X+10];

int find_union(int x)
{
    if(parent[x]==x) return x;
    else return parent[x]=find_union(parent[x]);
}

int main()
{
    int n,m,i,j,u,v,counter;
    j=0;
    while(cin>>n>>m)
    {
        j++;
        counter=0;
        if(n==0 and m==0)
        {
            break;
        }
        for(i=1;i<=n;i++)
        {
            parent[i]=i;
            arr[i]=0;
        }
        while(m--)
        {
            cin>>u>>v;
            u=find_union(u);
            v=find_union(v);
            if(u!=v) parent[u]=v;
        }
        for(i=1;i<=n;i++)
        {
            u=find_union(i);
            if(arr[u]==0)
            {
                arr[u]=1;
                counter++;
            }
        }
        cout<<"Case "<<j<<": "<<counter<<endl;
    }
    return 0;
}
