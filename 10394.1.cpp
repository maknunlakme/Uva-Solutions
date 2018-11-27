#include<iostream>
#include<stdio.h>
#define X 2000100
using namespace std;
int main()
{
    long long int arr[X]={0};
    arr[0]=1;
    arr[1]=1;
    for(long long int i=2;(i*i)<X;i++)
    {
        if(arr[i]==0)
        {
            for(long long int j=i;(j*i)<X;j++)
            {
                arr[i*j]=1;
            }
        }
    }
    long long int twin[10010]={0};
    int temp=0;
    for(long long int i=2;i<X;i++)
    {
        if(arr[i]==0&&arr[i+2]==0)
        {
            temp++;
            twin[temp]=i;
        }
    }
    long long int number;
    while(scanf("%d",&number)==1)
    {
        printf("(%lld, %lld)\n",twin[number],twin[number]+2);
    }
    return 0;
}
