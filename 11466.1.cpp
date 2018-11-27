#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<cstdio>
#define X 10000100
using namespace std;

int arr[X+2]= {0};
vector<int> prime;
int sieve()
{
    int i,j;
    arr[0]=1;
    arr[1]=1;
    for(i=3; i*i<=X; i+=2)
    {
        if(arr[i]==0)
        {
            for(j=i; i*j<=X; j++)
            {
                arr[i*j]=1;
            }
        }
    }
    prime.push_back(2);
    for(i=3; i<X; i+=2)
    {
        if(arr[i]==0)
        {
            prime.push_back(i);
        }
    }
}

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    sieve();
    long long int n,i,answer,counter;
    while(cin>>n)
    {
        answer=0;
        counter=0;
        if(n==0)
        {
            break;
        }
        if(n<0)
        {
            n=n-(2*n);
        }
        for(i=0;prime[i]<=sqrt(n)&&i<prime.size(); i++)
        {
            if(n%prime[i]==0)
            {
                counter++;
                answer=prime[i];
                n/=prime[i];
            }
            while(n%prime[i]==0)
            {
                answer=prime[i];
                n/=prime[i];
            }
        }
        if(n>1)
        {
            counter++;
        }
        if(counter<2)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<max(answer,n)<<endl;
        }
    }
    return 0;
}
