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
    long long int a,b,c,c1,c2,tempx,tempy,i,first,last,newx,newy,xmini,ymini;
    while(1)
    {
        xmini=inf;
        ymini=inf;
        cin>>c;
        if(c==0)
        {
            break;
        }
        cin>>a>>b;
        egcd(a,b);
        cout<<"x "<<x<<" y "<<y<<" d "<<d<<endl;
        if(c%d==0)
        {
            //cout<<x<<" "<<y<<" "<<d<<endl;
            tempx=x*(c/d);
            tempy=y*(c/d);
            first=ceil((static_cast<double>(tempx/b))*(-1));
            last=(tempy/a);
            //cout<<tempx<<" "<<tempy<<" "<<first<<" "<<last<<endl;
            for(i=first;i<=last;i++)
            {
                //cout<<" x "<<tempx<<" b "<<b<<" y "<<tempy<<" a "<<a<<" i "<<i<<endl;
                newx=tempx+(b*i);
                newy=tempy-(a*i);
                //cout<<newx<<" "<<newy<<endl;
                if(((newx*c1)+(newy*c2))<((xmini*c1)+(ymini*c2)))
                {
                    xmini=newx;
                    ymini=newy;
                    break;
                }

            }
            //newx=tempx+(b*last);
            //newy=tempy-(a*last);
            cout<<xmini<<" "<<ymini<<endl;
        }
        else
        {
            cout<<"failed"<<endl;
        }
    }
    return 0;
}
