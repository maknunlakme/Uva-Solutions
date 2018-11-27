#include<iostream>
#include<cmath>
using namespace std;

long long x,y,d;
void egcd(long long int a, long long int b)
{
    long long int x1,y1;
    if(b==0)
    {
        x=1;
        y=0;
        d=a;
        return;
    }
    else
    {
        egcd(b, a%b);
        x1=y;
        y1=x-(a/b)*y;
        x=x1;
        y=y1;
    }
}


int main()
{
    long long X,k,p,q,first,last,test,a,b,x1,y1,x2,y2;
    cin>>test;
    while(test--)
    {
        cin>>X>>k;
        a=floor(static_cast<double>(X)/k);
        b=ceil(static_cast<double>(X)/k);
        //cout<<a<<" "<<b<<endl;
        egcd(a,b);
        x1=x*(X/d);
        y1=y*(X/d);
        first=ceil(static_cast<double>((-1)*x1)/b);
        //last=floor(static_cast<double>(y1)/a);
        //cout<<x<<" "<<y<<" "<<d<<endl;
        //cout<<first<<" "<<last<<endl;
        x2=x1+(b*first);
        y2=y1-(a*first);
        cout<<x2<<" "<<y2<<endl;
    }
    return 0;
}
