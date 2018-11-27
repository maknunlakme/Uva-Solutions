#include<iostream>
#include<cstring>
using namespace std;

int dp[10005];

int rec(int pos)
{
    if(pos<0) return 10000000;
    int &ans=dp[pos];
    if(ans==-1)
    {
        ans=10000000;
        for(int i=1;i*i<=pos;i++)
        {
            ans=min(ans,rec(pos-(i*i))+1);
            //cerr<<pos<<" "<<i<<" "<<rec(pos-(i*i))<<endl;
        }
    }
    return ans;
}


int main()
{
    memset(dp,-1,sizeof dp);
    dp[0]=0;
    dp[1]=1;
    int test,n;
    cin>>test;
    while(test--)
    {
        cin>>n;
        cout<<rec(n)<<endl;
    }
    return 0;
}
