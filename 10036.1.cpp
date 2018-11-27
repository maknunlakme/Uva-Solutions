#include<iostream>
#include<cstring>
#define X 10005
using namespace std;

int dp[X][105];
int arr[X];
int n,k;

int rec(int pos,int left)
{
    //cerr<<"AAA "<<pos<<" "<<left<<endl;
    if(pos==n)
    {
        if(left==0) return 1;
        else return 0;
    }
    int &ans=dp[pos][left];
    if(ans==-1)
    {
        ans=max(rec(pos+1,(left+arr[pos])%k),rec(pos+1,(left-arr[pos])%k));
    }
    return ans;
}

int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
        freopen("tempout.txt","w",stdout);
    #endif // maknun
    int test,i;
    cin>>test;
    while(test--)
    {
        memset(dp,-1,sizeof dp);
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(rec(0,0)==1)
        {
            cout<<"Divisible"<<endl;
        }
        else
        {
            cout<<"Not divisible"<<endl;
        }
    }
    return 0;
}
