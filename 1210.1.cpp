#include<iostream>
#define X 10010
using namespace std;

int arr[X+10],prime[X+10],mark[X+10];
int counter=0;

void sieve()
{
    int i,j;
    for(i=2;i*i<=X;i++)
    {
        if(arr[i]==0)
        {
            for(j=i;i*j<=X;j++)
            {
                arr[i*j]=1;
            }
        }
    }
    for(i=2;i<=X;i++)
    {
        if(arr[i]==0)
        {
           prime[counter]=i;
           counter++;
        }
    }
}

void marking()
{
    int i,j,ans;
    for(i=0;i<counter;i++)
    {
        ans=0;
        for(j=i;i<counter;j++)
        {
            ans+=prime[j];
            if(ans>=X) break;
            mark[ans]++;
        }
    }
}

int main()
{
    sieve();
    marking();
    int n;
    while(1)
    {
        cin>>n;
        if(n==0) break;
        cout<<mark[n]<<endl;
    }
    return 0;
}
