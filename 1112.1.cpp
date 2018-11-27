#include<iostream>
#include<cstring>
#include<cstdio>
#define X 110
using namespace std;

int mat[X][X];
int n,e,t;
int floyd()
{
    int i,j,k,counter=0;
    mat[e][e]=0;
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

    for(i=1;i<=n;i++)
    {
        if(mat[i][e]<=t) counter++;
    }
    return counter;
}

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int test,m,a,b,c;
    cin>>test;
    while(test--)
    {
        cin>>n>>e>>t>>m;
        memset(mat,62,sizeof mat);
        while(m--)
        {
            cin>>a>>b>>c;
            mat[a][b]=c;
        }
        cout<<floyd()<<endl;
        if(test>0) cout<<endl;
    }
    return 0;
}
