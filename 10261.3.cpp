#include<iostream>
#include<vector>
#include<cstring>
#include<cstdio>
#define X 210
using namespace std;

int sum[X],arr[X];
int dp[310000][X];
int length,n;

int rec(int left,int pos)
{

    if(pos>=length) return 0;
    if(dp[left][pos]==-1)
    {
        int a=0,b=0;
        if(left+arr[pos]<=n)  a=rec(left+arr[pos],pos+1)+1;
        if(sum[pos]-left<=n) b=rec(left,pos+1)+1;
        //cerr<<"LL "<<left<<" "<<pos<<" "<<a<<" "<<b<<endl;
        dp[left][pos]=max(a,b);
    }
    return dp[left][pos];
}

void print_rec(int left,int pos)
{

    if(pos>=length) return;
    if(left+arr[pos]<=n and (rec(left+arr[pos],pos+1)+1)==dp[left][pos])
    {
        cout<<"port"<<endl;
        print_rec(left+arr[pos],pos+1);
        return;
    }
    if(sum[pos]-left<=n and (rec(left,pos+1)+1)==dp[left][pos])
    {
        cout<<"starboard"<<endl;
        print_rec(left,pos+1);
        return;
    }
}

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int test,i;
    cin>>test;
    while(test--)
    {
        cin>>n;
        n*=100;
        memset(sum,0,sizeof sum);
        for(i=0;; i++)
        {
            cin>>arr[i];
            if(arr[i]==0) break;
            if(i-1>=0) sum[i]+=sum[i-1];
            sum[i]+=arr[i];
        }
        length=i;
        memset(dp,-1,sizeof dp);
        cout<<rec(0,0)<<endl;
        print_rec(0,0);

        if(test) printf("\n");
    }
    return 0;
}
