#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long int n,temp;
    long long int seq[6000];
    long long int i,j=1;
    for(i=1;i<2000001000;i++)
    {
        temp=i;
        while(temp%2==0)
        {
            temp/=2;
        }
        while(temp%3==0)
        {
            temp/=3;
        }
        while(temp%5==0)
        {
            temp/=5;
        }
        while(temp%7==0)
        {
            temp/=7;
        }
        if(temp==1)
        {
            seq[j]=i;
        }
    }
    cout<<"hello"<<endl;
    while(1)
    {
        scanf("%d",&n);
        temp=n;
        if(n==0)
        {
            break;
        }
        else
        {
            if(temp%10==1)
            {
                printf("The %lldst humble number is %lld.",n,seq[n]);
            }
            else if(temp%10==2)
            {
                printf("The %lldnd humble number is %lld.",n,seq[n]);
            }
            else if(temp%10==3)
            {
                printf("The %lldrd humble number is %lld.",n,seq[n]);
            }
            else
            {
                printf("The %lldth humble number is %lld.",n,seq[n]);
            }
        }
    }
    return 0;
}
