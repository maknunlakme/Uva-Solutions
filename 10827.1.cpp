#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<climits>
#define X 200
using namespace std;

long long arr[X][X],dp[X][X];

int main()
{
    long long n,i,j,k,l,maxi,t,test,temp;
    cin>>test;
    for(t=1; t<=test; t++)
    {
        memset(arr,0,sizeof arr);
        memset(dp,0,sizeof dp);
        maxi=-1000000000;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                cin>>arr[i][j];
                arr[i][j+n]=arr[i+n][j]=arr[i+n][j+n]=arr[i][j];
            }
        }
        for(i=1;i<=2*n;i++)
        {
            for(j=1;j<=2*n;j++)
            {
                dp[i][j]=arr[i][j]+dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
            }
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                for(k=i;k<i+n;k++)
                {
                    for(l=j;l<j+n;l++)
                    {
                        //cerr<<"DD "<<i<<" "<<j<<" "<<k<<" "<<l<<" "<<dp[k][l]<<" "<<dp[i][l]<<" "<<dp[k][j]<<" "<<dp[i][j]<<endl;
                        maxi=max(maxi,dp[k][l]-dp[i-1][l]-dp[k][j-1]+dp[i-1][j-1]);
                        //cerr<<"DD " <<maxi<<endl;
                    }
                }
            }
        }
        cout<<maxi<<endl;
    }
    return 0;
}

