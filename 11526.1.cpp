#include<iostream>
using namespace std;

long long H(long long n)
{
    long long res = 0;
    for( long long i = 1; i <= n; i=i+1 )
    {
        res = (res + n/i);
    }
    return res;
}


int main()
{
    int test;
    long long n;
    cin>>test;
    while(test--)
    {
        cin>>n;
        cout<<H(n)<<endl;
    }
    return 0;
}
