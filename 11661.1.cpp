#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    while(1)
    {
        long long int l,distance=3000000,rdis=3000000,ddis=6000000;
        cin>>l;
        if(l==0)
        {
            break;
        }
        for(long long int i=0;i<l;i++)
        {
            char temp;
            cin>>temp;
            if(temp=='R')
            {
                rdis=i;
            }
            else if(temp=='D')
            {
                ddis=i;
            }
            else if(temp=='Z')
            {
                distance=0;
            }
            long long int temp2=labs(ddis-rdis);
            if(temp2<distance)
            {
                distance=temp2;
            }
        }
        cout<<distance<<endl;
    }
}
