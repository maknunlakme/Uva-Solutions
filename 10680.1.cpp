#include<iostream>
#include<algorithm>
#define X 1000000
using namespace std;

int arr[X+10];
long long int lcm(long long int a,long long int b)
{
    long long int temp=(a*b)/__gcd(a,b);
    temp%=X;
    while(temp%10000==0)
    {
        temp/=10000;
    }
    while(temp%10==0)
    {
        temp/=10;
    }
    return temp;
}

int main()
{
    long long int i,n,temp;
    arr[0]=1;
    for(i=1; i<X; i++)
    {
        arr[i]=lcm(arr[i-1],i);
        //cout<<i<<" "<<arr[i]<<endl;
    }
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        temp=arr[n];
        cout<<temp%10<<endl;
    }
    return 0;
}
