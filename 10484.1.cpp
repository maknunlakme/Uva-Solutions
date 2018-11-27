#include<iostream>
#include<vector>
#include<cstring>
#define X 110
using namespace std;

int arr[X+10];
vector<int>prime;
int divi[X+10];

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
    sieve();
    long long n,d,temp,i;
    bool okay;
    while(1)
    {
        cin>>n>>d;
        memset(divi,0,sizeof divi);
        if(n==0 and d==0)
            return 0;
        temp=n;
        for(i=0; i<prime.size(); i++)
        {
            temp=n;
            while(temp>0)
            {
                divi[prime[i]]+=temp/prime[i];
                temp/=prime[i];
            }
        }
        temp=d;
        okay=true;
        for(i=0; i<prime.size() and temp>=prime[i] and okay==true; i++)
        {
            while(temp%prime[i]==0)
            {
                if(divi[prime[i]])
                {
                    divi[prime[i]]--;
                    temp/=prime[i];
                }
                else
                {
                    //cerr<<"AA "<<prime[i]<<" "<<temp<<" "<<divi[prime[i]]<<endl;
                    okay=false;
                    break;
                }
            }
        }
        if(temp>1)
        {
            okay=false;
        }
        /*for(i=0;i<X;i++)
        {
            if(divi[i])
            {
                cout<<i<<" "<<divi[i]<<endl;
            }
        }*/
        if(okay==true)
        {
            temp=1;
            for(i=1; i<X; i++)
            {
                if(divi[i])
                {
                    temp*=divi[i]+1;
                }
            }
            cout<<temp<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}
