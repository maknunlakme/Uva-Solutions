#include<stdio.h>
int GCD(long long unsigned int i,long long unsigned int j)
{
    if(i==0)
    {
        return j;
    }
    else
    {
        GCD(j%i,i);
    }
}
int main()
{
    long long unsigned int N,G,i,j;
    while(1)
    {
        scanf("%lld",&N);
        if(N==0)
        {
            break;
        }
        G=0;
        for(i=1;i<N;i++)
        {
            for(j=i+1;j<=N;j++)
            {
                G+=GCD(i,j);
            }
        }
        printf("%lld\n",G);
    }
    return 0;
}
