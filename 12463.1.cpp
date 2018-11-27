#include<iostream>
#include<cstdio>
#define m 1000000007
using namespace std;

long long int power(int a,int b)
{
    long long int temp;
    if(b==0)
    {
        return 1;
    }
    else if(b%2==0)
    {
        temp=(power(a,b/2)%m);
        temp*=temp;
        temp%=m;
        return temp;
    }
    else
    {
        temp=((a%m)*(power(a,b-1)%m))%m;
        return temp;
    }
}

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int test,n,i;
    cin>>test;
    for(i=0;i<test;i++)
    {
        cin>>n;
        cout<<"Case #"<<i+1<<": "<<((power(2,n-1)%m)*(n%m))%m<<endl;
    }
}
