#include<iostream>
#include<cstring>
#define X 30005
using namespace std;

int parent[X];

int find_union(int x)
{
    if(x==parent[x])
        return x;
    else
        return parent[x]=find_union(parent[x]);
}

void make_union(int x,int y)
{
    x=find_union(x);
    y=find_union(y);
    if(x!=y)
    {
        if(x<y)
            swap(x,y);
        parent[y]=x;
    }
}

int main()
{
#ifdef maknun
    freopen("tempin.txt","r",stdin);
    freopen("tempout.txt","w",stdout);
#endif // maknun
    int m,i,c,x,y,n;
    n=20000;
    cin>>m;
    memset(parent,-1,sizeof parent);
    for(i=0; i<X; i++)
    {
        parent[i]=i;
    }
    while(1)
    {
        cin>>c>>x>>y;
        if(c==0 and x==0 and y==0)
            break;
        if(c==1)
        {
            if(find_union(x)==find_union(y+n))
            {
                cout<<-1<<endl;
            }
            else
            {
                make_union(x,y);
                make_union(x+n,y+n);
            }
        }
        else if(c==2)
        {
            if(find_union(x)==find_union(y))
            {
                cout<<-1<<endl;
            }
            else
            {
                make_union(x,y+n);
                make_union(x+n,y);
            }
        }
        else if(c==3)
        {
            if(find_union(x)==find_union(y))
            {
                cout<<1<<endl;
            }
            else
                cout<<0<<endl;
        }
        else if(c==4)
        {
            if(find_union(x)==find_union(y+n))
            {
                cout<<1<<endl;
            }
            else
                cout<<0<<endl;
        }
    }
    return 0;
}
