#include<iostream>
#include<stdio.h>
#define X 100100
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
        int counter=0;
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        for(i=2;i<=(n/2);i++)
        {
            if((arr[i]==0)&&(arr[n-i]==0))
            {
                counter++;
            }
        }
        cout<<counter<<endl;

    }
    return 0;
}
