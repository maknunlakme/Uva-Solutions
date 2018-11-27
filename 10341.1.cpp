#include<iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#define EPS 1e-7
using namespace std;

int p,q,r,s,t,u;

double f(double x)
{
    return p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u;
}
double fd(double x)
{
  return (-p*exp(-x)) + q*cos(x) - r*sin(x) + (s/(cos(x)*cos(x))) + 2*t*x;
}

long double newton()
{
    if(f(0)==0)
    {
        return 0;
    }
    double x=0.5;
    while(1)
    {
        double x1=x - (f(x)/fd(x));
        if(fabs(x1-x)<EPS)
        {
            return x;
        }
        else
        {
            x=x1;
        }
    }
}

int main()
{
    while(scanf("%d%d%d%d%d%d",&p,&q,&r,&s,&t,&u)==6)
    {
        if(f(0)*f(1)>0)
        {
            cout<<"No solution"<<endl;
        }
        else
        {
            cout<<fixed<<setprecision(4)<<newton()<<endl;
        }
    }
    return 0;
}
