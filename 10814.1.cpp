#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int a,b,d,test;
    char c;
    cin>>test;
    while(test--)
    {
        cin>>a>>c>>b;
        d=__gcd(a,b);
        cout<<a/d<<" "<<c<<" "<<b/d<<endl;
    }
    return 0;
}
