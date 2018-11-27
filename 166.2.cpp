#include<iostream>
using namespace std;

int main()
{
    int arr[10],brr[10],i;
    float a;
    brr[0]=1;
    brr[1]=2;
    brr[2]=4;
    brr[3]=10;
    brr[4]=20;
    brr[5]=40;
    for(i=0;i<6;i++)
    {
        cin>>arr[i];
    }
    if(arr[0]==0&&arr[1]==0&&arr[2]==0&&arr[3]==0&&arr[4]==0&&arr[5]==0)
    {
        return 0;
    }
    else
    {
        cin>>a;
        money=a*100;
        money%=5;
        for(i=1;i<=money;i++)
        {
            for(j=0;j<=6;j++)
            {
                for(k=1;k<=arr[j];k++)
                {
                    if((k*brr[j])<=k)
                    {
                        if(dp[i-(k*brr[j]))<dp[i])
                        {
                            dp[i]=dp[i-(k*brr[j])+1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
