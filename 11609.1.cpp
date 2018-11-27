#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstdio>
using namespace std;
long double power(int a,int b)
{
    long double temp;
    if(b==0)
    {
        return 1;
    }
    else
    {
        return (a*power(a,b-1))+1e-9;
    }
}
int main()
{
    freopen("tempin.txt","r",stdin);
    freopen("tempout.txt","w",stdout);
    int a,b;
    while(cin>>a>>b)
    {
        if(a==0&&b==0)
        {
            break;
        }
        cout<<setprecision(30)<<power(a,b)<<endl;
    }
    return 0;
}

