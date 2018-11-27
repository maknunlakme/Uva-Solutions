#include<iostream>
using namespace std;

int arr[210];
int dp[210][22][12];
int n,d,m;

int rec(int pos,int item)
{
    if(pos>=n) return 0;
    int &ans=dp[pos][item];
    if(ans==-1)
    {
        if(item+1<=m) ans=max(ans,rec(pos+1,))
    }
    return ans;
}

int main()
{
    int n,q;
    cin>>n>>q;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<q;i++)
    {
        cin>>d>>m;
    }
    return 0;
}
