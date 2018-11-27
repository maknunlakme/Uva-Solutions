#include<iostream>
#include<stdio.h>
#define X 1001000
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
        bool double_break=false;
        for(i=n-1,j=2;i>(n/2);i--,j++)
        {
            for(j=2;j<(n/2);j++)
            {
                //cout<<j<<" "<<i<<" "<<i+j<<" "<<n<<" "<<arr[j]<<" "<<arr[i]<<endl;
                if((arr[i]==0)&&(arr[j]==0)&&((i+j)==n))
                {
                    double_break=true;
                    break;
                }
            }
            if(double_break==true)
            {
                break;
            }
        }
        if(i==1)
        {
            printf("Goldbach's conjecture is wrong.\n");
        }
        else
        {
            printf("%d = %d + %d\n", n,j,i);
        }
        //cout<<n<<" = "<<j<<" + "<<i<<endl;

    }
    return 0;
}
