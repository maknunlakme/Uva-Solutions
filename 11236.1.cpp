#include<iostream>
#include<iomanip>
#define X 2000000000
using namespace std;
int main()
{
    #ifdef maknun
        freopen("tempout.txt","w",stdout);
    #endif // maknun
    long long i,j,k,l,a,b,c,d,e;
    for(i=1; i<=2000 and i*i*i*i<=X; i++)
    {
        for(j=i; j<=(2000-i) and i*j*j*j<=X; j++)
        {
            for(k=j; k<=(2000-i-j) and i*j*k*k<=X; k++)
            {
                a=i+j+k;
                b=i*j*k;
                c=1000000;
                d=c*a;
                e=b-c;
                if(b!=c and d%e==0)
                {
                    l=d/e;
                    if(l>=k and a+l<=2000 and b*l<=X)
                    {
                        cout<<fixed<<setprecision(2)<<(i*1.0)/100<<" "<<(j*1.0)/100<<" "<<(k*1.0)/100<<" "<<(l*1.0)/100<<endl;
                    }
                }
            }
        }
    }
    return 0;
}
