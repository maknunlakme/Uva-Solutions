#include<iostream>
#include<cstring>
#include<cstdio>
#include<vector>
#include<algorithm>
#define X 3100
using namespace std;

vector<pair<long long,long long> >arr;
long long dp[X][X];
long long n;

long long rec(long long pos,long long weight)
{
    if(pos==n) return 0;
    long long &ans=dp[pos][weight];
    if(ans==-1)
    {
        ans=rec(pos+1,weight);
        if((weight-arr[pos].first)>=0)
        {
            ans=max(ans,rec(pos+1,min(weight-arr[pos].first,arr[pos].second))+1);
        }
    }
    return ans;
}

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    while(1)
    {
        long long i,a,b,best=0;
        cin>>n;
        if(n==0) break;
        memset(dp,-1,sizeof dp);
        arr.clear();
        for(i=0;i<n;i++)
        {
            cin>>a>>b;
            arr.push_back({a,b});
        }
        for(i=0;i<n;i++)
        {
            best=max(best,rec(i+1,arr[i].second)+1);
        }
        cout<<best<<endl;
    }
    return 0;
}
