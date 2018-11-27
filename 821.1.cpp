#include<iostream>
#include<cstdio>
#include<cstring>
#include<iomanip>
#include<map>
#define X 110
using namespace std;

int mat[X][X];
map<int,int>mark;
int n;

double floyd()
{
    int i,j,k;
    for(k=1;k<=n;k++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
            }
        }
    }

    double total=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i!=j) total+=mat[i][j];
            //cerr<<"M "<<mat[i][j]<<endl;
        }
    }
    return total;
}

void check(int a)
{
    if(mark[a]==0)
    {
        n++;
        mark[a]=n;
    }
}
int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int a,b,counter=0;
    double total,path;
    while(1)
    {
        cin>>a>>b;
        if(a==0 and b==0) break;
        n=0;
        counter++;
        memset(mat,63,sizeof mat);
        check(a);
        check(b);
        mat[mark[a]][mark[b]]=1;
        while(1)
        {
            cin>>a>>b;
            if(a==0 and b==0) break;
            check(a);
            check(b);
            mat[mark[a]][mark[b]]=1;
        }
        total=floyd();
        path=n*(n-1);
        mark.clear();
        cout<<fixed<<setprecision(3)<<"Case "<<counter<<": average length between pages = "<<total/path<<" clicks"<<endl;
    }
    return 0;
}
