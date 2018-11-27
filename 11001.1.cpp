#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,n,maxians;
    double v,d,l,maxi;
    while(1)
    {
        cin>>a>>b;
        if(a==0 and b==0)
            break;
        n=1;
        maxi=0;
        maxians=0;
        while(1)
        {
            v=(a*1.0)/n;
            if(v-b<=0)
                break;
            d=0.3*sqrt(v-b);
            l=n*d;
            //cerr<<"RR "<<n<<" "<<d<<" "<<l<<" "<<maxi<<endl;
            if(abs((n*d)-maxi) < 0.00000001)
            {
                //cerr<<"TADA"<<endl;
                maxians=0;
                break;
            }
            if(maxi<l)
            {
                maxi=l;
                maxians=n;
            }
            n++;
        }
        cout<<maxians<<endl;
    }
    return 0;
}
