#include<iostream>
#include<stdio.h>
#include<vector>
#define X 100010000
using namespace std;

int main()
{
    vector<int> arr(X,0);
    bool found;
    int i,j;
    arr[0]=1;
    arr[1]=1;
    for(i=2; (i*i)<=X; i++)
    {
        if(arr[i]==0)
        {
            for(j=i; (i*j)<=X; j++)
            {
                arr[i*j]=1;
            }
        }
    }
    int n,temp;
    while(scanf("%d",&n)==1)
    {
        found=false;
        if(n<5)
        {
            printf("%d is not the sum of two primes!\n",n);
        }
        else if(n%2==1)
        {
            if(arr[n-2]==1)
            {
                printf("%d is not the sum of two primes!\n",n);
            }
            else
            {
                printf("%d is the sum of %d and %d.\n", n,2,n-2);
            }
        }
        else
        {
            for(i=n/2; i>-1;i--)
            {
                if((arr[i]==0)&&(arr[n-i]==0)&&i!=n-i)
                {
                    found=true;
                    break;
                }
            }
            //cout<<" i "<<i<<" n-i "<<n-i<<endl;
            if(found==true)
            {
                if(i<n-i)
                {
                    printf("%d is the sum of %d and %d.\n", n,i,n-i);
                }
                else
                {
                    printf("%d is the sum of %d and %d.\n", n,n-i,i);
                }
            }
            else
            {
                printf("%d is not the sum of two primes!\n",n);
            }
        }
    }
    return 0;
}

