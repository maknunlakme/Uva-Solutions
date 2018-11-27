#include<iostream>
#include<iomanip>
using namespace std;
long double combination(long double n, long double temp)
{
    if(n==temp)
    {
        return 1;
    }
    else
    {
        return n*combination(n-1,temp);
    }
}
long double factorial(long double m)
{
    if(m==0)
    {
        return 1;
    }
    else
    {
        return m*factorial(m-1);
    }
}
int main()
{
    long double n,m,temp,total,factm;
    while(1)
    {
        cin>>n>>m;
        if(n==0&&m==0)
        {
            break;
        }
        temp = n-m;
        total = n*combination(n-1,temp);
        factm = m*factorial(m-1);
        total /=factm;
        cout << n << " things taken " << m << " at a time is " << fixed << setprecision(0) << total << " exactly." << endl;
    }
}
