#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    //freopen("tempin.txt","r",stdin);
    //freopen("tempout.txt","w",stdout);
    double n,x;
    int test,a,b,temp;
    cin>>test;
    while(test--)
    {
        cin>>a>>b;
        n=b-a;
        if((b-a)==1)
        {
            cout<<1<<endl;
        }
        else
        {
            x=((-1)+sqrt(1+(4*n)))/2;
            //x*=2;
            a=round(x);
            b=a*(a+1);
            if(b>n)
            {
                a--;
            }
            b=a*(a+1);
            temp=n-b;
            if(b==n)
            {
                cout<<a*2<<endl;
            }
            else if(temp<=a+1)
            {
                cout<<a*2+1<<endl;
            }
            else if(temp<=(a*2+1))
            {
                cout<<a*2+2<<endl;
            }
            else
            {
                cout<<"bling"<<endl;
            }
        }
    }
    return 0;
}
