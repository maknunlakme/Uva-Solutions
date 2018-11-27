#include<iostream>
using namespace std;

int GCD(int i,int j)
{
    if(i==0)
    {
        return j;
    }
    else
    {
        GCD(j%i,i);
    }
}

int main()
{
    int test,a,b,maxigcd=0,gcd;
    cin>>test;
    while(test--)
    {
        cin>>a;
        while(cin>>b)
        {
            gcd=GCD(a,b);
            if(maxigcd<gcd)
            {
                maxigcd=gcd;
            }
            b=a
        }
    }
    return 0;
}
