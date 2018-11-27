#include<iostream>
#include<cstring>
#include<vector>
#define X 3010
using namespace std;

bool mat[X][X];

int main()
{
    int test,i,j,k,u,v,counter,n,m;
    scanf("%d",&test);
    while(test--)
    {
        counter=0;
        memset(mat,0,sizeof mat);
        scanf("%d%d",&n,&m);
        for(i=0;i<m;i++)
        {
            scanf("%d%d",&u,&v);
            mat[u][v]=mat[v][u]=1;
        }
        for(i=1;i<=n-2;i++)
        {
            for(j=i+1;j<=n-1;j++)
            {
                if(mat[i][j]==1)
                {
                    for(k=j+1;k<=n;k++)
                    {
                        if(mat[j][k]==1 and mat[k][i]==1) counter++;
                    }
                }
            }
        }
        printf("%d\n",counter);
    }
    return 0;
}
