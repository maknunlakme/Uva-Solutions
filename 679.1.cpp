#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,j,m,test,level,ball,quotient,temp  ;
    cin>>test;
    while(test--)
    {
        cin>>level>>ball;
        j=pow(2,level);
        i=j/2;
        quotient=ball;
        temp=level+1;
        while(temp--)
        {
            m=(i+j)/2;
            //cout<<i<<" "<<j<<" "<<m<<" "<<quotient<<endl;
            if(quotient%2==0)
            {
                i=m;
                if(quotient!=1)
                {
                    quotient/=2;
                }
            }
            else
            {
                j=m;
                if(quotient!=1)
                {
                    quotient=(quotient/2) + 1;
                }
            }
        }
        if(quotient%2==0)
        {
            cout<<j<<endl;
        }
        else
        {
            cout<<i<<endl;
        }
    }
    cin>>temp;
    return 0;
}
