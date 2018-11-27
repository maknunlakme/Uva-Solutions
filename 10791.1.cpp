#include<iostream>
#include<vector>
#include<algorithm>
#define X 100010
using namespace std;

vector<int>prime,divi;
int arr[X+10];

long long lcm(long long a,long long b)
{
    return (a*b)/__gcd(a,b);
}

void sieve()
{
    int i,j;
    for(i=2; i*i<=X; i++)
    {
        if(arr[i]==0)
        {
            for(j=2; i*j<=X; j++)
            {
                arr[i*j]=1;
            }
        }
    }
    for(i=2; i<=X; i++)
    {
        if(arr[i]==0)
        {
            prime.push_back(i);
        }
    }
}

int main()
{
#ifdef maknun
    freopen("tempin.txt","r",stdin);
    freopen("tempout.txt","w",stdout);
#endif // maknun
    sieve();
    long long n,temp,t=0,ans,i,j,counter;
    while(1)
    {
        t++;
        cin>>n;
        if(n==1LL)
        {
            cout<<"Case "<<t<<": 2"<<endl;
        }
        else
        {
            if(n==0LL)
                break;
            temp=n;
            divi.clear();
            ans=0;
            for(i=0; i<prime.size() and temp>=prime[i]; i++)
            {
                if(temp%prime[i]==0)
                {
                    counter=1;
                    while(temp%prime[i]==0)
                    {
                        temp/=prime[i];
                        counter*=prime[i];
                    }
                    divi.push_back(counter);
                }
            }
            if(temp>1)
            {
                divi.push_back(temp);
            }
            for(i=0; i<divi.size(); i++)
            {
                ans+=divi[i];
            }
            if(divi.size()==1)
                ans++;
            cout<<"Case "<<t<<": "<<ans<<endl;
        }
    }
    return 0;
}
