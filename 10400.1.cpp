#include<iostream>
#include<cstring>
#include<cstdio>
#define X 32000
using namespace std;

int dp[110][2*X + 10];
int arr[110];
int n,m;

int rec(int pos,int sum)
{
    int blah=sum;
    if(sum<0) int blah=sum*(-1) + X;
    if(pos==n and sum==m) return 1;
    if(pos>=n or sum>X or sum<-X) return 0;
    int &ans=dp[pos][blah];
    if(ans==-1)
    {
        //cerr<<"AA "<<pos<<" "<<sum<<" "<<arr[pos]<<endl;
        ans=max(ans,rec(pos+1,sum+arr[pos]));
        ans=max(ans,rec(pos+1,sum-arr[pos]));
        ans=max(ans,rec(pos+1,sum*arr[pos]));
        if(sum>0 and sum%arr[pos]==0)
        {
            ans=max(ans,rec(pos+1,sum/arr[pos]));
        }
    }
    return ans;
}

void rec_print(int pos,int sum)
{
    int blah=sum;
    if(sum<0) int blah=sum*(-1) + X;
    if(pos==n and sum==m) return;
    if(pos>=n or sum>X or sum<-X) return;
    int &ans=dp[pos][blah];
    if(ans)
    {
        //cerr<<"AA "<<pos<<" "<<sum<<" "<<arr[pos]<<endl;
        if(rec(pos+1,sum+arr[pos]))
        {
            cout<<"+"<<arr[pos];
            rec_print(pos+1,sum+arr[pos]);
        }
        else if(rec(pos+1,sum-arr[pos]))
        {
            cout<<"-"<<arr[pos];
            rec_print(pos+1,sum-arr[pos]);
        }
        else if(rec(pos+1,sum*arr[pos]))
        {
            cout<<"*"<<arr[pos];
            rec_print(pos+1,sum*arr[pos]);
        }
        else if(sum>0 and sum%arr[pos]==0)
        {
            if(rec(pos+1,sum/arr[pos]))
            {
                cout<<"/"<<arr[pos];
                rec_print(pos+1,sum/arr[pos]);
            }
        }
    }
    return;
}

int main()
{
    #ifdef maknun
        //freopen("tempin.txt","r",stdin);
        //freopen("tempout.txt","w",stdout);
    #endif // maknun
    int test,i;
    cin>>test;
    while(test--)
    {
        cin>>n;
        memset(dp,-1,sizeof dp);
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>m;
        if(rec(1,arr[0]))
        {
            cout<<arr[0];
            rec_print(1,arr[0]);
            cout<<"="<<m<<endl;
        }
        else
        {
            cout<<"NO EXPRESSION"<<endl;
        }
    }
    return 0;
}
