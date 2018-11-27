#include<iostream>
#include<cstring>
#include<cstdio>
#define X 1010
using namespace std;

int dp[X+10][X+10];
int knapsack(int carry,int weight[],int price[],int item)
{
    //cout<<"Dp "<<dp[item][carry]<<" "<<item<<" "<<carry<<endl;
    if(dp[item][carry]!=-1)
    {
        return dp[item][carry];
    }
    if(item==0||carry==0)
    {
        return 0;
    }
    if(weight[item-1]>carry)
    {
        dp[item][carry]=knapsack(carry,weight,price,item-1);
    }
    else
    {
        dp[item][carry]=max(price[item-1]+knapsack(carry-weight[item-1],weight,price,item-1),knapsack(carry,weight,price,item-1));
    }
    return dp[item][carry];
}

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int test,item,price[X],weight[X],people,carry,total,i;
    cin>>test;
    while(test--)
    {
        cin>>item;
        for(i=0;i<item;i++)
        {
            cin>>price[i]>>weight[i];
        }
        cin>>people;
        total=0;
        for(i=0;i<people;i++)
        {
            cin>>carry;
            memset(dp,-1,sizeof(dp));
            total+=knapsack(carry,weight,price,item);
        }
        cout<<total<<endl;
    }
    return 0;
}
