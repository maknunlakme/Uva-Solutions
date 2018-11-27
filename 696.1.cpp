#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int m,n,knight;
    bool swapping;
    while(1)
    {
        swapping=false;
        scanf("%d%d",&m,&n);
        if(m==0&&n==0)
        {
            break;
        }
        if(m<n)
        {
            swap(m,n);
            swapping=true;
        }
        if(n==1)
        {
            knight=m;
        }
        else if(n==2&&m==2)
        {
            knight=4;
        }
        else if(n==2)
        {
            if((((m/2)%2)!=0)||(m%2)!=0)
            {
                knight=((m/2)+1)*2;
            }
            else
            {
                knight=m;
            }
        }
        else
        {
            knight=((n*m)+1)/2;
        }
        if(swapping==false)
        {
            printf("%d knights may be placed on a %d row %d column board.\n",knight,m,n);
        }
        else
        {
            printf("%d knights may be placed on a %d row %d column board.\n",knight,n,m);
        }
    }
}
