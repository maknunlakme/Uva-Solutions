#include<iostream>
using namespace std;

int main()
{
    int n,div,a,b,i;
    while(cin>>n)
    {
        if(n==2)
        {
            div=10;
            for(i=0;i<=99;i++)
            {
                a=i%div;
                b=i/div;
                if(((a+b)*(a+b))==i)
                {
                    cout<<i<<endl;
                }
            }
        }
        else if(n==4)
        {
            div=100;
            for(i=0;i<=9999;i++)
            {
                a=i%div;
                b=i/div;
                if(((a+b)*(a+b))==i)
                {
                    cout<<i<<endl;
                }
            }
        }
        else if(n==6)
        {
            div=1000;
            for(i=0;i<=999999;i++)
            {
                a=i%div;
                b=i/div;
                if(((a+b)*(a+b))==i)
                {
                    cout<<i<<endl;
                }
            }
        }
        else
        {
            div=10000;
            for(i=0;i<=99999999;i++)
            {
                a=i%div;
                b=i/div;
                if(((a+b)*(a+b))==i)
                {
                    cout<<i<<endl;
                }
            }
        }
    }
    return 0;
}
