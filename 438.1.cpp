#include<iostream>
#include<algorithm>
#include<iomanip>
#define PI 3.141592653589793
using namespace std;
int main()
{
    double Ax,Ay,Bx,By,Cx,Cy;
    while(cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy)
    {
        double a,b,c,d,l,m,n,k,p,q,r,s,x,y,z,D,H,K,R;
        a = 2*Ax;
        b = 2*Ay;
        c = 1;
        d = (-1)*((Ax*Ax)+(Ay*Ay));
        l = 2*Bx;
        m = 2*By;
        n = 1;
        k = (-1)*((Bx*Bx)+(By*By));
        p = 2*Cx;
        q = 2*Cy;
        r = 1;
        s = (-1)*((Cx*Cx)+(Cy*Cy));
        D = (a*m*r+b*p*n+c*l*q)-(a*n*q+b*l*r+c*m*p);
        x = ((b*r*k+c*m*s+d*n*q)-(b*n*s+c*q*k+d*m*r))/D;
        y = ((a*n*s+c*p*k+d*l*r)-(a*r*k+c*l*s+d*n*p))/D;
        z = ((a*q*k+b*l*s+d*m*p)-(a*m*s+b*p*k+d*l*q))/D;
        R = sqrt((x*x)+(y*y)+z);
        cout<<fixed<<setprecision(2)<<2*PI*R<<endl;
    }
    return 0;
}
