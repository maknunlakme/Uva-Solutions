#include<iostream>
#include<cmath>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;

string line,jkline,kline;

long long big_pow(long long a,long long b)
{
    if(b==0) return 1;
    else if(b%2)
    {
        return a*(big_pow(a,b-1));
    }
    else
    {
        long long ans=big_pow(a,b/2);
        return ans*ans;
    }
}


int main()
{
    double number;
    long long up,down,a,b,length,i,t=0,j,k;
    while(1)
    {
        t++;
        cin>>j;
        if(j==-1) break;
        cin>>line;
        k=line.length()-j-2;
        //cerr<<"AA "<<j<<" "<<k<<endl;
        jkline=line.substr(2,k+j);
        kline=line.substr(2,k);
        //cerr<<"AA "<<jkline<<" "<<kline<<endl;
        if(j>0)
        {
            up=atol(jkline.c_str())-atol(kline.c_str());
            down=big_pow(10,j+k)-big_pow(10,k);
        }
        else
        {
            up=atol(jkline.c_str());
            down=big_pow(10,j+k);
        }
        //cerr<<"AA "<<up<<" "<<down<<endl;
        a=up/__gcd(up,down);
        b=down/__gcd(up,down);
        cout<<"Case "<<t<<": "<<a<<"/"<<b<<endl;
    }
    return 0;
}
