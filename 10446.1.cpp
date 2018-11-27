#include<iostream>
#include<cstring>
using namespace std;

unsigned long long dp[65][65];

unsigned long long rec(int i,int j)
{
    //cerr<<"AA "<<i<<" "<<j<<endl;
    int k;
    if(i<=1) return 0;
    unsigned long long &ans=dp[i][j];
    if(ans==-1)
    {
        ans=j;
        for(k=1;k<=j;k++)
        {
            ans+=rec(i-k,j);
        }
    }
    //cerr<<"DDD "<<i<<" "<<j<<" "<<ans<<endl;
    return ans;
}

int main()
{
    int n,b,t=0,blah;
    memset(dp,-1,sizeof dp);
    while(1)
    {
        t++;
        cin>>n>>b;
        if(n>60) break;
        cout<<"Case "<<t<<": "<<rec(n,b)+1<<endl;
    }
    return 0;
}
