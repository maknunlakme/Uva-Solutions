#include<iostream>
#include<cstdio>
#include<cstring>
#define X 110
#define mod 1000000
using namespace std;

int dp[X][X];

int rec(int n,int k)
{
    if(n<0 or k<=0) return 0;
    if(n==0 and k==1) return 1;
    int &ans=dp[n][k];
    if(ans==-1)
    {
        ans=0;
        for(int i=0;i<k;i++)
        {
            ans=(ans+rec(n-1,k-i))%mod;
        }
    }
    return ans;
}


int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
    #endif // maknun
    int n,k;
    memset(dp,-1,sizeof dp);
    while(1)
    {
        cin>>n>>k;
        if(n==0 and k==0) break;
        cout<<rec(n+1,k)<<endl;
    }
    return 0;
}
