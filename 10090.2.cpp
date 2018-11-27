#include<iostream>
#include<cmath>
#define inf 999999999999999
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
    long long int a,b,c,c1,c2,tempx,tempy,i,first,last,newx,newy,xmini,ymini,x1,x2,y1,y2,cost;
    while(1)
    {
        cin>>c;
        if(c==0)
        {
            break;
        }
        cin>>c1>>a>>c2>>b;
        egcd(a,b);
        //cout<<"X "<<x<<" y "<<y<<" D "<<d<<endl;
        tempx=x*(c/d);
        tempy=y*(c/d);
        //cout<<tempx<<" "<<tempy<<endl;
        a/=d;
        b/=d;
        //cout<<a<<" "<<b<<endl;
        first=ceil((static_cast<double>(tempx)/b)*(-1));
        last=floor(static_cast<double>(tempy)/a);
        //cout<<first<<" "<<last<<endl;
        if(c%d==0&&first<=last)
        {
            x1=tempx+(b*first);
            y1=tempy-(a*first);
            x2=tempx+(b*last);
            y2=tempy-(a*last);
            if(x1*c1+y1*c2<x2*c1+y2*c2)
            {
                xmini=x1;
                ymini=y1;
            }
            else
            {
                xmini=x2;
                ymini=y2;
            }
            cout<<xmini<<" "<<ymini<<endl;
        }
        else
        {
            cout<<"failed"<<endl;
        }
    }
    return 0;
}
