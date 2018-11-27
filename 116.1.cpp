#include<iostream>
#include<cstring>
#include<climits>
using namespace std;

long long dp[25][105];
int arr[25][105],path[25][105];
int n,m;

long long rec(int i,int j)
{
    //cerr<<"DDD "<<i<<" "<<j<<endl;
    if(j>=m) return 0;
    long long &ans=dp[i][j];
    if(ans==-1)
    {
        ans=INT_MAX;
        int f[]={i-1,i,i+1};
        if(i==0) f[0]=n-1;
        if(i+1==n) f[2]=0;
        for(int k=0;k<3;k++)
        {
            long long temp=arr[i][j]+rec(f[k],j+1);
            if(ans>temp or (ans==temp and path[i][j]>f[k]))
            {
                ans=temp;
                path[i][j]=f[k];
            }
        }
    }
    return ans;
}

int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
        freopen("tempout.txt","w",stdout);
    #endif // maknun
    int i,j,ind;
    long long mini;
    while(cin>>n>>m)
    {
        memset(dp,-1,sizeof dp);
        mini=INT_MAX;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            //cerr<<"QQQ "<<i<<" "<<n<<endl;
            if(mini>rec(i,0))
            {
                mini=rec(i,0);
                ind=i;
            }
        }
        cout<<(ind+1);
        for(j=0;j<m-1;j++)
        {
            ind=path[ind][j];
            cout<<" "<<(ind+1);
        }
        cout<<endl;
        cout<<mini<<endl;
    }
    return 0;
}
