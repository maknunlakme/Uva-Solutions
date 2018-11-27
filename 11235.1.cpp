#include<iostream>
#include<limits>
#include<algorithm>
#include<cstdio>
#define X 100010
using namespace std;

int arr[X],brr[X],crr[X];
int table[X][20];
void sparse(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        table[i][0]=brr[i];
    }
    for(i=1;(1<<i)<=n;i++)
    {
        for(j=1;j<=n&&j+(1<<(i-1))<=n;j++)
        {
            table[j][i]=max(table[j][i-1],table[j+(1<<(i-1))][i-1]);
        }
    }
}

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int n,q,i,j,a,b,c,counter,start,ends,max1,max2,max3;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        scanf("%d",&q);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=1;i<=n;i++)
        {
            counter=count(arr+1,arr+n+1,arr[i]);
            brr[i]=counter;
            start=i;
            crr[i]=start;
            while((arr[i+1]==arr[i])&&(i+1)<=n)
            {
                i++;
                brr[i]=counter;
                crr[i]=start;
            }
        }
        sparse(n);
        for(i=0;i<q;i++)
        {
            scanf("%d%d",&a,&b);
            if(arr[a]==arr[b])
            {
                printf("%d\n",(b-a)+1);
            }
            else
            {
                ends=crr[a]+brr[a]-1;
                max1=ends-a+1;
                max2=b-crr[b]+1;
                counter=max(max1,max2);
                a=ends+1;
                b=crr[b]-1;
                if(a<b)
                {
                    c=31-__builtin_clz((b-a)+1);
                    max3=max(table[a][c],table[b-(1<<c)+1][c]);
                }
                else
                {
                    max3=0;
                }
                printf("%d\n",max(counter,max3));
            }
        }
    }
    return 0;
}
