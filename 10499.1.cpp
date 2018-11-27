#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long int n;
    while(scanf("%lld",&n)==1&&n>0)
    {
        if(n==-1)
        {
            break;
        }
        else if(n==1)
        {
            printf("0%%\n");
        }
        else
        {
            printf("%lld%%\n",n*25);
        }
    }
    return 0;
}
