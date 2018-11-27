#include<bits/stdc++.h>
#define INF 1000000000
using namespace std;

string a;
int dp[1010][1010];

int rec(int i,int j)
{
    if(i>j) return 0;
    int &res=dp[i][j];
    if(res==-1)
    {
        res=0;
        if(a[i]==a[j])
        {
            res=rec(i+1,j-1);
        }
        else
        {
            res=min(min(rec(i+1,j),rec(i,j-1)),rec(i+1,j-1))+1;
        }
    }
    return res;
}

int main()
{
    #ifdef maknun
        //freopen("tempin.txt","r",stdin);
        //freopen("tempout.txt","w",stdout);
    #endif // maknun
    int test,length,i,j,t;
    scanf("%d",&test);
    getchar();
    for(t=1;t<=test;t++)
    {
        getline(cin,a);
        memset(dp,-1,sizeof dp);
        length=a.length();
        printf("Case %d: %d\n",t,rec(0,length-1));
    }
    return 0;
}
