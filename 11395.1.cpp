#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main()
{
    long long n,temp;
    while(1)
    {
        scanf("%lld",&n);
        if(n==0LL) break;
        temp=n-int(sqrt(n*1.0))-int(sqrt(n/2.0));
        printf("%lld\n",temp);
    }
    return 0;
}

