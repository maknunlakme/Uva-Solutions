#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int mat[25][25];
int dp[210][25];
int length[25];
bool yes;
int c,m;

int rec(int money,int pos)
{
    if(money<0) return -1000000000;
    if(pos==c) return m-money;
    int &ans=dp[money][pos];
    if(ans==-1)
    {
        for(int i=0;i<length[pos];i++)
        {
            ans=max(ans,rec(money-mat[pos][i],pos+1));
        }

    }
    return ans;
}


int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int test,i,j,answer;
    cin>>test;
    while(test--)
    {
        cin>>m>>c;
        memset(dp,-1,sizeof dp);
        yes=true;
        for(i=0;i<c;i++)
        {
            cin>>length[i];
            for(j=0;j<length[i];j++)
            {
                cin>>mat[i][j];
            }
        }
        answer=rec(m,0);
        if(answer==-1) cout<<"no solution"<<endl;
        else cout<<answer<<endl;
    }
    return 0;
}
