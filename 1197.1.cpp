#include<iostream>
#define X 30005
using namespace std;

int parent[X],counter[X];

int find_union(int x)
{
    if(x==parent[x]) return x;
    else return parent[x]=find_union(parent[x]);
}

int main()
{
    int n,m,i,j,k,u,v;
    while(1)
    {
        cin>>n>>m;
        if(n==0 and m==0) break;
        for(i=0;i<=n;i++)
        {
            parent[i]=i;
            counter[i]=1;
        }
        for(i=0;i<m;i++)
        {
            cin>>k;
            cin>>u;
            u=find_union(u);
            //cerr<<"AA "<<u<<" "<<find_union(u)<<endl;
            for(j=1;j<k;j++)
            {
                cin>>v;
                v=find_union(v);
                if(u!=v)
                {
                    parent[v]=u;
                    //cerr<<"BBB "<<v<<" "<<find_union(v)<<endl;
                    counter[u]+=counter[v];
                    //cerr<<"UU "<<u<<" "<<v<<" "<<counter[u]<<" "<<counter[v]<<endl;
                    //cerr<<"QQ "<<parent[u]<<" "<<parent[v]<<endl;
                }
            }
        }
        cout<<counter[find_union(0)]<<endl;
    }
    return 0;
}
