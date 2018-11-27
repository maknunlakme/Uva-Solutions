#include<iostream>
#include<cstring>
using namespace std;

long long dp[30][30][400];

long long rec(int letter,int length,int sum )
{
    if(length==0 and sum==0) return 1;
    else if(length<0 or sum<0) return 0;
    long long &ans=dp[letter][length][sum];
    if(ans==-1)
    {
        ans=0;
        for(int i=letter+1;i<=26;i++)
        {
            //cerr<<"AA "<<i<<" "<<length<<" "<<sum<<" "<<rec(i,length-1,sum-i)<<endl;
            ans+=rec(i,length-1,sum-i);
        }
    }
    return ans;
}

int main()
{
    int l,s,t=0;
    memset(dp,-1,sizeof dp);
    while(1)
    {
        t++;
        cin>>l>>s;
        if(l==0 and s==0)
            break;
        if(l>26) cout<<"Case "<<t<<": 0"<<endl;
        else
        {
            cout<<"Case "<<t<<": "<<rec(0,l,s)<<endl;
        }
    }
    return 0;
}
