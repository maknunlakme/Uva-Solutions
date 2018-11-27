#include<iostream>
#include<vector>
#include<climits>
#include<cmath>
#include<set>
#include<cstdio>
#define X 100
using namespace std;

bool arr[X+10];
set<unsigned long long>power;

unsigned long long big_pow(unsigned long long a,unsigned long long b)
{
    if(b==0) return 1;
    if(b%2)
    {
        return a*big_pow(a,b-1);
    }
    else
    {
        unsigned long long ans=big_pow(a,b/2);
        return ans*ans;
    }
}


int sieve()
{
    int i,j;
    arr[0]=arr[1]=1;
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
}


int main()
{
    //freopen("tempout.txt","w",stdout);
    sieve();
    power.insert(1);
    unsigned long long i,j,k,loop,root;
    for(i=2; i<=100000; i++)
    {
        //cerr<<"DDD "<<i<<endl;
        for(j=2; j<=64; j++)
        {
            //cerr<<"RR "<<i<<" "<<j<<" "<<j*log2(i)<<" "<<arr[j]<<" "<<big_pow(i,j)<<endl;
            if(arr[j]==1 and j*log2(i)<64)
            {
                //cerr<<"AA "<<i<<" "<<j<<endl;
                power.insert(big_pow(i,j));
            }
        }
    }
    for(const unsigned long long &number: power)
    {
        cout<<number<<endl;
    }
    return 0;
}
