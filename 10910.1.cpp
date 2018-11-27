#include<iostream>
#include<cstdio>
#include<cstring>
#define X 110
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
            ans=ans+rec(n-1,k-i);
        }
    }
    return ans;
}


int main()
{
    #ifdef maknun
        //freopen("tempin.txt","r",stdin);
    #endif // maknun
    int n,t,p,test;
    memset(dp,-1,sizeof dp);
    cin>>test;
    while(test--)
    {
        cin>>n>>t>>p;
        cout<<rec(n,t-n*p+1)<<endl;
    }
    return 0;
}
