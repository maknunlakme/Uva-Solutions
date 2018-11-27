#include<iostream>
#include<stdio.h>
#include<vector>
#define X 20001000
using namespace std;
int main()
{
    vector<long long int>arr(X,0);
    arr.push_back(1);
    arr.push_back(1);
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
    vector<long long int>twin;
    twin.push_back(0);
    for(long long int i=2;i<X;i++)
    {
        if(arr[i]==0&&arr[i+2]==0)
        {
            twin.push_back(i);
        }
    }
    long long int number;
    while(scanf("%d",&number)==1)
    {
        printf("(%lld, %lld)\n",twin[number],twin[number]+2);
    }
    return 0;
}
