#include<iostream>
#include<climits>
using namespace std;

long long check(long long n)
{
    return (n*(n+1))/2;
}

long long bs(long long k)
{
    long long low=1,high=INT_MAX,mid;
    for(int i=0;i<50;i++)
    {
        mid=(low+high)/2;
        if(check(mid)<k)
        {
            low=mid;
        }
        else  high=mid;
    }
    return mid;
}


int main()
{
    #ifdef maknun
        freopen("tempin.txt","r",stdin);
    #endif // maknun
    long long test,n;
    cin>>test;
    while(test--)
    {
        cin>>n;
        else cout<<n-check(bs(n))<<endl;
    }
    return 0;
}
