#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int coin[110];
int dp[11000];

int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
        freopen("tempout.txt","w",stdout);
    #endif // maknun
    int test,price,i,j,n;
    cin>>test;
    while(test--)
    {
        cin>>price;
        cin>>n;
        memset(dp,0,sizeof dp);
        for(i=0;i<n;i++)
        {
            cin>>coin[i];
        }
        dp[0]=1;
        for(i=0;i<n;i++)
        {
            for(j=10010;j>=coin[i];j--)
            {
                if(dp[j-coin[i]]!=0)
                {
                    if(dp[j]==0)
                    {
                        dp[j]=dp[j-coin[i]]+1;
                    }
                    else if(dp[j-coin[i]]+1<dp[j])
                    {
                        dp[j]=dp[j-coin[i]]+1;
                    }
                }
                //cerr<<"AA "<<i<<" "<<j<<" "<<dp[j]<<endl;
            }
        }
        for(i=price;;i++)
        {
            if(dp[i]!=0) break;
        }
        cout<<i<<" "<<dp[i]-1<<endl;
    }
    return 0;
}
