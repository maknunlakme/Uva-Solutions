#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        a=b-a;
        b=ceil(static_cast<float>(b)/a);
        cout<<b<<endl;
    }
    return 0;
}
