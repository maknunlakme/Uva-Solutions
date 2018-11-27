#include<iostream>
#include<climits>
#include<cstring>
using namespace std;

int dp[55][55];
int arr[55];

int rec(int left,int right)
{
    if(left+1==right) return dp[left][right]=0;
    if(dp[left][right]==-1)
    {
        int &ans=dp[left][right];
        ans=INT_MAX;
        for(int i=left+1;i<right;i++)
        {
            ans=min(ans,rec(left,i)+rec(i,right)+arr[right]-arr[left]);
        }
    }
    return dp[left][right];
}


int main()
{
    int n,length,i;
    while(1)
    {
        memset(dp,-1,sizeof dp);
        cin>>n;
        if(n==0) break;
        cin>>length;
        for(i=1;i<=length;i++)
        {
            cin>>arr[i];
        }
        arr[0]=0;
        arr[length+1]=n;
        cout<<"The minimum cutting is "<<rec(0,length+1)<<"."<<endl;
    }
    return 0;
}
