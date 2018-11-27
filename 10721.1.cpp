#include<iostream>
#include<cstring>
using namespace std;

long long dp[55][55][55];
int n,k,m;

long long rec(int sum,int digit,int range)
{
    if(sum==0 and digit==0) return 1;
    if(sum<0 or digit<0) return 0;
    long long &ans=dp[sum][digit][range];
    if(ans==-1)
    {
        ans=0;
        for(int i=1;i<=m;i++)
        {
            ans+=rec(sum-i,digit-1,range);
        }
    }
    return ans;
}

int main()
{
    memset(dp,-1,sizeof dp);
    while(cin>>n>>k>>m)
    {
        cout<<rec(n,k,m)<<endl;
    }
    return 0;
}
