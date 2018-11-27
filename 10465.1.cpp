#include<iostream>
#include<cstring>
#define X 11000
using namespace std;

int dp[X];
int m,n,t;

int rec(int cost)
{
    if(cost<0) return -100000;
    if(cost==0) return 0;
    if(dp[cost]==-1)
    {
        dp[cost]=max(rec(cost-m)+1,rec(cost-n)+1);
    }
    return dp[cost];
}


int main()
{
    bool done;
    int answer,i;
    while(cin>>m>>n>>t)
    {
        memset(dp,-1,sizeof dp);
        done=false;
        answer=rec(t);
        if(answer>0)
        {
            cout<<answer<<endl;
            done=true;
        }
        else
        {
            for(i=t-1;i>=0;i--)
            {
                if(rec(i)>0)
                {
                    cout<<rec(i)<<" "<<t-i<<endl;
                    done=true;
                    break;
                }
            }
            if(done==false) cout<<0<<" "<<t<<endl;
        }
    }
    return 0;
}
