#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
    vector<long long int>arr(10001000,0);
    long long int i,j,k,l,n,counter;
    arr[0]=1;
    arr[1]=1;
    for(i=2;(i*i)<=10001000;i++)
    {
        if(arr[i]==0)
        {
            for(j=i;(i*j)<=10001000;j++)
            {
                arr[i*j]=1;
            }
        }
    }
    while(scanf("%lld",&n)==1)
    {
        if(n<8)
        {
            printf("Impossible.\n");
        }
        else
        {
            for(i=n-6,counter=0;i>=2;i--,counter++)
            {
                if(arr[i]==0)
                {
                    break;
                }
            }
            for(j=counter+2,counter=0;j>=2;j--,counter++)
            {
                if(arr[j]==0)
                {
                    break;
                }
            }
            for(k=counter+2,counter=0;k>=2;k--,counter++)
            {
                if(arr[k]==0)
                {
                    break;
                }
            }
            for(l=counter+2,counter=0;l>=2;l--,counter++)
            {
                if(arr[l]==0)
                {
                    break;
                }
            }
            if((i+j+k+l)==n)
            {
                printf("%lld %lld %lld %lld\n",l,k,j,i);
            }
            else
            {
                printf("Impossible.\n");
            }
        }

    }
    return 0;
}

