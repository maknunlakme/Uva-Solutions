#include<iostream>
#define X 110
using namespace std;

long long s2[X],s3[X],s4[X],r2[X],r3[X],r4[X];

int main()
{
    long long i,n,t;
    for(i=1;i<=110;i++)
    {
        s2[i]=s2[i-1]+i*i;
        s3[i]=s3[i-1]+i*i*i;
        s4[i]=s4[i-1]+i*i*i*i;

        t=(i*(i+1))/2;

        r2[i]=t*t-s2[i];
        r3[i]=t*t*t-s3[i];
        r4[i]=t*t*t*t-s4[i];
    }
    while(cin>>t)
    {
        cout<<s2[t]<<" "<<r2[t]<<" "<<s3[t]<<" "<<r3[t]<<" "<<s4[t]<<" "<<r4[t]<<endl;
    }
    return 0;
}
