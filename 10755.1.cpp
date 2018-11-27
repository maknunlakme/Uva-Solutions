#include<iostream>
#include<climits>
#define X 22
using namespace std;

long long m[X][X][X],dp[X][X][X];

int main()
{
    long long a,b,c,i,j,k,x,y,z,temp,maxi,test,t=0;
    cin>>test;
    while(test--)
    {
        t++;
        maxi=-LLONG_MAX;
        cin>>a>>b>>c;
        for(i=1;i<=a;i++)
        {
            for(j=1;j<=b;j++)
            {
                for(k=1;k<=c;k++)
                {
                    cin>>m[i][j][k];
                }
            }
        }
        for(i=1;i<=a;i++)
        {
            for(j=1;j<=b;j++)
            {
                for(k=1;k<=c;k++)
                {
                    dp[i][j][k]=m[i][j][k];
                    dp[i][j][k]+=(dp[i-1][j][k]+dp[i][j-1][k]+dp[i][j][k-1]);
                    dp[i][j][k]-=(dp[i-1][j-1][k]+dp[i][j-1][k-1]+dp[i-1][j][k-1]);
                    dp[i][j][k]+=dp[i-1][j-1][k-1];
                }
            }
        }
        for(i=1;i<=a;i++)
        {
            for(j=1;j<=b;j++)
            {
                for(k=1;k<=c;k++)
                {
                    for(x=i;x<=a;x++)
                    {
                        for(y=j;y<=b;y++)
                        {
                            for(z=k;z<=c;z++)
                            {
                                temp=dp[x][y][z];
                                temp-=(dp[i-1][y][z]+dp[x][j-1][z]+dp[x][y][k-1]);
                                temp+=(dp[i-1][j-1][z]+dp[x][j-1][k-1]+dp[i-1][y][k-1]);
                                temp-=dp[i-1][j-1][k-1];
                                //cerr<<"DD "<<i<<" "<<j<<" "<<k<<" "<<x<<" "<<y<<" "<<z<<" "<<temp<<endl;
                                maxi=max(maxi,temp);
                            }
                        }
                    }
                }
            }
        }
        if(t!=1) cout<<endl;
        cout<<maxi<<endl;
    }
    return 0;
}
