#include<iostream>
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
       // cout<<"b "<<b<<" a%b "<<a%b<<endl;
        egcd(b, a%b);
        x1=y;
        //cout<<"x1 "<<x1<<endl;
        y1=x-(a/b)*y;
        //cout<<"y1 "<<y1<<endl;
        x=x1;
        //cout<<"x "<<x<<endl;
        y=y1;
        //cout<<"y "<<y<<endl;
    }
}

int main()
{
    long long int a,b;
    while(cin>>a>>b)
    {
        egcd(a,b);
        cout<<x<<" "<<y<<" "<<d<<endl;
    }
    return 0;
}
