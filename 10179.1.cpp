#include<iostream>
#include<cstdio>
using namespace std;
int eular(int n)
{
    int result = n;
    int i;
    for (i=2; i*i<=n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
            }
            result -= result / i;
        }
    }
    if (n > 1)
    {
        result -= result / n;
    }
    return result;
}

int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    int n;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        else
        {
            cout<<eular(n)<<endl;
        }
    }
    return 0;
}
