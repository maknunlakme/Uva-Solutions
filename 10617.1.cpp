#include<iostream>
#include<cstring>
#include<string>
#define X 65
using namespace std;

string line;
long long dp[X][X]  ;

long long rec(int l, int r)
{
    if(l==r) return 1;
    else if(l>r) return 0;
    long long &ans=dp[l][r] ;
    if(ans==-1)
    {
        ans=0;
        if(line[l]==line[r])
        {
            ans=rec(l+1,r-1) + 1;
        }
        ans+=rec(l+1,r)+rec(l,r-1) - rec(l+1,r-1);
    }
    return ans;
}

int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        cin>>line;
        memset(dp,-1,sizeof dp);
        cout<<rec(0,line.size()-1)<<endl;
    }
    return 0;
}
