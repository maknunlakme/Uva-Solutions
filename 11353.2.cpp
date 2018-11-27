#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
#define X 2000000
using namespace std;

int arr[X+20],brr[2020]={0};
vector<int>prime;
int sieve()
{
    int i,j;
    for(i=2;i*i<=2000;i++)
    {
        if(brr[i]==0)
        {
            prime.push_back(i);
            for(j=i;i*j<=2000;j++)
            {
                brr[i*j]=1;
            }
        }
    }
    for(;i<=2000;i++)
    {
        if(brr[i]==0)
        {
            prime.push_back(i);
        }
    }
    /*for(i=0;i<prime.size();i++)
    {
        cout<<i<<" "<<prime[i]<<endl;
    }*/
}

vector<pair<int,int> >divisor;
int div()
{
    sieve();
    int i,j,isqrt,counter,n;
    for(i=1;i<=X;i++)
    {
        isqrt=sqrt(i);
        n=i;
        counter=0;
        for(j=0;prime[j]<=isqrt;j++)
        {
            while(n%prime[j]==0)
            {
                n/=prime[j];
                counter++;
            }
        }
        if(n>1)
        {
            counter++;
        }
        arr[i]=counter;
        //cout<<"arr "<<i<<" "<<counter<<endl;
    }
    for(i=1;i<=X;i++)
    {
        divisor.push_back(make_pair(arr[i],i));
    }
    sort(divisor.begin(),divisor.end());
}

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    div();
    int i,n;
    /*for(i=0;i<X;i++)
    {
        cout<<i<<" "<<divisor[i].first<<" "<<divisor[i].second<<endl;
    }*/
    for(i=0;;i++)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        else
        {
            cout<<"Case "<<i+1<<": "<<divisor[n-1].second<<endl;
        }
    }
    return 0;
}

