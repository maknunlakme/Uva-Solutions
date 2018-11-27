#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    long double n,p;
    while(cin>>n>>p)
    {
        long double k;
        k = pow(p,(1/n));
        cout<<fixed<<setprecision(0)<<k<<endl;
    }
    return 0;
}
