#include<iostream>
#include<cstdio>
#define X 20000010
using namespace std;

long long divv[X+10],sum[X+10];

int divisor()
{
    int i,j;
    for(i=1;i<=X;i++)
    {
        for(j=1;i*j<=X;j++)
        {
            divv[i*j]+=i;
        }
    }
    sum[i]=0;
    for(i=2;i<=X;i++)
    {
        sum[i]=sum[i-1]+divv[i];
        //cerr<<"II "<<i<<" "<<sum[i]<<endl;
    }
}

int main()
{
    divisor();
    int n;
    while(1)
    {
        scanf("%d",&n);
        if(n==0) break;
        printf("%lld\n",sum[n]);
    }
    return 0;
}

