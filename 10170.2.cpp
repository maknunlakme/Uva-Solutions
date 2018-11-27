#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long long int s,d,n;
    while(scanf("%lld%lld",&s,&d)==2)
    {
        d+=(s*(s-1))/2;
        n=ceil((sqrt(1+(8*d))-1)/2.0);
        cout<<n<<endl;
    }
    return 0;
}
