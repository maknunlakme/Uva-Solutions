#include<iostream>
#include<cstring>
#define X 110
using namespace std;

int a[X][X],b[X];

int main()
{
    int test,n,m,i,j,k,r1,r2,c1,c2,maxi,now;
    scanf("%d",&test);
    while(test--)
    {
        memset(a,0,sizeof a);
        scanf("%d",&n);
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
            a[r1][c1]++;
            a[r2+1][c2+1]++;
            a[r1][c2+1]--;
            a[r2+1][c1]--;
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                a[i][j]+=a[i-1][j]+a[i][j-1]-a[i-1][j-1];
            }
        }
        maxi=0;
        for(i=1;i<=n;i++)
        {
            memset(b,0,sizeof b);
            for(j=i;j<=n;j++)
            {
                now=0;
                for(k=1;k<=n;k++)
                {
                    b[k]+=(a[j][k]==0);
                    if(b[k]==(j-i+1))
                    {
                        now+=b[k];
                        maxi=max(maxi,now);
                    }
                    else now=0;

                }
            }
        }
        printf("%d\n",maxi);
    }
    return 0;
}
