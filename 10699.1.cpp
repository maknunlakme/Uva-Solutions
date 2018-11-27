#include<iostream>
#include<algorithm>
#define X 1000100
using namespace std;

int n[X+10];

int divisor()
{
    int i,j;
    for(i=1;i<=X;i++)
    {
        for(j=i;j<=X;j+=i)
        {
            n[j]++;
        }
    }
}

int main()
{
    int a,b,counter,i;
    while(cin>>a)
    {
        if(a==0)
        {
            break;
        }
        b=a;
        counter=0;
        if(a%2==0)
        {
            counter++;
            a/=2;
        }
        while(a%2==0)
        {
            a/=2;
        }
        for(i=3;i<=a;i+=2)
        {
            if(a%i==0)
            {
                counter++;
                a/=i;
            }
            while(a%i==0)
            {
                a/=i;
            }
        }
        if(a>1)
        {
            counter++;
        }
        cout<<b<<" : "<<counter<<endl;
    }
    return 0;
}

