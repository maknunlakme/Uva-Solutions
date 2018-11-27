#include<iostream>
using namespace std;
int main()
{
    int original[4],fake[4],test,i,j,k,l;
    bool possible;
    for(i=0;i<test;i++)
    {
        possible=false;
        cin>>original[0];
        cin>>original[1];
        cin>>original[3];
        cin>>original[2];
        cin>>fake[0];
        cin>>fake[1];
        cin>>fake[3];
        cin>>fake[2];
        for(j=0;j<4;j++)
        {
            for(k=0;k<4;k++)
            {
                if(original[j]==fake[k])
                {
                    if(original[(j+1)%4]==fake[(k+1)%4])
                    {
                        if(original[(j+2)%4]==fake[(k+2)%4])
                        {
                            if(original[(j+3)%4]==fake[(k+3)%4])
                            {
                                possible=true;
                                break;
                            }
                        }
                    }
                }
            }
        }
        if(possible==true)
        {
            cout<<"Case #"<<i+1<<": POSSIBLE"<<endl;
        }
        else
        {
            cout<<"Case #"<<i+1<<": IMPOSSIBLE"<<endl;
        }
    }
    return 0;
}
