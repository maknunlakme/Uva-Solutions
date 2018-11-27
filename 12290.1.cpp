#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long int m,n,k,person,counting,kcounting,add;
    while(1)
    {
        counting=0,kcounting=0;
        scanf("%lld%lld%lld",&n,&m,&k);
        if(n==0&&m==0&&k==0)
        {
            break;
        }
        person=1;
        while(1)
        {
            counting++;
            if(person==m)
            {
                if(counting%7==0)
                {
                    kcounting++;
                }
                else
                {
                    long long int temp=counting;
                    while(temp!=0)
                    {
                        if(temp%10==7)
                        {
                            kcounting++;
                            break;
                        }
                        else
                        {
                            temp/=10;
                        }
                    }
                }
                if(kcounting==k)
                {
                    break;
                }
            }
            if(person==1)
            {
                add=1;
            }
            else if(person==n)
            {
                add=-1;
            }
            person+=add;
            //cout<<"person "<<person<<" counting "<<counting<<endl;
        }
        printf("%lld\n",counting);
    }
    return 0;
}
