#include<iostream>
#include<vector>
#include<cstring>
#include<climits>
#define X 1000
using namespace std;

int arr[X+10],sum[X+10];
vector<int>prime;
const long long M=1000000000000000000;

void sieve()
{
    int i,j;
    for(i=2;i*i<=X;i++)
    {
        if(arr[i]==0)
        {
            for(j=2;i*j<=X;j++)
            {
                arr[i*j]=1;
            }
        }
    }
    for(i=2;i<=X;i++)
    {
        if(arr[i]==0)
        {
            prime.push_back(i);
        }
    }
}

int main()
{
    sieve();
    int test,t,n,length,i,j,temp;
    unsigned long long ans;
    string line;
    cin>>test;
    for(t=1;t<=test;t++)
    {
        cin>>n>>line;
        length=line.size();
        memset(sum,0,sizeof sum);
        for(i=n;i>=0;i-=length)
        {
            temp=i;
            for(j=0;j<prime.size() and temp>=prime[j];j++)
            {
                if(arr[temp]==0)
                {
                    sum[temp]++;
                    temp=1;
                    break;
                }
                while(temp%prime[j]==0)
                {
                    temp/=prime[j];
                    sum[prime[j]]++;
                }
            }
            if(arr[temp]>1)
            {
                sum[temp]++;
            }
        }
        ans=1;
        for(i=2;i<=n;i++)
        {
            if(ans<0 or ans>M) ans=0;
            if(sum[i]>0)
            {
                ans*=sum[i]+1;
            }
        }
        if(ans==0) cout<<"Case "<<t<<": Infinity"<<endl;
        else cout<<"Case "<<t<<": "<<ans<<endl;
    }
    return 0;
}
