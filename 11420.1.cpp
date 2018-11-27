#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

long long dp[70][70][2];
int n,s;

long long rec(int drawer,int secure,int lock)
{
    if(drawer<0 or secure<0) return 0;
    else if(drawer==0 and secure==0) return 1;
    long long &ans=dp[drawer][secure][lock];
    if(ans==-1)
    {
        if(lock==0)
        {
            ans=rec(drawer-1,secure,1)+rec(drawer-1,secure,0);
        }
        else
        {
            ans=rec(drawer-1,secure-1,1)+rec(drawer-1,secure,0);
        }
    }
    return ans;
}
int main()
{
    memset(dp,-1,sizeof dp);
    while(1)
    {
        scanf("%d%d",&n,&s);
        if(n<0 and s<0) break;
        printf("%lld\n",rec(n,s,1));
    }
    return 0;
}
