#include<iostream>
#include<vector>
#include<cstring>
#define X 1200
using namespace std;

int arr[X+10];
int dp[X+10][200][15];
vector<int>prime;
int length;

void sieve()
{
    int i,j;
    prime.push_back(2);
    for(i=3; i*i<=X; i+=2)
    {
        if(arr[i]==0)
        {
            prime.push_back(i);
            for(j=i; i*j<=X; j+=2)
            {
                arr[i*j]=1;
            }
        }
    }
    for(;i<=X;i+=2)
    {
        if(arr[i]==0) prime.push_back(i);
    }
}

int rec(int value,int pos,int item)
{
    if(pos>=length) return 0;
    if(item==0 and value==0) return 1;
    if(dp[value][pos][item]==-1)
    {
        int temp=rec(value,pos+1,item);
        if(value-prime[pos]>=0 and item-1>=0)
        {
            dp[value][pos][item]=rec(value-prime[pos],pos+1,item-1)+temp;
        }
        else dp[value][pos][item]=temp;
    }
    return dp[value][pos][item];
}


int main()
{
    int n,k;
    sieve();
    length=prime.size();
    while(1)
    {
        cin>>n>>k;
        if(n==0 and k==0) break;
        memset(dp,-1,sizeof dp);
        cout<<rec(n,0,k)<<endl;
    }
    return 0;
}
