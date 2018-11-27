#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<cstring>
using namespace std;

string line;
vector<int>arr;
int dp[25][25];
int a[25],b[25];

int main()
{
    int n,temp,i,j;
    bool taken;
    while(getline(cin,line))
    {
        //cerr<<"AA "<<line<<endl;
        arr.clear();
        stringstream s(line);
        while(s>>temp)
        {
            arr.push_back(temp);
        }
        if(arr.size()==1)
        {
            n=arr[0];
            taken=false;
        }
        else if(taken==false)
        {
            for(i=1;i<=n;i++)
            {
                a[arr[i-1]]=i;
            }
            taken=true;
        }
        else
        {
            for(i=1;i<=n;i++)
            {
                b[arr[i-1]]=i;
            }
            memset(dp,0,sizeof dp);
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=n;j++)
                {
                    if(a[i]==b[j])
                    {
                        dp[i][j]=dp[i-1][j-1]+1;
                    }
                    else
                    {
                        dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                    }
                }
            }
            cout<<dp[n][n]<<endl;
        }
    }
    return 0;
}
