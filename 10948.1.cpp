#include<iostream>
#include<stdio.h>
#define X 1001000
#include<vector>
using namespace std;
int main()
{
    vector<long long int> arr(X,0);
    long long int i,j;
    arr[0]=1;
    arr[1]=1;
    for(i=2;(i*i)<=X;i++)
    {
        if(arr[i]==0)
        {
            for(j=i;(i*j)<=X;j++)
            {
                arr[i*j]=1;
            }
        }
    }
    while(1)
    {
        long long int n;
        scanf("%lld",&n);
        if(n==0)
        {
            break;
        }
        for(i=2;i<=(n/2);i++)
        {
            if((arr[i]==0)&&(arr[n-i]==0))
            {
                break;
            }
        }
        if(i>(n/2))
        {
            printf("%lld:\nNO WAY!\n",n);
        }
        else
        {
            printf("%lld:\n%lld+%lld\n", n,i,n-i);
        }

    }
    return 0;
}
