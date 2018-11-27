#include<iostream>
#include<cstdio>
#define X 110
using namespace std;

int arr[X],brr[X],dp[X][X];

int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
        freopen("tempout.txt","w",stdout);
    #endif // maknun

    int n,m,i,j,t=0;
    while(1)
    {
        t++;
        scanf("%d%d",&n,&m);
        if(n==0 and m==0) break;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<m;i++)
        {
            scanf("%d",&brr[i]);
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(arr[i-1]==brr[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        printf("Twin Towers #%d\n",t);
        printf("Number of Tiles : %d\n\n",dp[n][m]);
    }
    return 0;
}
