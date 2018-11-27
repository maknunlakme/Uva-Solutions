#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#define X 500000
using namespace std;

int arr[X+20]= {0},brr[X+20],p[1100]= {0};
vector<int>prime;

int sieve()
{
    int i,j;
    for(i=2; i*i<=1000; i++)
    {
        if(p[i]==0)
        {
            prime.push_back(i);
            for(j=i; i*j<=1000; j++)
            {
                p[i*j]=1;
            }
        }
    }
    for(; i<=1000; i++)
    {
        if(p[i]==0)
        {
            prime.push_back(i);
        }
    }
    //cout<<prime[prime.size()-1]<<endl;
}

int div()
{
    sieve();
    arr[0]=0;
    arr[1]=1;
    int i,j,counter,temp,prev;
    for(i=1; i<X+10; i++)
    {
        temp=i;
        for(j=0; prime[j]*prime[j]<=temp&&j<prime.size(); j++)
        {
            while(temp%prime[j]==0)
            {
                temp/=prime[j];
                arr[i]+=prime[j];
                //cout<<i<<" "<<prime[j]<<endl;
            }
        }
        if(temp>1)
        {
            arr[i]+=temp;
        }
        //cout<<i<<" "<<arr[i]<<endl;
    }
    //cout<<"helere"<<endl;
   // for(i=0;i<X;i++)
   // {
       // cout<<i<<" "<<arr[i]<<endl;
   // }
    for(i=1; i<=X+10; i++)
    {
        counter=1;
        temp=arr[i];
        prev=i;
        while(1)
        {
            if(temp==prev)
            {
                break;
            }
            prev=temp;
            temp=arr[temp];
            counter++;
            //cout<<i<<" "<<temp<<endl;
        }
        brr[i]=counter;
        //cout<<i<<" "<<counter<<endl;
    }
}

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    div();
    int test,i,a,b;
    cin>>test;
    for(i=0; i<test; i++)
    {
        cin>>a>>b;
        if(a>b)
        {
            swap(a,b);
        }
        cout<<"Case #"<<i+1<<":"<<endl;
        cout<<*max_element((brr+a),(brr+b+1))<<endl;
    }
    return 0;
}
