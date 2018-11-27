#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#define X 2000000
using namespace std;

int arr[X+10];
vector<int>prime;

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
    long long n,b,temp,i,counter,zero,blah,ans;
    double digit;
    while(cin>>n>>b)
    {
        temp=b;
        zero=1000000000000;
        for(i=0;i<prime.size() and temp>=prime[i];i++)
        {
            if(temp%prime[i]==0)
            {
                counter=0;
                while(temp%prime[i]==0)
                {
                    temp/=prime[i];
                    counter++;
                }
                blah=n;
                ans=0;
                while(blah>0)
                {
                    ans+=blah/prime[i];
                    blah/=prime[i];
                }
                //cerr<<"AA "<<prime[i]<<" "<<n<<" "<<ans<<endl;
                zero=min(zero,ans/counter);
            }
        }

        digit=0.0;
        for(i=2;i<=n;i++)
        {
            digit+=log(i);
        }
        digit=floor((digit/log(double(b))+1e-4)+1);
        cout<<zero<<" "<<static_cast<long long>(digit)<<endl;
    }
    return 0;
}
