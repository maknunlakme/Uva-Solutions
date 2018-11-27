#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#define check(x,y) (x&(1<<y))
#define on(x,y) (x|(1<<y))
#define off(x,y) (x^(1<<y))
#define inf 1000000
using namespace std;

string line;
int dp[1<<15];

int rec(int mask)
{
    int &res=dp[mask];
    int blah;
    if(res==-1)
    {
        res=__builtin_popcount(mask);
        for(int i=0;i<10;i++)
        {
            if(check(mask,i)==0 and check(mask,i+1)!=0 and check(mask,i+2)!=0)
            {
                blah=mask;
                blah=on(blah,i);
                blah=off(blah,i+1);
                blah=off(blah,i+2);
                res=min(res,rec(blah));
            }
            if(check(mask,i)!=0 and check(mask,i+1)!=0 and check(mask,i+2)==0)
            {
                blah=mask;
                blah=off(blah,i);
                blah=off(blah,i+1);
                blah=on(blah,i+2);
                res=min(res,rec(blah));
            }
        }
    }
    return res;
}

int main()
{
    int test,mask,i;
    cin>>test;
    while(test--)
    {
        cin>>line;
        mask=0;
        memset(dp,-1,sizeof dp);
        for(i=0;i<12;i++)
        {
            if(line[i]=='o') mask=on(mask,i);
        }
        cout<<rec(mask)<<endl;
    }
    return 0;
}
