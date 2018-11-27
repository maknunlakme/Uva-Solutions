#include<iostream>
#include<iomanip>
#include<algorithm>
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
        H = (-1)*x;
        K = (-1)*y;
        R = sqrt((x*x)+(y*y)+z);
        if(H>0)
        {
            cout<<fixed<<setprecision(3)<<"(x + "<<abs(H)<<")^2 + ";
        }
        else if(H<0)
        {
            cout<<fixed<<setprecision(3)<<"(x - "<<abs(H)<<")^2 + ";
        }
        else if(H==0)
        {
            cout<<fixed<<setprecision(3)<<"x^2 + ";
        }
        if(K>0)
        {
            cout<<fixed<<setprecision(3)<<"(y + "<<abs(K)<<")^2 = "<<R<<"^2"<<endl;
        }
        else if(K<0)
        {
            cout<<fixed<<setprecision(3)<<"(y - "<<abs(K)<<")^2 = "<<R<<"^2"<<endl;
        }
        else if(K==0)
        {
            cout<<fixed<<setprecision(3)<<"y^2 = "<<R<<"^2"<<endl;
        }
        cout<<"x^2 + y^2 ";
        if(x>0)
        {
            cout<<fixed<<setprecision(3)<<"- "<<abs(x)*2<<"x ";
        }
        else if(x<0)
        {
            cout<<fixed<<setprecision(3)<<"+ "<<abs(x)*2<<"x ";
        }
        if(y>0)
        {
            cout<<fixed<<setprecision(3)<<"- "<<abs(y)*2<<"y ";
        }
        else if(y<0)
        {
            cout<<fixed<<setprecision(3)<<"+ "<<abs(y)*2<<"y ";
        }
        if(z>0)
        {
            cout<<fixed<<setprecision(3)<<"- "<<abs(z);
        }
        else if(z<0)
        {
            cout<<fixed<<setprecision(3)<<"+ "<<abs(z);
        }

        cout<<" = 0"<<endl<<endl;
    }
    return 0;
}
