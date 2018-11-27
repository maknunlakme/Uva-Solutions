#include<iostream>
using namespace std;
int main()
{
    int test,l,w,h,volume,temp,maxi,i;
    while(1)
    {
        maxi = 0;
        cin>>test;
        if(test==0)
        {
            break;
        }
        for(i=0;i<test;i++)
        {
            cin>>l;
            cin>>w;
            cin>>h;
            if(maxi<h)
            {
                maxi = h;
                volume = l*w*h;
            }
            else if(maxi==h)
            {
                temp = l*w*h;
                if(volume<temp)
                {
                    volume = temp;
                }
            }
        }
        cout<<volume<<endl;
    }
    return 0;
}
