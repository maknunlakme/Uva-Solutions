#include<iostream>
#include<string>
#include<cstring>
#include<climits>
#define X 250
using namespace std;

string line;
long long dp[X];
int n;

long long rec(int pos)
{
    //cerr<<"AA "<<pos<<endl;
    if(pos>n)
        return 0;
    long long &ans=dp[pos];
    if(ans==-1)
    {
        ans=0;
        if(line[pos]=='0')
        {
            ans=rec(pos+1);
        }
        else
        {
            long long temp=0;
            for(int i=1; i<=10 and i+pos<=n; i++)
            {
                temp=(temp*10)+(line[pos+i-1]-'0');
                if(temp<INT_MAX)
                {
                    ans=max(ans,rec(pos+i)+temp);
                }
            }
        }
    }
    //cerr<<"SSS "<<pos<<" "<<ans<<endl;
    return ans;
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        cin>>line;
        n=line.size();
        memset(dp,-1,sizeof dp);
        cout<<rec(0)<<endl;
    }
    return 0;
}
