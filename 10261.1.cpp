#include<iostream>
#include<vector>
#include<cstring>
#include<cstdio>
#define X 210
using namespace std;

vector<int>arr;
int dp[X][X][X];
int track[X][X][X];
int length;

int rec(int left,int right,int pos)
{
    //cerr<<"RR "<<left<<" "<<right<<" "<<pos<<endl;
    if(pos>=length) return 0;
    if(dp[left][right][pos]==-1)
    {
        int a=0,b=0;
        if(left-arr[pos]>=0) a=rec(left-arr[pos],right,pos+1)+1;
        //else if(right-arr[pos]<0) return dp[left][right][pos]=0;
        if(right-arr[pos]>=0) b=rec(left,right-arr[pos],pos+1)+1;
        //else if(left-arr[pos]<0) return dp[left][right][pos]=0;
        if(a>b)
        {
            dp[left][right][pos]=a;
            //track[left][right][pos]=1;
        }
        else
        {
            dp[left][right][pos]=b;
            //trak[left][right][pos]=0;
        }
    }
    return dp[left][right][pos];
}

void print_rec(int left,int right,int pos)
{

    if(pos>=length) return ;

    int a=rec(left-arr[pos],right,pos+1)+1;
    int b=rec(left,right-arr[pos],pos+1)+1;
    if(left-arr[pos]>=0 and dp[left][right][pos]==a)
    {
        printf("port\n");
        print_rec(left-arr[pos],right,pos+1);

        return;
    }
    if(right-arr[pos]>=0)
    {
        printf("starboard\n");
        print_rec(left,right-arr[pos],pos+1);

        return ;
    }

}

int main()
{
    int test,n,temp;
    cin>>test;
    while(test--)
    {
        cin>>n;
        while(1)
        {
            cin>>temp;
            if(temp==0) break;
            temp/=100;
            arr.push_back(temp);
        }
        length=arr.size();
        memset(dp,-1,sizeof dp);
        cout<<rec(n,n,0)<<endl;
        print_rec(n,n,0);

    }
    return 0;
}
