#include<iostream>
#include<climits>
#include<cstdio>
#include<vector>
#include<cmath>
#define X 47000
using namespace std;

vector<unsigned int>prime;
unsigned int arr[X+10]= {0};
void sieve()
{
    unsigned int i,j;
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
    for(i=3; i<=X; i+=2)
    {
        if(arr[i]==0)
        {
            prime.push_back(i);
        }
    }
}


unsigned int primecheck(unsigned int n)
{
    unsigned int i,j,root;
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    else if(n%2==0)
    {
        return 0;
    }
    else
    {
        root=sqrt(n);
        for(i=0; prime[i]<=root; i++)
        {
           // cout<<i<<" "<<prime[i]<<endl;
            if(n%prime[i]==0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    sieve();
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    unsigned int a,b,x,y,prev,maxi,mini,maxil,maxiu,minil,miniu,i;
    while(cin>>a>>b)
    {
        maxi=0;
        maxiu=0;
        maxil=0;
        miniu=0;
        minil=0;
        mini=INT_MAX;
        x=a;
        y=b;
        if(a!=2&&a%2==0&&a<b)
        {
            a++;
        }
        while(primecheck(a)!=1&&a<=b)
        {
            a++;
        }
        prev=a;
        //cout<<"prev "<<prev<<" "<<primecheck(2)<<endl;
        if(primecheck(prev)==1)
        {
            if(prev==2)
            {
                i=a+1;
            }
            else
            {
                i=a+2;
            }
            //cout<<"prev "<<prev<<" "<<primecheck(prev)<<endl;
            for(; i<=b; i+=2)
            {
                if(primecheck(i)==1)
                {
                    if(maxi<(i-prev))
                    {
                        maxi=i-prev;
                        maxiu=prev;
                        maxil=i;
                    }
                    if(mini>(i-prev))
                    {
                        mini=i-prev;
                        miniu=prev;
                        minil=i;
                    }
                    prev=i;
                }
            }
        }
        if(maxi==0)
        {
            cout<<"There are no adjacent primes."<<endl;
        }
        else
        {
            cout<<miniu<<","<<minil<<" are closest, "<<maxiu<<","<<maxil<<" are most distant."<<endl;
        }

    }
    return 0;
}
