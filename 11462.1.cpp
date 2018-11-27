#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
    int test,i;
    while(1)
    {
        int n[2000100];
        scanf("%d",&test);
        if(test==0)
        {
            break;
        }
        else
        {
            for(i=0;i<test;i++)
            {
                scanf("%d",&n[i]);
            }
            sort(n,n+test);
            for(i=0;i<test;i++)
            {
                if(i==(test-1))
                {
                    printf("%d\n",n[i]);
                }
                else
                {
                    printf("%d ",n[i]);
                }
            }
        }
    }
    return 0;
}
