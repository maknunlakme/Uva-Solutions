#include<iostream>
using namespace std;
int sky[10100];
int main()
{
    int left,height,right,maxi=0,prev=0,i;
    while(cin>>left>>height>>right)
    {
        if(maxi<right)
        {
            maxi=right;
        }
        for(i=left;i<right;i++)
        {
            if(sky[i]<height)
            {
                sky[i]=height;
            }
        }
    }
    for(i=0;i<maxi;i++)
    {
        if(sky[i]!=prev)
        {
            cout<<i<<" "<<sky[i]<<" ";
            prev=sky[i];
        }
    }
    cout<<maxi<<" "<<sky[maxi]<<endl;
    return 0;
}
