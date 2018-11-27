#include<iostream>
#include<algorithm>
using namespace std;

long long int lcm(long long int a,long long int b)
{
    return (a*b)/__gcd(a,b);
}

int main()
{
    long long int test,n,i,j,l,g,arr[20],last,first;
    cin>>test;
    for(i=0;i<test;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        l=arr[0];
        for(j=1;j<n;j++)
        {
            l=lcm(l,arr[j]);
        }
        //cout<<" lcm "<<l<<endl;
        first=n*l;
        last=0;
        for(j=0;j<n;j++)
        {
            last+=l/arr[j];
        }
        g=__gcd(first,last);
        cout<<"Case "<<i+1<<": "<<first/g<<"/"<<last/g<<endl;
    }
    return 0;
}
