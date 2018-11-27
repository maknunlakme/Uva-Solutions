#include <cstdio>

int main()
{
    int n,m,a[10001],i,j,k,l,b,c,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        b=0;
        scanf("%d",&m);
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[j]);
        }
        for(k=0;k<m;k++)
        {
            if(a[k]>b)
            b=a[k];
        }
        printf("Case %d: %d\n",i,b);
    }
    return 0;
}

