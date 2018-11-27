#include<bits/stdc++.h>
using namespace std;

string a,b;
int dp[1010][1010];

int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
        freopen("tempout.txt","w",stdout);
    #endif // maknun
    int test,length,i,j;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        getline(cin,a);
        memset(dp,0,sizeof dp);
        b.clear();
        length=a.length();
        for(i=length-1;i>=0;i--) b.push_back(a[i]);
        for(i=0;i<length;i++)
        {
            for(j=0;j<length;j++)
            {
                if(a[i]==b[j])
                {
                    dp[i+1][j+1]=dp[i][j]+1;
                }
                else
                {
                    dp[i+1][j+1]=max(dp[i+1][j],dp[i][j+1]);
                }
            }
        }
        printf("%d\n",dp[length][length]);
    }
    return 0;
}
