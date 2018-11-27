#include<iostream>
using namespace std;

unsigned long long choose(unsigned long long n, unsigned long long k)
{
    if (k>n/2)
    {
        k=n-k;
    }
    unsigned long long r = 1;
    for (unsigned long long d = 1; d <= k; ++d)
    {
        r *= n--;
        r /= d;
    }
    return r;
}


int main()
{
    unsigned long long int k,n;
    while(1)
    {
        cin>>n>>k;
        if(k==0&&n==0)
        {
            break;
        }
        else
        {
            cout<<choose(n,k)<<endl;
        }
    }
    return 0;
}



