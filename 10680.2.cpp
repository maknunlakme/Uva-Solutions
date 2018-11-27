#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#define X 1000010
using namespace std;

int brr[X+20]= {0};
vector<int>prime;
int sieve()
{
    int i,j;
    for(i=2; i*i<=X; i++)
    {
        if(brr[i]==0)
        {
            prime.push_back(i);
            for(j=i; i*j<=X; j++)
            {
                brr[i*j]=1;
            }
        }
    }
    for(; i<=X; i++)
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

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    sieve();
    int i,n,temp,total,counter1,counter2;
    while(1)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        counter1=0;
        counter2=0;
        total=1;
        temp=n;
        while(temp>=2)
        {
            temp/=2;
            counter1++;
        }
        temp=n;
        while(temp>=5)
        {
            temp/=5;
            counter2++;
        }
        temp=counter1-counter2;
        //cout<<"temp "<<temp<<" "<<counter1<<" "<<counter2<<endl;
        for(i=0;i<temp;i++)
        {
            total*=2;
            total%=10;
        }
        //cout<<"total 2 "<<total<<endl;
        temp=n;
        while(temp>=3)
        {
            temp/=3;
            total*=3;
            total%=10;
        }
        //cout<<"total 3 "<<total<<endl;
        for(i=3;prime[i]<=n;i++)
        {
            temp=n;
            while(temp>=prime[i])
            {
                temp/=prime[i];
                total*=prime[i];
                total%=10;
                //cout<<"peeeep "<<temp<<" "<<prime[i]<<endl;
            }
            //cout<<"total "<<prime[i]<<" "<<total<<endl;
        }
        cout<<total<<endl;
    }
    return 0;
}

