#include<iostream>
#include<cstdio>
#define X 10000
using namespace std;
int main()
{
    int arr[X]={0};
    int i,j;
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
        int n;
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        for(i=2;i<(n/2);i++)
        {
            if((arr[i]==0)&&(arr[n-i]==0))
            {
                break;
            }
        }
        if(i>(n/2))
        {
            printf("Goldbach's conjecture is wrong.\n");
        }
        else
        {
            printf("%d = %d + %d\n", n,i,n-i);
        }

    }
    return 0;
}
