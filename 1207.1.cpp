#include<iostream>
#include<string>
#include<cstring>
#define X 1010
using namespace std;

string x,y;
int dp[X][X];
int n,m;

int rec(int p1,int p2)
{
    if(p1==n) return m-p2;
    if(p2==m) return n-p1;
    int &res=dp[p1][p2];
    if(res==-1)
    {
        if(x[p1]==y[p2])
        {
            res=rec(p1+1,p2+1);
        }
        else
        {
            res=min(rec(p1,p2+1),min(rec(p1+1,p2),rec(p1+1,p2+1)))+1;
        }
    }
    return res;
}

int main()
{
    while(cin>>n)
    {
        cin>>x;
        cin>>m>>y;
        memset(dp,-1,sizeof dp);
        cout<<rec(0,0)<<endl;
    }
    return 0;
}
