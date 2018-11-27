#include<iostream>
#include<vector>
#define X 1000010
using namespace std;

bool arr[X+10];
int sum[X+10],divi[X+10];
vector<int>prime;

void sieve()
{
    int i,j;
    for(i=2; i*i<=X; i++)
    {
        if(arr[i]==0)
        {
            for(j=2; i*j<=X; j++)
            {
                arr[i*j]=1;
            }
        }
    }
    for(i=2; i<=X; i++)
    {
        if(arr[i]==0)
        {
            prime.push_back(i);
        }
    }
}

void pre_cal()
{
    int i,j,temp,counter;
    for(i=2; i<X; i++)
    {
        temp=i;
        for(j=0; j<prime.size() and temp>=prime[j]; j++)
        {
            if(arr[temp]==0)
            {
                divi[i]++;
                break;
            }
            while(temp%prime[j]==0)
            {
                divi[i]++;
                temp/=prime[j];
            }
        }
        divi[i]+=divi[i-1];
    }
}

int main()
{
    sieve();
    pre_cal();
    int n,temp,counter,i;
    while(scanf("%d",&n)!=EOF)
    {
        printf("%d\n",divi[n]);
    }
    return 0;
}
