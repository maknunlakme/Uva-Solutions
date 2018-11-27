#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#define X 110
using namespace std;

int dp[X][X],print[X][X];
string arr,brr;
int counter;

void printing(int i,int j)
{
    if(i==0 and j==0) return;
    if(print[i][j]==1)
    {
        printing(i-1,j-1);
    }
    else if(print[i][j]==2)
    {
        printing(i-1,j);
        printf("%d Delete %d\n",counter++,j+1);
    }
    else if(print[i][j]==3)
    {
        printing(i,j-1);
        printf("%d Insert %d,%c\n",counter++,j,brr[j-1]);
    }
    else
    {
        printing(i-1,j-1);
        printf("%d Replace %d,%c\n",counter++,j,brr[j-1]);
    }
}

int main()
{
    #ifdef maknun
        //freopen("tempin.txt","r",stdin);
        //freopen("tempout.txt","w",stdout);
    #endif // maknun
    int i,j,t=0;
    while(getline(cin,arr) and getline(cin,brr))
    {
        t++;
        if(t!=1) cout<<endl;
        counter=1;
        memset(dp,62,sizeof dp);
        dp[0][0]=0;
        for(i=0;i<=arr.size();i++)
        {
            for(j=0;j<=brr.size();j++)
            {
                if(arr[i]==brr[j] and dp[i+1][j+1]>dp[i][j])
                {
                    dp[i+1][j+1]=dp[i][j];
                    print[i+1][j+1]=1;
                }
                if(dp[i+1][j]>dp[i][j]+1)
                {
                    dp[i+1][j]=dp[i][j]+1;
                    print[i+1][j]=2;
                }
                if(dp[i][j+1]>dp[i][j]+1)
                {
                    dp[i][j+1]=dp[i][j]+1;
                    print[i][j+1]=3;
                }
                if(dp[i+1][j+1]>dp[i][j]+1)
                {
                    dp[i+1][j+1]=dp[i][j]+1;
                    print[i+1][j+1]=4;
                }
            }
        }
        printf("%d\n",dp[arr.size()][brr.size()]);
        printing(arr.size(),brr.size());
    }
    return 0;
}
