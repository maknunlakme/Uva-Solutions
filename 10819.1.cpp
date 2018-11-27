#include<iostream>
#include<cstring>
using namespace std;

int dp[110][12010][2];
int arr[110],brr[110];
int m,n;

int rec(int pos,int weight,bool mark)
{
    if(pos==n) return 0;
    int &ans=dp[pos][weight][mark];
    if(ans==-1)
    {
        ans=rec(pos+1,weight,mark);
        //cerr<<"AA "<<pos<<" "<<weight<<endl;
        if(weight+arr[pos]<=m)
        {
            ans=max(ans,rec(pos+1,weight+arr[pos],mark)+brr[pos]);
        }
        else if(weight+arr[pos]>2000 and mark==false)
        {
            if(weight+arr[pos]-200<=m)
            {
                ans=max(ans,rec(pos+1,weight+arr[pos]-200,1)+brr[pos]);
            }
        }
        //cerr<<"BB "<<pos<<" "<<weight<<" "<<ans<<endl;
    }
    return ans;
}


int main()
{
    int i,best;
    while(cin>>m>>n)
    {
        memset(dp,-1,sizeof dp);
        for(i=0; i<n; i++)
        {
            cin>>arr[i]>>brr[i];
        }
        cout<<rec(0,0,0)<<endl;
    }
    return 0;
}
