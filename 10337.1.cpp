#include<iostream>
#include<cstring>
#include<climits>
using namespace std;

long long dp[12][1002];
int arr[12][1002];
int n;

long long rec(int i,int j)
{
    if(j==n)
    {
        if(i==9) return 0;
        else return INT_MAX;
    }
    if(i>9 or i<0 or j>n) return INT_MAX;
    long long &ans=dp[i][j];
    if(ans==-1)
    {
        ans=0;
        ans=min(rec(i,j+1)+30,min(rec(i-1,j+1)+60,rec(i+1,j+1)+20))-arr[i][j];
    }
    return ans;
}


int main()
{
    int test,i,j;
    cin>>test;
    while(test--)
    {
        cin>>n;
        n/=100;
        memset(dp,-1,sizeof dp);
        for(i=0;i<10;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
        cout<<rec(9,0)<<endl<<endl;
    }
    return 0;
}
