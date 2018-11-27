#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#define X 110
#define Y 50010
using namespace std;

int dp[X+10][Y+10];
int cent[X];
int n;
int knapsack(int weight,int coin)
{
    //cout<<"Dp "<<dp[coin][weight]<<" "<<coin<<" "<<weight<<endl;
    if(coin==n||weight==0)
    {
        return 0;
    }
    if(dp[coin][weight]==-1)
    {
        if(cent[coin]>weight)
        {
            dp[coin][weight]=knapsack(weight,coin+1);
        }
        else
        {
            dp[coin][weight]=max(cent[coin]+knapsack(weight-cent[coin],coin+1),knapsack(weight,coin+1));
        }
    }
    //cout<<"RE "<<dp[coin][weight]<<" "<<coin<<" "<<weight<<endl;
    return dp[coin][weight];
}

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int test,coin,i,total,weight,answer;
    cin>>test;
    while(test--)
    {
        cin>>n;
        total=0;
        for(i=0; i<n; i++)
        {
            cin>>cent[i];
            total+=cent[i];
        }
        weight=(total+1)/2;
        memset(dp,-1,sizeof dp);
        //cout<<"TOT "<<total<<" "<<weight<<endl;
        answer=knapsack(weight,0);
        //cerr<<"AA "<<answer<<endl;
        cout<<abs(answer-(total-answer))<<endl;
    }
    return 0;
}

