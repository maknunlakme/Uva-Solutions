#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int eular(int n)
{
    int result = n;
    int i,divisor=1,counter,nsqrt;
    nsqrt=sqrt(n);
    for (i=2; i<=nsqrt; i++)
    {
        if (n % i == 0)
        {
            counter=0;
            while (n % i == 0)
            {
                n /= i;
                counter++;
            }
            divisor*=(counter+1);
            result -= result / i;
        }
    }
    if (n > 1)
    {
        divisor*=2;
        result -= result / n;
    }
    return result+(divisor-1);
}

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int n;
    while(cin>>n)
    {
        if(n==1)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<n-eular(n)<<endl;
        }
    }
    return 0;
}
